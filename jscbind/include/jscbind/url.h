#pragma once

#include <jscbind/jscbind.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file url.h
 * @brief Bindings for the URL and URLSearchParams JavaScript APIs.
 *
 * This file provides functions for working with URLs and URL search parameters,
 * mirroring the functionality of the `URL` and `URLSearchParams` objects in
 * JavaScript.
 */

/**
 * @brief An opaque type representing a `URLSearchParams` object.
 */
DECLARE_EMLITE_TYPE(jb_URLSearchParams, em_Val);

/**
 * @brief An opaque type representing a `URL` object.
 */
DECLARE_EMLITE_TYPE(jb_URL, em_Val);

/**
 * @brief Gets the value of a search parameter.
 *
 * @param params A pointer to the `jb_URLSearchParams` instance.
 * @param key The name of the parameter to get.
 * @param out A pointer to a `jb_String` to store the result.
 * @return `true` if the parameter was found, `false` otherwise.
 */
bool jb_URLSearchParams_get(const jb_URLSearchParams *params, const char *key, jb_String *out);

/**
 * @brief Appends a new search parameter.
 *
 * @param params A pointer to the `jb_URLSearchParams` instance.
 * @param key The name of the parameter to add.
 * @param value The value of the parameter.
 */
void jb_URLSearchParams_append(jb_URLSearchParams *params, const char *key, const char *value);

/**
 * @brief Creates a new `URL` object.
 *
 * @param input The URL string.
 * @return A new `jb_URL` instance.
 */
jb_URL jb_URL_new(const char *input);

/**
 * @brief Creates a new `URL` object with a base URL.
 *
 * @param input The URL string.
 * @param base The base URL to resolve against.
 * @return A new `jb_URL` instance.
 */
jb_URL jb_URL_new_with_base(const char *input, const char *base);

/**
 * @brief Gets the `href` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The full URL as a string.
 */
jb_String jb_URL_href(const jb_URL *url);

/**
 * @brief Sets the `href` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `href` value.
 */
void jb_URL_set_href(jb_URL *url, const char *v);

/**
 * @brief Gets the `protocol` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The protocol part of the URL.
 */
jb_String jb_URL_protocol(const jb_URL *url);

/**
 * @brief Sets the `protocol` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `protocol` value.
 */
void jb_URL_set_protocol(jb_URL *url, const char *v);

/**
 * @brief Gets the `pathname` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The path part of the URL.
 */
jb_String jb_URL_pathname(const jb_URL *url);

/**
 * @brief Sets the `pathname` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `pathname` value.
 */
void jb_URL_set_pathname(jb_URL *url, const char *v);

/**
 * @brief Gets the `searchParams` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return A `jb_URLSearchParams` instance for the URL.
 */
jb_URLSearchParams jb_URL_search_params(const jb_URL *url);

/**
 * @brief Gets the `search` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The query string part of the URL.
 */
jb_String jb_URL_search(const jb_URL *url);

/**
 * @brief Sets the `search` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param value The new `search` value.
 */
void jb_URL_set_search(jb_URL *url, const jb_String *value);

/**
 * @brief Gets the `hash` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The fragment identifier part of the URL.
 */
jb_String jb_URL_hash(const jb_URL *url);

/**
 * @brief Sets the `hash` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `hash` value.
 */
void jb_URL_set_hash(jb_URL *url, const char *v);

/**
 * @brief Gets the `host` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The host part of the URL.
 */
jb_String jb_URL_host(const jb_URL *url);

/**
 * @brief Sets the `host` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `host` value.
 */
void jb_URL_set_host(jb_URL *url, const char *v);

/**
 * @brief Gets the `hostname` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The hostname part of the URL.
 */
jb_String jb_URL_hostname(const jb_URL *url);

/**
 * @brief Sets the `hostname` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `hostname` value.
 */
void jb_URL_set_hostname(jb_URL *url, const char *v);

/**
 * @brief Gets the `password` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The password part of the URL.
 */
jb_String jb_URL_password(const jb_URL *url);

/**
 * @brief Sets the `password` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `password` value.
 */
void jb_URL_set_password(jb_URL *url, const char *v);

/**
 * @brief Gets the `port` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The port part of the URL.
 */
jb_String jb_URL_port(const jb_URL *url);

/**
 * @brief Sets the `port` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `port` value.
 */
void jb_URL_set_port(jb_URL *url, const char *v);

/**
 * @brief Gets the `username` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The username part of the URL.
 */
jb_String jb_URL_username(const jb_URL *url);

/**
 * @brief Sets the `username` property of the URL.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @param v The new `username` value.
 */
void jb_URL_set_username(jb_URL *url, const char *v);

/**
 * @brief Converts the URL to its JSON representation.
 *
 * @param url A pointer to the `jb_URL` instance.
 * @return The JSON representation of the URL as a string.
 */
jb_String jb_URL_to_json(const jb_URL *url);

#ifdef __cplusplus
}
#endif