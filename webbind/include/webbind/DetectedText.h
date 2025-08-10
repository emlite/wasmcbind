#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

DECLARE_EMLITE_TYPE(DetectedText, em_Val);

DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self);

void DetectedText_set_boundingBox(DetectedText* self, DOMRectReadOnly * value);

jb_String DetectedText_rawValue(const DetectedText *self);

void DetectedText_set_rawValue(DetectedText* self, jb_String * value);

jb_Array DetectedText_cornerPoints(const DetectedText *self);

void DetectedText_set_cornerPoints(DetectedText* self, jb_Array * value);

DetectedText DetectedText_new();

#ifdef __cplusplus
}
#endif
