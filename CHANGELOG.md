# CHANGELOG

To get the diff for a specific change, go to 
http://cgit.drupalcode.org/http_handler/commit/XXX 
where XXX is the change hash
To get the diff between two versions, go to 
http://cgit.drupalcode.org/http_handler/diff/?h=XXX

 * 0.5.0 (2019-02-13)

  * FIX : PHP7 compatibility

 * 0.4.0 (2017-08-25)

  * DEL : LICENSE (drupal.org)
  * UPT : Drupal coding Standard

   * Remove site_* var in flavor of http_handler_site_*
   * Remove drupal_* functions in flavor of http_handler_drupal_*

 * 0.3.0 (2017-08-24)

  * UPT : Drupal coding standards
  * FIX : hook_help... (Damned to fast implementation)
  * UPT : Readme Drupal Template
  * ADD : 410 Gone error

 * 0.2.0 (2017-08-18)

  * ADD : HttpStatusCodeEnum enumerator
  * ADD : hook_help
  * ADD : Translations
  * FIX : PSR2 standard code
  * UPT : Change licensing

 * 0.1.0 (2017-08-01)

  * init : add 400/401/405 http request handler
