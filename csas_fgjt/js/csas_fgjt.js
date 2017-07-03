(function ($) {
    Drupal.behaviors.csasFgjt = {
        attach: function (context, settings) {
            $('.csas-gjgt-tbs').once('csas-fgjt-tbs', function () {
                var tE = $(this);
                tE.tabs();
                tE.on("tabsactivate", function (event, ui) {
                    $(document).trigger('documentChange');
                });
            });
        }
    };
})(jQuery);