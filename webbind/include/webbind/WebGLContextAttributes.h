#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebGLContextAttributes */
DECLARE_EMLITE_TYPE(WebGLContextAttributes, em_Val);

/** @brief Getter of the xrCompatible property */
bool WebGLContextAttributes_xrCompatible(const WebGLContextAttributes *self);

/** @brief Setter of the xrCompatible property */
void WebGLContextAttributes_set_xrCompatible(WebGLContextAttributes* self, bool value);

/** @brief Constructor of the WebGLContextAttributes dictionary type */
WebGLContextAttributes WebGLContextAttributes_new();

#ifdef __cplusplus
}
#endif
