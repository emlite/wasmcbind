#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Landmark.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

/** @brief Dictionary type DetectedFace */
DECLARE_EMLITE_TYPE(DetectedFace, em_Val);

/** @brief Getter of the boundingBox property */
DOMRectReadOnly DetectedFace_boundingBox(const DetectedFace *self);

/** @brief Setter of the boundingBox property */
void DetectedFace_set_boundingBox(DetectedFace* self, DOMRectReadOnly * value);

/** @brief Getter of the landmarks property */
jb_Array DetectedFace_landmarks(const DetectedFace *self);

/** @brief Setter of the landmarks property */
void DetectedFace_set_landmarks(DetectedFace* self, jb_Array * value);

/** @brief Constructor of the DetectedFace dictionary type */
DetectedFace DetectedFace_new();

#ifdef __cplusplus
}
#endif
