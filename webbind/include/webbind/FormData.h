#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLFormElement HTMLFormElement;
typedef struct HTMLElement HTMLElement;
typedef struct Blob Blob;


/**
 * @brief Interface FormData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FormData)
 */
DECLARE_EMLITE_TYPE(FormData, em_Val);

/**
 * @brief Creates a new `FormData` object. 
*/
FormData FormData_new0();

/**
 * @brief Creates a new `FormData` object. 
*/
FormData FormData_new1(HTMLFormElement * form);

/**
 * @brief Creates a new `FormData` object. 
*/
FormData FormData_new2(HTMLFormElement * form, HTMLElement * submitter);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined FormData_append0(FormData* self , jb_String * name, Blob * blobValue);

/**
 * @brief Calls the `append` method. 
*/
jb_Undefined FormData_append1(FormData* self , jb_String * name, Blob * blobValue, jb_String * filename);

/**
 * @brief Calls the `delete` method. 
*/
jb_Undefined FormData_delete_(FormData* self , jb_String * name);

/**
 * @brief Calls the `get` method. 
*/
jb_Any FormData_get(FormData* self , jb_String * name);

/**
 * @brief Calls the `getAll` method. 
*/
jb_Array FormData_getAll(FormData* self , jb_String * name);

/**
 * @brief Calls the `has` method. 
*/
bool FormData_has(FormData* self , jb_String * name);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined FormData_set0(FormData* self , jb_String * name, Blob * blobValue);

/**
 * @brief Calls the `set` method. 
*/
jb_Undefined FormData_set1(FormData* self , jb_String * name, Blob * blobValue, jb_String * filename);

#ifdef __cplusplus
}
#endif
