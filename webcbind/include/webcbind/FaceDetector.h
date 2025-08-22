#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FaceDetectorOptions FaceDetectorOptions;
typedef struct DetectedFace DetectedFace;


/**
 * @brief Interface FaceDetector
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FaceDetector)
 */
DECLARE_EMLITE_TYPE(FaceDetector, em_Val);

/**
 * @brief Creates a new `FaceDetector` object. 
*/
FaceDetector FaceDetector_new0();

/**
 * @brief Creates a new `FaceDetector` object. 
*/
FaceDetector FaceDetector_new1(FaceDetectorOptions * faceDetectorOptions);

/**
 * @brief Calls the `detect` method. 
*/
jb_Promise FaceDetector_detect(FaceDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
