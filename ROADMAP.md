# ROADMAP

* Add more http status code handler
* Set api functions to improve concept (add some alter)
  * For example, before drupal_render_page($return); in order to set return;
  * For example, before drupal_render_page($return); in order to set title;
  * For example, http_handler_exception_handler can call a hook (not an alter)
* http_handler_deliver_html_page should be more generic on order to 
simplify code.
* Check for SplEnum : https://github.com/ducks-project/spl-types
