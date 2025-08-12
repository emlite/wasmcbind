#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "StylePropertyMapReadOnly.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface StylePropertyMap
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMap)
 */
DECLARE_EMLITE_TYPE(StylePropertyMap, StylePropertyMapReadOnly);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined StylePropertyMap_set(StylePropertyMap* self , jb_String * property, jb_Any * values);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined StylePropertyMap_append(StylePropertyMap* self , jb_String * property, jb_Any * values);

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined StylePropertyMap_delete_(StylePropertyMap* self , jb_String * property);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined StylePropertyMap_clear(StylePropertyMap* self );

#ifdef __cplusplus
}
#endif
