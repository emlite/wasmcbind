#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Point2D.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRectReadOnly DOMRectReadOnly;

/** @brief Dictionary type DetectedText */
DECLARE_EMLITE_TYPE(DetectedText, em_Val);

/** @brief Getter of the boundingBox property */
DOMRectReadOnly DetectedText_boundingBox(const DetectedText *self);

/** @brief Setter of the boundingBox property */
void DetectedText_set_boundingBox(DetectedText* self, DOMRectReadOnly * value);

/** @brief Getter of the rawValue property */
jb_String DetectedText_rawValue(const DetectedText *self);

/** @brief Setter of the rawValue property */
void DetectedText_set_rawValue(DetectedText* self, jb_String * value);

/** @brief Getter of the cornerPoints property */
jb_Array DetectedText_cornerPoints(const DetectedText *self);

/** @brief Setter of the cornerPoints property */
void DetectedText_set_cornerPoints(DetectedText* self, jb_Array * value);

/** @brief Constructor of the DetectedText dictionary type */
DetectedText DetectedText_new();

#ifdef __cplusplus
}
#endif
