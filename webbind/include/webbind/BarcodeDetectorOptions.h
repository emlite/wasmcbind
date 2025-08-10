#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BarcodeDetectorOptions, em_Val);

jb_Array BarcodeDetectorOptions_formats(const BarcodeDetectorOptions *self);

void BarcodeDetectorOptions_set_formats(BarcodeDetectorOptions* self, jb_Array * value);

BarcodeDetectorOptions BarcodeDetectorOptions_new();

#ifdef __cplusplus
}
#endif
