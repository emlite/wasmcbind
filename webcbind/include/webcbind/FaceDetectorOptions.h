#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FaceDetectorOptions */
DECLARE_EMLITE_TYPE(FaceDetectorOptions, em_Val);

/** @brief Getter of the maxDetectedFaces property */
unsigned short FaceDetectorOptions_maxDetectedFaces(const FaceDetectorOptions *self);

/** @brief Setter of the maxDetectedFaces property */
void FaceDetectorOptions_set_maxDetectedFaces(FaceDetectorOptions* self, unsigned short value);

/** @brief Getter of the fastMode property */
bool FaceDetectorOptions_fastMode(const FaceDetectorOptions *self);

/** @brief Setter of the fastMode property */
void FaceDetectorOptions_set_fastMode(FaceDetectorOptions* self, bool value);

/** @brief Constructor of the FaceDetectorOptions dictionary type */
FaceDetectorOptions FaceDetectorOptions_new();

#ifdef __cplusplus
}
#endif
