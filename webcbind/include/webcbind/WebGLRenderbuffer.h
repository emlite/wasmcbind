#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLRenderbuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLRenderbuffer)
 */
DECLARE_EMLITE_TYPE(WebGLRenderbuffer, WebGLObject);

#ifdef __cplusplus
}
#endif
