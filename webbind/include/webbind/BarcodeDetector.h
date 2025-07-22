#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DetectedBarcode DetectedBarcode;
typedef struct DOMRectReadOnly DOMRectReadOnly;


typedef struct {
  em_Val inner;
} DetectedBarcode;


DECLARE_EMLITE_TYPE(DetectedBarcode, em_Val);

DOMRectReadOnly DetectedBarcode_boundingBox( const DetectedBarcode *self);

void DetectedBarcode_set_boundingBox(DetectedBarcode* self, const DOMRectReadOnly* value);

jb_DOMString DetectedBarcode_rawValue( const DetectedBarcode *self);

void DetectedBarcode_set_rawValue(DetectedBarcode* self, const jb_DOMString* value);

BarcodeFormat DetectedBarcode_format( const DetectedBarcode *self);

void DetectedBarcode_set_format(DetectedBarcode* self, const BarcodeFormat* value);

jb_Sequence DetectedBarcode_cornerPoints( const DetectedBarcode *self);

void DetectedBarcode_set_cornerPoints(DetectedBarcode* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} BarcodeDetector;


DECLARE_EMLITE_TYPE(BarcodeDetector, em_Val);

BarcodeDetector BarcodeDetector_new();

BarcodeDetector BarcodeDetector_new(const jb_Any* barcodeDetectorOptions);

jb_Promise BarcodeDetector_getSupportedFormats(BarcodeDetector* self );

jb_Promise BarcodeDetector_detect(BarcodeDetector* self , const jb_Any* image);
