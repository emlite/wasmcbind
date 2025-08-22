#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DataTransferItemList DataTransferItemList;
typedef struct Element Element;
typedef struct FileList FileList;


/**
 * @brief Interface DataTransfer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DataTransfer)
 */
DECLARE_EMLITE_TYPE(DataTransfer, em_Val);

/**
 * @brief Creates a new `DataTransfer` object. 
*/
DataTransfer DataTransfer_new();

/**
 * @brief Gets the `dropEffect` property. 
*/
jb_String DataTransfer_dropEffect(const DataTransfer *self);

/**
 * @brief Sets the `dropEffect` property. 
*/
void DataTransfer_set_dropEffect(DataTransfer* self, jb_String * value);

/**
 * @brief Gets the `effectAllowed` property. 
*/
jb_String DataTransfer_effectAllowed(const DataTransfer *self);

/**
 * @brief Sets the `effectAllowed` property. 
*/
void DataTransfer_set_effectAllowed(DataTransfer* self, jb_String * value);

/**
 * @brief Gets the `items` property. 
*/
DataTransferItemList DataTransfer_items(const DataTransfer *self);

/**
 * @brief Calls the `setDragImage` method. 
*/
jb_Undefined DataTransfer_setDragImage(DataTransfer* self , Element * image, long x, long y);

/**
 * @brief Gets the `types` property. 
*/
jb_Array DataTransfer_types(const DataTransfer *self);

/**
 * @brief Calls the `getData` method. 
*/
jb_String DataTransfer_getData(DataTransfer* self , jb_String * format);

/**
 * @brief Calls the `setData` method. 
*/
jb_Undefined DataTransfer_setData(DataTransfer* self , jb_String * format, jb_String * data);

/**
 * @brief Calls the `clearData` method. 
*/
jb_Undefined DataTransfer_clearData0(DataTransfer* self );

/**
 * @brief Calls the `clearData` method. 
*/
jb_Undefined DataTransfer_clearData1(DataTransfer* self , jb_String * format);

/**
 * @brief Gets the `files` property. 
*/
FileList DataTransfer_files(const DataTransfer *self);

#ifdef __cplusplus
}
#endif
