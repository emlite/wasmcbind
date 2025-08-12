#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GlobalDescriptor GlobalDescriptor;


/**
 * @brief Interface Global
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Global)
 */
DECLARE_EMLITE_TYPE(Global, em_Val);

/**
 * @brief Creates a new `Global` object. 
*/
Global Global_new0(GlobalDescriptor * descriptor);

/**
 * @brief Creates a new `Global` object. 
*/
Global Global_new1(GlobalDescriptor * descriptor, jb_Any * v);

/**
 * @brief Calls the `valueOf` method. 
*/
jb_Any Global_valueOf(Global* self );

/**
 * @brief Gets the `value` property. 
*/
jb_Any Global_value(const Global *self);

/**
 * @brief Sets the `value` property. 
*/
void Global_set_value(Global* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
