#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface URLSearchParams
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/URLSearchParams)
 */
DECLARE_EMLITE_TYPE(URLSearchParams, em_Val);

/**
 * @brief Creates a new `URLSearchParams` object. 
*/
URLSearchParams URLSearchParams_new0();

/**
 * @brief Creates a new `URLSearchParams` object. 
*/
URLSearchParams URLSearchParams_new1(jb_Any * init);

/**
 * @brief Gets the `size` property. 
*/
unsigned long URLSearchParams_size(const URLSearchParams *self);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined URLSearchParams_append(URLSearchParams* self , jb_String * name, jb_String * value);

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined URLSearchParams_delete_0(URLSearchParams* self , jb_String * name);

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined URLSearchParams_delete_1(URLSearchParams* self , jb_String * name, jb_String * value);

/**
 * @brief Calls the `get` method. 
*/
jb_String URLSearchParams_get(URLSearchParams* self , jb_String * name);

/**
 * @brief Calls the `getAll` method. 
*/
jb_Array URLSearchParams_getAll(URLSearchParams* self , jb_String * name);

/**
 * @brief Calls the `has` method. 
*/
bool URLSearchParams_has0(URLSearchParams* self , jb_String * name);

/**
 * @brief Calls the `has` method. 
*/
bool URLSearchParams_has1(URLSearchParams* self , jb_String * name, jb_String * value);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined URLSearchParams_set(URLSearchParams* self , jb_String * name, jb_String * value);

/**
 * @brief Calls the `sort` method. 
*/
jb_Undefined URLSearchParams_sort(URLSearchParams* self );

#ifdef __cplusplus
}
#endif
