/**
 * @file
 * EasyOPAC Local Materials general JS functionality.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.easyopac_local_material = {
    attach: function () {
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
    }
  };
})(jQuery, Drupal);
