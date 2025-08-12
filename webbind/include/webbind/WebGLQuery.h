#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebGLObject.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLQuery
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLQuery)
 */
DECLARE_EMLITE_TYPE(WebGLQuery, WebGLObject);

#ifdef __cplusplus
}
#endif
