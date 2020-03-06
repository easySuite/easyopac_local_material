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
        for (var index in settings.facetapi.facets) {
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
      var limit = settings.limit - 1;
      ulId.find('li:gt(' + limit + ')').hide();

      // Adds "Show more" / "Show fewer" links as appropriate.
      ulId.filter(function () {
        return $(this).find('li').length > settings.limit;
      }).each(function () {
        $('<a href="#" class="facetapi-limit-link"></a>').text(settings.showMoreText).click(function () {
          if ($(this).hasClass('open')) {
            $(this).siblings().find('li:gt(' + limit + ')').slideUp();
            $(this).removeClass('open').text(settings.showMoreText);
          }
          else {
            $(this).siblings().find('li:gt(' + limit + ')').slideDown();
            $(this).addClass('open').text(Drupal.t(settings.showFewerText));
          }
          return false;
        }).insertAfter($(this));
      });
    }
  };
})(jQuery, Drupal);
