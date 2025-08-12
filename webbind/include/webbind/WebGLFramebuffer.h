#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLFramebuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLFramebuffer)
 */
DECLARE_EMLITE_TYPE(WebGLFramebuffer, WebGLObject);

#ifdef __cplusplus
}
#endif
