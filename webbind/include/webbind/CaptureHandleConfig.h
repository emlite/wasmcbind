#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CaptureHandleConfig, em_Val);

bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value);

jb_String CaptureHandleConfig_handle(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, jb_String * value);

jb_Array CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self);

void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, jb_Array * value);

CaptureHandleConfig CaptureHandleConfig_new();

#ifdef __cplusplus
}
#endif
