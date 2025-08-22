#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContentDescription ContentDescription;


/**
 * @brief Interface ContentIndex
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ContentIndex)
 */
DECLARE_EMLITE_TYPE(ContentIndex, em_Val);

/**
 * @brief Calls the `add` method. 
*/
jb_Promise ContentIndex_add(ContentIndex* self , ContentDescription * description);

/**
 * @brief Calls the `delete` method. 
*/
jb_Promise ContentIndex_delete_(ContentIndex* self , jb_String * id);

/**
 * @brief Calls the `getAll` method. 
*/
jb_Promise ContentIndex_getAll(ContentIndex* self );

#ifdef __cplusplus
}
#endif
