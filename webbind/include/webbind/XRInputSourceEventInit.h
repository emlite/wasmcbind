#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRFrame XRFrame;
typedef struct XRInputSource XRInputSource;

/** @brief Dictionary type XRInputSourceEventInit */
DECLARE_EMLITE_TYPE(XRInputSourceEventInit, EventInit);

/** @brief Getter of the frame property */
XRFrame XRInputSourceEventInit_frame(const XRInputSourceEventInit *self);

/** @brief Setter of the frame property */
void XRInputSourceEventInit_set_frame(XRInputSourceEventInit* self, XRFrame * value);

/** @brief Getter of the inputSource property */
XRInputSource XRInputSourceEventInit_inputSource(const XRInputSourceEventInit *self);

/** @brief Setter of the inputSource property */
void XRInputSourceEventInit_set_inputSource(XRInputSourceEventInit* self, XRInputSource * value);

/** @brief Constructor of the XRInputSourceEventInit dictionary type */
XRInputSourceEventInit XRInputSourceEventInit_new();

#ifdef __cplusplus
}
#endif
