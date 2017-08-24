HTTP HANDLER
============

Drupal's module which provide handler in order to support multiple 
Exceptions for 4xx or 5xx HTTP status code.


INTRODUCTION
------------

The HTTP Handler module offer possibility to support many of the
http status return code in Drupal.

For example, when anonymous user try to get content of a "secure" node
it will throw a 401 instead of a 403.
You can customize error page with a content node type like
404 or 403 error page.

 * For a full description of the module, visit the project page:
   https://drupal.org/project/http_handler

 * To submit bug reports and feature suggestions, or to track changes:
   https://drupal.org/project/issues/http_handler


REQUIREMENTS
------------

This module currently does not requires any other modules, but
you should use a Drupal >= 7.10


RECOMMENDED MODULES
-------------------

 * Markdown filter (https://www.drupal.org/project/markdown):
   When enabled, display of the project's README.md help will be rendered
   with markdown.
 * X Autoload (https://www.drupal.org/project/xautoload):
   Provides Drupal-8-style PSR-4.


INSTALLATION
------------

 * Install as you would normally install a contributed Drupal module. Visit:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


CONFIGURATION
-------------

Customize error's look content in Administration » Configuration » Système.


TROUBLESHOOTING
---------------

 * If error page does not show the correct content.

  * Because by default it show 403 errors, make sure you've clean 
cache before testing.
Headers should be good instead.

FAQ
---

Q: Is the module works with fast_404?

A: Regards to fast_404 it should. But you'll not have all proposed
errors from http_handler module.

MAINTAINERS
-----------

Current maintainers:
 * Adrien Loyant (donaldinou) - https://www.drupal.org/u/donaldinou
