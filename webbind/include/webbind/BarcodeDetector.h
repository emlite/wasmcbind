#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BarcodeDetectorOptions BarcodeDetectorOptions;
typedef struct DetectedBarcode DetectedBarcode;

DECLARE_EMLITE_TYPE(BarcodeDetector, em_Val);

BarcodeDetector BarcodeDetector_new0();

BarcodeDetector BarcodeDetector_new1(BarcodeDetectorOptions * barcodeDetectorOptions);

jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self );

jb_Promise BarcodeDetector_detect(BarcodeDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
