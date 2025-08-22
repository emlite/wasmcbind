#pragma once

#include "Any.h"
#include "Function.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Promise.h
 * @brief Bindings for the JavaScript `Promise` object.
 *
 * This file provides functions for creating and interacting with JavaScript
 * promises.
 */

/**
 * @brief An opaque type representing a JavaScript `Promise` object.
 */
DECLARE_EMLITE_TYPE(jb_Promise, em_Val);

/**
 * @brief Appends fulfillment and rejection handlers to the promise.
 *
 * @param p A pointer to the `jb_Promise` instance.
 * @param on_fulfilled The function to call when the promise is fulfilled.
 * @param on_rejected The function to call when the promise is rejected.
 * @return A new `jb_Promise`.
 */
jb_Promise jb_Promise_then(
    const jb_Promise *p, const jb_Function *on_fulfilled, const jb_Function *on_rejected
);

/**
 * @brief Appends a rejection handler to the promise.
 *
 * @param p A pointer to the `jb_Promise` instance.
 * @param on_rejected The function to call when the promise is rejected.
 * @return A new `jb_Promise`.
 */
jb_Promise jb_Promise_catch(const jb_Promise *p, const jb_Function *on_rejected);

/**
 * @brief Appends a handler to the promise that is called when the promise is
 * settled (either fulfilled or rejected).
 *
 * @param p A pointer to the `jb_Promise` instance.
 * @param on_finally The function to call when the promise is settled.
 * @return A new `jb_Promise`.
 */
jb_Promise jb_Promise_finally(const jb_Promise *p, const jb_Function *on_finally);

/**
 * @brief Returns a `Promise` object that is resolved with a given value.
 *
 * @param value The value to resolve the promise with.
 * @return A new `jb_Promise`.
 */
jb_Promise jb_Promise_resolve(const jb_Any *value);

/**
 * @brief Returns a `Promise` object that is rejected with a given reason.
 *
 * @param reason The reason for rejecting the promise.
 * @return A new `jb_Promise`.
 */
jb_Promise jb_Promise_reject(const jb_Any *reason);

/**
 * @brief Waits for a promise to be settled and returns its result.
 *
 * @param p A pointer to the `jb_Promise` instance.
 * @return The result of the promise.
 */
jb_Any jb_Promise_await(const jb_Promise *p);

#ifdef __cplusplus
}
#endif