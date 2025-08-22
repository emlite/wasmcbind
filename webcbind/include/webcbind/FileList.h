#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct File File;


/**
 * @brief Interface FileList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/FileList)
 */
DECLARE_EMLITE_TYPE(FileList, em_Val);

/**
 * @brief Calls the `item` method. 
*/
File FileList_item(FileList* self , unsigned long index);

/**
 * @brief Gets the `length` property. 
*/
unsigned long FileList_length(const FileList *self);

#ifdef __cplusplus
}
#endif
