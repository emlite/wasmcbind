#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleValue CSSStyleValue;


/**
 * @brief Interface StylePropertyMapReadOnly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StylePropertyMapReadOnly)
 */
DECLARE_EMLITE_TYPE(StylePropertyMapReadOnly, em_Val);

/**
 * @brief Calls the `get` method. 
*/
jb_Any StylePropertyMapReadOnly_get(StylePropertyMapReadOnly* self , jb_String * property);

/**
 * @brief Calls the `getAll` method. 
*/
jb_Array StylePropertyMapReadOnly_getAll(StylePropertyMapReadOnly* self , jb_String * property);

/**
 * @brief Calls the `has` method. 
*/
bool StylePropertyMapReadOnly_has(StylePropertyMapReadOnly* self , jb_String * property);

/**
 * @brief Gets the `size` property. 
*/
unsigned long StylePropertyMapReadOnly_size(const StylePropertyMapReadOnly *self);

#ifdef __cplusplus
}
#endif
