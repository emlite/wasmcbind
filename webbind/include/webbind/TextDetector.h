#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DetectedText DetectedText;
typedef struct DOMRectReadOnly DOMRectReadOnly;


DECLARE_EMLITE_TYPE(DetectedText, em_Val);

DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self);

void DetectedText_set_boundingBox(DetectedText* self, DOMRectReadOnly * value);

jb_DOMString DetectedText_rawValue(const DetectedText *self);

void DetectedText_set_rawValue(DetectedText* self, jb_DOMString * value);

jb_Sequence DetectedText_cornerPoints(const DetectedText *self);

void DetectedText_set_cornerPoints(DetectedText* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(TextDetector, em_Val);

TextDetector TextDetector_new();

jb_Promise TextDetector_detect(TextDetector* self , jb_Any * image);
