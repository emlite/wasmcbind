#pragma once

#include <jscbind/jscbind.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file JSON.h
 * @brief Bindings for the JavaScript `JSON` object.
 *
 * This file provides functions for parsing and stringifying JSON.
 */

/**
 * @brief Converts a JavaScript value to a JSON string.
 *
 * @param value The value to convert to a JSON string.
 * @param replacer A function that alters the behavior of the stringification
 * process, or an array of strings and numbers that specifies properties of
 * `value` to be included in the output.
 * @param space A `String` or `Number` object that's used to insert white
 * space into the output JSON string for readability purposes.
 * @return A JSON string representing the given value.
 */
jb_String jb_JSON_stringify(const jb_Any *value, const jb_Any *replacer, const jb_Any *space);

/**
 * @brief Parses a JSON string, constructing the JavaScript value or object
 * described by the string.
 *
 * @param json The string to parse as JSON.
 * @return The object corresponding to the given JSON text.
 */
jb_Any jb_JSON_parse(const jb_String *json);

#ifdef __cplusplus
}
#endif