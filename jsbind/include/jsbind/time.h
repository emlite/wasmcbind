#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file time.h
 * @brief Bindings for time-related JavaScript functions.
 *
 * This file provides functions for interacting with time-based JavaScript APIs,
 * such as `performance.now()`, `setTimeout()`, and `setInterval()`.
 */

/**
 * @brief Gets a high-resolution timestamp.
 *
 * This function is equivalent to `performance.now()` in JavaScript.
 *
 * @return The number of milliseconds since the page was loaded.
 */
double jb_Performance_now();

/**
 * @brief Clears a timeout previously set with `jb_set_timeout()`.
 *
 * @param id The ID of the timeout to clear.
 */
void jb_clear_timeout(int32_t id);

/**
 * @brief Clears an interval previously set with `jb_set_interval()`.
 *
 * @param id The ID of the interval to clear.
 */
void jb_clear_interval(int32_t id);

/**
 * @brief Sets a timeout to execute a function after a specified delay.
 *
 * @param cb The function to execute after the delay.
 * @param millis The delay in milliseconds.
 * @return An ID that can be used to clear the timeout with `jb_clear_timeout()`.
 */
int32_t jb_set_timeout(const jb_Function *cb, int32_t millis);

/**
 * @brief Sets an interval to repeatedly execute a function with a fixed delay.
 *
 * @param cb The function to execute at each interval.
 * @param millis The delay in milliseconds between executions.
 * @return An ID that can be used to clear the interval with `jb_clear_interval()`.
 */
int32_t jb_set_interval(const jb_Function *cb, int32_t millis);

#ifdef __cplusplus
}
#endif