#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Landmark.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

DECLARE_EMLITE_TYPE(DetectedFace, em_Val);

DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self);

void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value);

jb_Array DetectedFace_landmarks(const DetectedFace *self);

void DetectedFace_set_landmarks(DetectedFace* self, jb_Array * value);

DetectedFace DetectedFace_new();

#ifdef __cplusplus
}
#endif
