#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLShader
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLShader)
 */
DECLARE_EMLITE_TYPE(WebGLShader, WebGLObject);

#ifdef __cplusplus
}
#endif
