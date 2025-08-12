#pragma once

#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Error.h
 * @brief Bindings for the JavaScript `Error` object and its subtypes.
 *
 * This file provides functions for creating and interacting with JavaScript
 * error objects.
 */

/**
 * @brief An opaque type representing a JavaScript `Error` object.
 */
DECLARE_EMLITE_TYPE(jb_Error, em_Val);

/**
 * @brief Creates a new `Error` object.
 *
 * @param msg The error message.
 * @return A new `jb_Error` instance.
 */
jb_Error jb_Error_new(const char *msg);

/**
 * @brief Gets the `message` property of the error.
 *
 * @param err A pointer to the `jb_Error` instance.
 * @return The error message.
 */
jb_String jb_Error_message(const jb_Error *err);

/**
 * @brief Gets the `name` property of the error.
 *
 * @param err A pointer to the `jb_Error` instance.
 * @return The error name.
 */
jb_String jb_Error_name(const jb_Error *err);

/**
 * @brief Gets the `stack` property of the error.
 *
 * @param err A pointer to the `jb_Error` instance.
 * @return The stack trace.
 */
jb_String jb_Error_stack(const jb_Error *err);

// Standard JS error types

/** @brief An opaque type representing a JavaScript `EvalError` object. */
DECLARE_EMLITE_TYPE(jb_EvalError, em_Val);
/** @brief An opaque type representing a JavaScript `RangeError` object. */
DECLARE_EMLITE_TYPE(jb_RangeError, em_Val);
/** @brief An opaque type representing a JavaScript `ReferenceError` object. */
DECLARE_EMLITE_TYPE(jb_ReferenceError, em_Val);
/** @brief An opaque type representing a JavaScript `SyntaxError` object. */
DECLARE_EMLITE_TYPE(jb_SyntaxError, em_Val);
/** @brief An opaque type representing a JavaScript `TypeError` object. */
DECLARE_EMLITE_TYPE(jb_TypeError, em_Val);
/** @brief An opaque type representing a JavaScript `URIError` object. */
DECLARE_EMLITE_TYPE(jb_URIError, em_Val);
/** @brief An opaque type representing a JavaScript `AggregateError` object. */
DECLARE_EMLITE_TYPE(jb_AggregateError, em_Val);

// Constructors for standard error types

/** @brief Creates a new `EvalError` object. */
jb_EvalError jb_EvalError_new(const char *msg);
/** @brief Creates a new `RangeError` object. */
jb_RangeError jb_RangeError_new(const char *msg);
/** @brief Creates a new `ReferenceError` object. */
jb_ReferenceError jb_ReferenceError_new(const char *msg);
/** @brief Creates a new `SyntaxError` object. */
jb_SyntaxError jb_SyntaxError_new(const char *msg);
/** @brief Creates a new `TypeError` object. */
jb_TypeError jb_TypeError_new(const char *msg);
/** @brief Creates a new `URIError` object. */
jb_URIError jb_URIError_new(const char *msg);
/** @brief Creates a new `AggregateError` object. */
jb_AggregateError jb_AggregateError_new(const char *msg);

#ifdef __cplusplus
}
#endif