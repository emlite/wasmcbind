#pragma once

#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Undefined.h
 * @brief Bindings for the JavaScript `undefined` value.
 *
 * This file provides a type and function for representing and obtaining the
 * JavaScript `undefined` value.
 */

/**
 * @brief An opaque type representing the JavaScript `undefined` value.
 */
DECLARE_EMLITE_TYPE(jb_Undefined, em_Val);

/**
 * @brief Gets the JavaScript `undefined` value.
 *
 * @return A `jb_Undefined` instance representing `undefined`.
 */
jb_Undefined jb_Undefined_value();

#ifdef __cplusplus
}
#endif
