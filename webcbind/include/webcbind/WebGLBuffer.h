#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLBuffer)
 */
DECLARE_EMLITE_TYPE(WebGLBuffer, WebGLObject);

#ifdef __cplusplus
}
#endif
