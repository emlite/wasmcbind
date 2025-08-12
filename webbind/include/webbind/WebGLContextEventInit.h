#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebGLContextEventInit */
DECLARE_EMLITE_TYPE(WebGLContextEventInit, EventInit);

/** @brief Getter of the statusMessage property */
jb_String WebGLContextEventInit_statusMessage(const WebGLContextEventInit *self);

/** @brief Setter of the statusMessage property */
void WebGLContextEventInit_set_statusMessage(WebGLContextEventInit* self, jb_String * value);

/** @brief Constructor of the WebGLContextEventInit dictionary type */
WebGLContextEventInit WebGLContextEventInit_new();

#ifdef __cplusplus
}
#endif
