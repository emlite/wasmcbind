#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransferItem DataTransferItem;
typedef struct File File;


/**
 * @brief Interface DataTransferItemList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DataTransferItemList)
 */
DECLARE_EMLITE_TYPE(DataTransferItemList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long DataTransferItemList_length(const DataTransferItemList *self);

/**
 * @brief Calls the `add` method. 
*/
DataTransferItem DataTransferItemList_add(DataTransferItemList* self , File * data);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined DataTransferItemList_remove(DataTransferItemList* self , unsigned long index);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined DataTransferItemList_clear(DataTransferItemList* self );

#ifdef __cplusplus
}
#endif
