#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Module Module;


/**
 * @brief Interface Instance
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Instance)
 */
DECLARE_EMLITE_TYPE(Instance, em_Val);

/**
 * @brief Creates a new `Instance` object. 
*/
Instance Instance_new0(Module * module_);

/**
 * @brief Creates a new `Instance` object. 
*/
Instance Instance_new1(Module * module_, jb_Object * importObject);

/**
 * @brief Gets the `exports` property. 
*/
jb_Object Instance_exports(const Instance *self);

#ifdef __cplusplus
}
#endif
