#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Storage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Storage)
 */
DECLARE_EMLITE_TYPE(Storage, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long Storage_length(const Storage *self);

/**
 * @brief Calls the `key` method. 
*/
jb_String Storage_key(Storage* self , unsigned long index);

/**
 * @brief Calls the `getItem` method. 
*/
jb_String Storage_getItem(Storage* self , jb_String * key);

/**
 * @brief Calls the `setItem` method. 
*/
jb_Undefined Storage_setItem(Storage* self , jb_String * key, jb_String * value);

/**
 * @brief Calls the `removeItem` method. 
*/
jb_Undefined Storage_removeItem(Storage* self , jb_String * key);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined Storage_clear(Storage* self );

#ifdef __cplusplus
}
#endif
