#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Console.h
 * @brief Bindings for the JavaScript `console` object.
 *
 * This file provides functions for logging to the browser console.
 */

/**
 * @brief An opaque type representing the JavaScript `console` object.
 */
DECLARE_EMLITE_TYPE(jb_Console, em_Val);

/**
 * @brief Gets the global `console` object.
 *
 * @return A `jb_Console` instance.
 */
jb_Console jb_Console_get();

/**
 * @brief Logs a message to the console.
 *
 * @param con A pointer to the `jb_Console` instance.
 * @param nargs The number of arguments to log.
 * @param ... The arguments to log.
 */
void jb_Console_log(const jb_Console *con, size_t nargs, ...);

/**
 * @brief Logs a warning message to the console.
 *
 * @param con A pointer to the `jb_Console` instance.
 * @param nargs The number of arguments to log.
 * @param ... The arguments to log.
 */
void jb_Console_warn(const jb_Console *con, size_t nargs, ...);

/**
 * @brief Logs an informational message to the console.
 *
 * @param con A pointer to the `jb_Console` instance.
 * @param nargs The number of arguments to log.
 * @param ... The arguments to log.
 */
void jb_Console_info(const jb_Console *con, size_t nargs, ...);

/**
 * @brief Clears the console.
 *
 * @param con A pointer to the `jb_Console` instance.
 */
void jb_Console_clear(const jb_Console *con);

#ifdef __cplusplus
}
#endif
