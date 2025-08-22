#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BarcodeDetectorOptions */
DECLARE_EMLITE_TYPE(BarcodeDetectorOptions, em_Val);

/** @brief Getter of the formats property */
jb_Array BarcodeDetectorOptions_formats(const BarcodeDetectorOptions *self);

/** @brief Setter of the formats property */
void BarcodeDetectorOptions_set_formats(BarcodeDetectorOptions* self, jb_Array * value);

/** @brief Constructor of the BarcodeDetectorOptions dictionary type */
BarcodeDetectorOptions BarcodeDetectorOptions_new();

#ifdef __cplusplus
}
#endif
