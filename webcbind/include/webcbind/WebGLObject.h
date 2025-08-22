#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebGLObject
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebGLObject)
 */
DECLARE_EMLITE_TYPE(WebGLObject, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String WebGLObject_label(const WebGLObject *self);

/**
 * @brief Sets the `label` property. 
*/
void WebGLObject_set_label(WebGLObject* self, jb_String * value);

#ifdef __cplusplus
}
#endif
