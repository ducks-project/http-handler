<?php

/**
 * @file
 * Defines callback functions to use anyplaces.
 */

use Drupal\http_handler\Component\Enum\HttpStatusCodeEnum;

/**
 * Delivers a "bad request" error to the browser.
 *
 * Page callback functions wanting to report a "bad request" message should
 * return HTTP_BAD_REQUEST instead of calling drupal_bad_request().
 * However,
 * functions that are invoked in contexts where
 * that return value might not
 * bubble up to menu_execute_active_handler() should call
 * drupal_bad_request().
 */
function http_handler_drupal_bad_request() {
  drupal_deliver_page(HttpStatusCodeEnum::HTTP_BAD_REQUEST);
}

/**
 * Delivers a "unauthorized" error to the browser.
 *
 * Page callback functions wanting to report a "unauthorized" message should
 * return HTTP_UNAUTHORIZED instead of calling drupal_unauthorized().
 * However,
 * functions that are invoked in contexts where
 * that return value might not
 * bubble up to menu_execute_active_handler() should call
 * drupal_unauthorized().
 */
function http_handler_drupal_unauthorized() {
  drupal_deliver_page(HttpStatusCodeEnum::HTTP_UNAUTHORIZED);
}

/**
 * Delivers a "forbidden" error to the browser.
 *
 * Page callback functions wanting to report a "forbidden" message should
 * return HTTP_FORBIDDEN instead of calling drupal_forbidden().
 * However,
 * functions that are invoked in contexts where
 * that return value might not
 * bubble up to menu_execute_active_handler() should call
 * drupal_unauthorized().
 */
function http_handler_drupal_forbidden() {
  drupal_deliver_page(HttpStatusCodeEnum::HTTP_FORBIDDEN);
}

/**
 * Delivers a "method not allowed" error to the browser.
 *
 * Page callback functions wanting to report a "method not allowed"
 * message should return HTTP_METHOD_NOT_ALLOWED
 * instead of calling drupal_method_not_allowed().
 * However,
 * functions that are invoked in contexts where
 * that return value might not
 * bubble up to menu_execute_active_handler() should call
 * drupal_method_not_allowed().
 */
function http_handler_drupal_method_not_allowed() {
  drupal_deliver_page(HttpStatusCodeEnum::HTTP_METHOD_NOT_ALLOWED);
}

/**
 * Delivers a "gone" error to the browser.
 *
 * Page callback functions wanting to report a "gone"
 * message should return HTTP_GONE
 * instead of calling drupal_gone().
 * However,
 * functions that are invoked in contexts where
 * that return value might not
 * bubble up to menu_execute_active_handler() should call
 * drupal_gone().
 */
function http_handler_drupal_gone() {
  drupal_deliver_page(HttpStatusCodeEnum::HTTP_GONE);
}
