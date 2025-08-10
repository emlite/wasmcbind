#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FaceDetectorOptions, em_Val);

unsigned short FaceDetectorOptions_maxDetectedFaces(const FaceDetectorOptions *self);

void FaceDetectorOptions_set_maxDetectedFaces(FaceDetectorOptions* self, unsigned short value);

bool FaceDetectorOptions_fastMode(const FaceDetectorOptions *self);

void FaceDetectorOptions_set_fastMode(FaceDetectorOptions* self, bool value);

FaceDetectorOptions FaceDetectorOptions_new();

#ifdef __cplusplus
}
#endif
