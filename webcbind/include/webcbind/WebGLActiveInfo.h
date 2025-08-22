#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLActiveInfo
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLActiveInfo)
 */
DECLARE_EMLITE_TYPE(WebGLActiveInfo, em_Val);

/**
 * @brief Gets the `size` property. 
*/
jb_Any WebGLActiveInfo_size(const WebGLActiveInfo *self);

/**
 * @brief Gets the `type` property. 
*/
jb_Any WebGLActiveInfo_type(const WebGLActiveInfo *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String WebGLActiveInfo_name(const WebGLActiveInfo *self);

#ifdef __cplusplus
}
#endif
