#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FaceDetectorOptions FaceDetectorOptions;
typedef struct DetectedFace DetectedFace;

DECLARE_EMLITE_TYPE(FaceDetector, em_Val);

FaceDetector FaceDetector_new0();

FaceDetector FaceDetector_new1(FaceDetectorOptions * faceDetectorOptions);

jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
