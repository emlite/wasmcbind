#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BarcodeDetectorOptions BarcodeDetectorOptions;
typedef struct DetectedBarcode DetectedBarcode;


/**
 * @brief Interface BarcodeDetector
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BarcodeDetector)
 */
DECLARE_EMLITE_TYPE(BarcodeDetector, em_Val);

/**
 * @brief Creates a new `BarcodeDetector` object. 
*/
BarcodeDetector BarcodeDetector_new0();

/**
 * @brief Creates a new `BarcodeDetector` object. 
*/
BarcodeDetector BarcodeDetector_new1(BarcodeDetectorOptions * barcodeDetectorOptions);

/**
 * @brief Calls the `getSupportedFormats` method. 
*/
jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self );

/**
 * @brief Calls the `detect` method. 
*/
jb_Promise BarcodeDetector_detect(BarcodeDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
