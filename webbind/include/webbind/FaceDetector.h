#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DetectedFace DetectedFace;
typedef struct DOMRectReadOnly DOMRectReadOnly;


typedef struct {
  em_Val inner;
} DetectedFace;


DECLARE_EMLITE_TYPE(DetectedFace, em_Val);

DOMRectReadOnly DetectedFace_boundingBox( const DetectedFace *self);

void DetectedFace_set_boundingBox(DetectedFace* self, const DOMRectReadOnly* value);

jb_Sequence DetectedFace_landmarks( const DetectedFace *self);

void DetectedFace_set_landmarks(DetectedFace* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} FaceDetector;


DECLARE_EMLITE_TYPE(FaceDetector, em_Val);

FaceDetector FaceDetector_new();

FaceDetector FaceDetector_new(const jb_Any* faceDetectorOptions);

jb_Promise FaceDetector_detect(FaceDetector* self , const jb_Any* image);
