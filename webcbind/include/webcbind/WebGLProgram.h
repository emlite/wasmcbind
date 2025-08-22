#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLProgram
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLProgram)
 */
DECLARE_EMLITE_TYPE(WebGLProgram, WebGLObject);

#ifdef __cplusplus
}
#endif
