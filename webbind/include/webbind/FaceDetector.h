#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DetectedFace DetectedFace;
typedef struct DOMRectReadOnly DOMRectReadOnly;


DECLARE_EMLITE_TYPE(DetectedFace, em_Val);

DOMRectReadOnly DetectedFace_boundingBox( const DetectedFace *self);

void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value);

jb_Sequence DetectedFace_landmarks( const DetectedFace *self);

void DetectedFace_set_landmarks(DetectedFace* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(FaceDetector, em_Val);

FaceDetector FaceDetector_new0();

FaceDetector FaceDetector_new1(jb_Any * faceDetectorOptions);

jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image);
