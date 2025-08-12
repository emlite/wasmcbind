#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Plugin Plugin;


/**
 * @brief Interface PluginArray
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PluginArray)
 */
DECLARE_EMLITE_TYPE(PluginArray, em_Val);

/**
 * @brief Calls the `refresh` method. 
*/
jb_Undefined PluginArray_refresh(PluginArray* self );

/**
 * @brief Gets the `length` property. 
*/
unsigned long PluginArray_length(const PluginArray *self);

/**
 * @brief Calls the `item` method. 
*/
Plugin PluginArray_item(PluginArray* self , unsigned long index);

/**
 * @brief Calls the `namedItem` method. 
*/
Plugin PluginArray_namedItem(PluginArray* self , jb_String * name);

#ifdef __cplusplus
}
#endif
