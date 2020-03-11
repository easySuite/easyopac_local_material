/**
 * @file
 * EasyOPAC Local Materials general JS functionality.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.easyopac_local_material = {
    attach: function (context, settings) {
      let facets = $('.facetapi-facetapi-checkbox-links');

      // Check for click in checkbox, and execute search.
      facets.find('.form-type-checkbox input').change(function (e) {
        Drupal.TingSearchOverlay();
        window.location = $(e.target).parent().find('a').attr('href');
      });

      // Check facet links for click events.
      facets.find('.form-type-checkbox a').click(function () {
        if ($(this).not('[target="_blank"]').length) {
          Drupal.TingSearchOverlay();
        }
      });

      if (settings.facetapi) {
        for (let index in settings.facetapi.facets) {
          if (null != settings.facetapi.facets[index].limit) {
            // Applies soft limit to the list.
            Drupal.facetapi_local.applyLimit(settings.facetapi.facets[index]);
          }
        }
      }
    }
  };

  /**
   * Class containing functionality for Facet API.
   */
  Drupal.facetapi_local = {};

  /**
   * Applies the soft limit to facets in the block realm.
   */
  Drupal.facetapi_local.applyLimit = function (settings) {
    let ulId = $('ul#' + settings.id);
    if (settings.limit > 0 && !ulId.hasClass('facetapi-processed')) {
      // Only process this code once per page load.
      ulId.addClass('facetapi-processed');

      // Ensures our limit is zero-based, hides facets over the limit.
      let initLimit = settings.limit - 1;
      ulId.find('li:gt(' + initLimit + ')').hide();

      // Adds "Show more" / "Show fewer" links as appropriate.
      ulId.filter(function () {
        let totalCount = $(this).find('li').length;
        let settingsLimit = settings.limit;
        return totalCount > settingsLimit;
      }).each(function () {
        let facetLength = $(this).find('li').length;
        let showMoreLink = $('<a href="#" class="facetapi-limit-link show-more"></a>').text(settings.showMoreText);
        let showLessLink = $('<a href="#" class="facetapi-limit-link show-less"></a>').text(settings.showFewerText);

        showMoreLink.insertAfter($(this)).click(function (e) {
          e.preventDefault();
          initLimit += 6;
          $(this).siblings().find('li:lt(' + initLimit + ')').slideDown('fast');
          showLessLink.addClass('open').insertAfter($(this));

          if (initLimit >= facetLength) {
            showMoreLink.hide();
            showLessLink.show(function () {
              initLimit = settings.limit - 1;
            });
          }
          else {
            showMoreLink.show();
            showLessLink.show();
          }
        });

        showLessLink.click(function (e) {
          e.preventDefault();
          let returnCount = settings.limit - 1;
          $(this).siblings().find('li:gt(' + returnCount + ')').slideUp('fast');
          showMoreLink.show();
          showLessLink.hide(function () {
            initLimit = returnCount;
          });
        });
      });
    }
  };
})(jQuery, Drupal);
