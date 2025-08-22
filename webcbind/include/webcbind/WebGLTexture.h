#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLTexture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLTexture)
 */
DECLARE_EMLITE_TYPE(WebGLTexture, WebGLObject);

#ifdef __cplusplus
}
#endif
