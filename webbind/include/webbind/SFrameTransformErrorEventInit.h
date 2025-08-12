#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SFrameTransformErrorEventInit */
DECLARE_EMLITE_TYPE(SFrameTransformErrorEventInit, EventInit);

/** @brief Getter of the errorType property */
SFrameTransformErrorEventType SFrameTransformErrorEventInit_errorType(const SFrameTransformErrorEventInit *self);

/** @brief Setter of the errorType property */
void SFrameTransformErrorEventInit_set_errorType(SFrameTransformErrorEventInit* self, SFrameTransformErrorEventType * value);

/** @brief Getter of the frame property */
jb_Any SFrameTransformErrorEventInit_frame(const SFrameTransformErrorEventInit *self);

/** @brief Setter of the frame property */
void SFrameTransformErrorEventInit_set_frame(SFrameTransformErrorEventInit* self, jb_Any * value);

/** @brief Getter of the keyID property */
jb_Any SFrameTransformErrorEventInit_keyID(const SFrameTransformErrorEventInit *self);

/** @brief Setter of the keyID property */
void SFrameTransformErrorEventInit_set_keyID(SFrameTransformErrorEventInit* self, jb_Any * value);

/** @brief Constructor of the SFrameTransformErrorEventInit dictionary type */
SFrameTransformErrorEventInit SFrameTransformErrorEventInit_new();

#ifdef __cplusplus
}
#endif
