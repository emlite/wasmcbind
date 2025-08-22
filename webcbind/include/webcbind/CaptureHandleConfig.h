#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CaptureHandleConfig */
DECLARE_EMLITE_TYPE(CaptureHandleConfig, em_Val);

/** @brief Getter of the exposeOrigin property */
bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self);

/** @brief Setter of the exposeOrigin property */
void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value);

/** @brief Getter of the handle property */
jb_String CaptureHandleConfig_handle(const CaptureHandleConfig *self);

/** @brief Setter of the handle property */
void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, jb_String * value);

/** @brief Getter of the permittedOrigins property */
jb_Array CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self);

/** @brief Setter of the permittedOrigins property */
void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, jb_Array * value);

/** @brief Constructor of the CaptureHandleConfig dictionary type */
CaptureHandleConfig CaptureHandleConfig_new();

#ifdef __cplusplus
}
#endif
