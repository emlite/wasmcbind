#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CaptureHandle, em_Val);

jb_String CaptureHandle_origin(const CaptureHandle *self);

void CaptureHandle_set_origin(CaptureHandle* self, jb_String * value);

jb_String CaptureHandle_handle(const CaptureHandle *self);

void CaptureHandle_set_handle(CaptureHandle* self, jb_String * value);

CaptureHandle CaptureHandle_new();

#ifdef __cplusplus
}
#endif
