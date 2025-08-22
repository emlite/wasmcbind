#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Response.h
 * @brief Bindings for the JavaScript `Response` and `fetch` APIs.
 *
 * This file provides functions for working with HTTP responses and making HTTP
 * requests using the `fetch` API.
 */

/**
 * @brief An opaque type representing a JavaScript `Response` object.
 */
DECLARE_EMLITE_TYPE(jb_Response, em_Val);

typedef struct jb_Promise jb_Promise;

/**
 * @brief Checks if the response was successful.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return `true` if the response has a status in the range 200-299, `false`
 * otherwise.
 */
bool jb_Response_ok(const jb_Response *response);

/**
 * @brief Gets the status code of the response.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return The status code of the response.
 */
uint16_t jb_Response_status(const jb_Response *response);

/**
 * @brief Gets the headers of the response.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return The headers of the response as a `jb_Any` object.
 */
jb_Any jb_Response_headers_raw(const jb_Response *response);

/**
 * @brief Reads the response body as text.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return A `jb_Promise` that resolves with the response body as a string.
 */
jb_Promise jb_Response_text(const jb_Response *response);

/**
 * @brief Reads the response body as JSON.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return A `jb_Promise` that resolves with the response body as a JSON object.
 */
jb_Promise jb_Response_json(const jb_Response *response);

/**
 * @brief Reads the response body as an `ArrayBuffer`.
 *
 * @param response A pointer to the `jb_Response` instance.
 * @return A `jb_Promise` that resolves with the response body as an
 * `ArrayBuffer`.
 */
jb_Promise jb_Response_array_buffer(const jb_Response *response);

/**
 * @brief Makes an HTTP request.
 *
 * @param input The URL to fetch.
 * @return A `jb_Promise` that resolves with the `jb_Response` object.
 */
jb_Promise jb_fetch(const char *input);

/**
 * @brief Makes an HTTP request with additional options.
 *
 * @param input The URL to fetch.
 * @param init An object containing request options.
 * @return A `jb_Promise` that resolves with the `jb_Response` object.
 */
jb_Promise jb_fetch_with_init(const char *input, const jb_Any *init);

/**
 * @brief Makes an HTTP request using a `jb_Any` as input.
 *
 * @param input The URL or `Request` object to fetch.
 * @return A `jb_Promise` that resolves with the `jb_Response` object.
 */
jb_Promise jb_fetch_val(const jb_Any *input);

/**
 * @brief Makes an HTTP request with additional options using a `jb_Any` as
 * input.
 *
 * @param input The URL or `Request` object to fetch.
 * @param init An object containing request options.
 * @return A `jb_Promise` that resolves with the `jb_Response` object.
 */
jb_Promise jb_fetch_val_with_init(const char *input, const jb_Any *init);

#ifdef __cplusplus
}
#endif