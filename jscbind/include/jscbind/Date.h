#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Date.h
 * @brief Bindings for the JavaScript `Date` object.
 *
 * This file provides functions for creating and manipulating JavaScript dates.
 */

/**
 * @brief An opaque type representing a JavaScript `Date` object.
 */
DECLARE_EMLITE_TYPE(jb_Date, em_Val);

typedef struct jb_String jb_String;

/**
 * @brief Creates a new `Date` object representing the current time.
 *
 * @return A new `jb_Date` instance.
 */
jb_Date jb_Date_new();

/**
 * @brief Creates a new `Date` object from the number of milliseconds since the
 * Unix epoch.
 *
 * @param ms The number of milliseconds since the Unix epoch.
 * @return A new `jb_Date` instance.
 */
jb_Date jb_Date_from_epoch_millis(int64_t ms);

/**
 * @brief Returns the number of milliseconds since the Unix epoch.
 *
 * @return The number of milliseconds since the Unix epoch.
 */
int64_t jb_Date_now_epoch_millis();

/**
 * @brief Returns the primitive value of a `Date` object.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @return The number of milliseconds since the Unix epoch.
 */
int64_t jb_Date_value_of(const jb_Date *date);

/**
 * @brief Returns the number of milliseconds since the Unix epoch.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @return The number of milliseconds since the Unix epoch.
 */
int64_t jb_Date_get_time(const jb_Date *date);

/**
 * @brief Converts a date to a string in ISO 8601 format.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @return The date as an ISO 8601 string.
 */
jb_String jb_Date_to_iso_string(const jb_Date *date);

/**
 * @brief Converts a date to a string in UTC.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @return The date as a UTC string.
 */
jb_String jb_Date_to_utc_string(const jb_Date *date);

/**
 * @brief Converts a date to a string, using locale-specific conventions.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @param locales A string with a BCP 47 language tag, or an array of such
 * strings.
 * @param options An object with configuration options.
 * @return The date as a locale-specific string.
 */
jb_String jb_Date_to_locale_string(
    const jb_Date *date, const jb_Any *locales, const jb_Any *options
);

/**
 * @brief Adds a specified number of milliseconds to a date.
 *
 * @param date A pointer to the `jb_Date` instance.
 * @param delta The number of milliseconds to add.
 * @return A new `jb_Date` instance with the new date.
 */
jb_Date jb_Date_add_millis(const jb_Date *date, int64_t delta);

/**
 * @brief Calculates the difference in milliseconds between two dates.
 *
 * @param date The first date.
 * @param other The second date.
 * @return The difference in milliseconds.
 */
int64_t jb_Date_diff_millis(const jb_Date *date, const jb_Date *other);

#ifdef __cplusplus
}
#endif