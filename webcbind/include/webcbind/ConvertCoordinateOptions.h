#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConvertCoordinateOptions */
DECLARE_EMLITE_TYPE(ConvertCoordinateOptions, em_Val);

/** @brief Getter of the fromBox property */
CSSBoxType ConvertCoordinateOptions_fromBox(const ConvertCoordinateOptions *self);

/** @brief Setter of the fromBox property */
void ConvertCoordinateOptions_set_fromBox(ConvertCoordinateOptions* self, CSSBoxType * value);

/** @brief Getter of the toBox property */
CSSBoxType ConvertCoordinateOptions_toBox(const ConvertCoordinateOptions *self);

/** @brief Setter of the toBox property */
void ConvertCoordinateOptions_set_toBox(ConvertCoordinateOptions* self, CSSBoxType * value);

/** @brief Constructor of the ConvertCoordinateOptions dictionary type */
ConvertCoordinateOptions ConvertCoordinateOptions_new();

#ifdef __cplusplus
}
#endif
