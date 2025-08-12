#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CaptureHandle */
DECLARE_EMLITE_TYPE(CaptureHandle, em_Val);

/** @brief Getter of the origin property */
jb_String CaptureHandle_origin(const CaptureHandle *self);

/** @brief Setter of the origin property */
void CaptureHandle_set_origin(CaptureHandle* self, jb_String * value);

/** @brief Getter of the handle property */
jb_String CaptureHandle_handle(const CaptureHandle *self);

/** @brief Setter of the handle property */
void CaptureHandle_set_handle(CaptureHandle* self, jb_String * value);

/** @brief Constructor of the CaptureHandle dictionary type */
CaptureHandle CaptureHandle_new();

#ifdef __cplusplus
}
#endif
