#pragma once

#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Null.h
 * @brief Bindings for the JavaScript `null` value.
 *
 * This file provides a type and function for representing and obtaining the
 * JavaScript `null` value.
 */

/**
 * @brief An opaque type representing the JavaScript `null` value.
 */
DECLARE_EMLITE_TYPE(jb_Null, em_Val);

/**
 * @brief Gets the JavaScript `null` value.
 *
 * @return A `jb_Null` instance representing `null`.
 */
jb_Null jb_Null_value();

#ifdef __cplusplus
}
#endif
