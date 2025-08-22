#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLSync
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLSync)
 */
DECLARE_EMLITE_TYPE(WebGLSync, WebGLObject);

#ifdef __cplusplus
}
#endif
