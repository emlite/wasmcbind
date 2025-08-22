#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

/** @brief Dictionary type DetectedBarcode */
DECLARE_EMLITE_TYPE(DetectedBarcode, em_Val);

/** @brief Getter of the boundingBox property */
DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self);

/** @brief Setter of the boundingBox property */
void DetectedBarcode_set_boundingBox(DetectedBarcode* self, DOMRectReadOnly * value);

/** @brief Getter of the rawValue property */
jb_String DetectedBarcode_rawValue(const DetectedBarcode *self);

/** @brief Setter of the rawValue property */
void DetectedBarcode_set_rawValue(DetectedBarcode* self, jb_String * value);

/** @brief Getter of the format property */
BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self);

/** @brief Setter of the format property */
void DetectedBarcode_set_format(DetectedBarcode* self, BarcodeFormat * value);

/** @brief Getter of the cornerPoints property */
jb_Array DetectedBarcode_cornerPoints(const DetectedBarcode *self);

/** @brief Setter of the cornerPoints property */
void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, jb_Array * value);

/** @brief Constructor of the DetectedBarcode dictionary type */
DetectedBarcode DetectedBarcode_new();

#ifdef __cplusplus
}
#endif
