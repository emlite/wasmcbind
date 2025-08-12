#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface Headers
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Headers)
 */
DECLARE_EMLITE_TYPE(Headers, em_Val);

/**
 * @brief Creates a new `Headers` object. 
*/
Headers Headers_new0();

/**
 * @brief Creates a new `Headers` object. 
*/
Headers Headers_new1(jb_Any * init);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined Headers_append(Headers* self , jb_String * name, jb_String * value);

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined Headers_delete_(Headers* self , jb_String * name);

/**
 * @brief Calls the `get` method. 
*/
jb_String Headers_get(Headers* self , jb_String * name);

/**
 * @brief Calls the `getSetCookie` method. 
*/
jb_Array Headers_getSetCookie(Headers* self );

/**
 * @brief Calls the `has` method. 
*/
bool Headers_has(Headers* self , jb_String * name);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined Headers_set(Headers* self , jb_String * name, jb_String * value);

#ifdef __cplusplus
}
#endif
