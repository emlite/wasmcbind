#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

DECLARE_EMLITE_TYPE(DetectedBarcode, em_Val);

DOMRectReadOnly DetectedBarcode_boundingBox(const DetectedBarcode *self);

void DetectedBarcode_set_boundingBox(DetectedBarcode* self, DOMRectReadOnly * value);

jb_String DetectedBarcode_rawValue(const DetectedBarcode *self);

void DetectedBarcode_set_rawValue(DetectedBarcode* self, jb_String * value);

BarcodeFormat DetectedBarcode_format(const DetectedBarcode *self);

void DetectedBarcode_set_format(DetectedBarcode* self, BarcodeFormat * value);

jb_Array DetectedBarcode_cornerPoints(const DetectedBarcode *self);

void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, jb_Array * value);

DetectedBarcode DetectedBarcode_new();

#ifdef __cplusplus
}
#endif
