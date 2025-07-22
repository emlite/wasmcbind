#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DetectedText DetectedText;
typedef struct DOMRectReadOnly DOMRectReadOnly;


typedef struct {
  em_Val inner;
} DetectedText;


DECLARE_EMLITE_TYPE(DetectedText, em_Val);

DOMRectReadOnly DetectedText_boundingBox( const DetectedText *self);

void DetectedText_set_boundingBox(DetectedText* self, const DOMRectReadOnly* value);

jb_DOMString DetectedText_rawValue( const DetectedText *self);

void DetectedText_set_rawValue(DetectedText* self, const jb_DOMString* value);

jb_Sequence DetectedText_cornerPoints( const DetectedText *self);

void DetectedText_set_cornerPoints(DetectedText* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} TextDetector;


DECLARE_EMLITE_TYPE(TextDetector, em_Val);

TextDetector TextDetector_new();

jb_Promise TextDetector_detect(TextDetector* self , const jb_Any* image);
