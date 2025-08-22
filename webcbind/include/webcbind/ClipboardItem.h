#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ClipboardItemOptions ClipboardItemOptions;
typedef struct Blob Blob;


/**
 * @brief Interface ClipboardItem
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ClipboardItem)
 */
DECLARE_EMLITE_TYPE(ClipboardItem, em_Val);

/**
 * @brief Creates a new `ClipboardItem` object. 
*/
ClipboardItem ClipboardItem_new0(jb_Object * items);

/**
 * @brief Creates a new `ClipboardItem` object. 
*/
ClipboardItem ClipboardItem_new1(jb_Object * items, ClipboardItemOptions * options);

/**
 * @brief Gets the `presentationStyle` property. 
*/
PresentationStyle ClipboardItem_presentationStyle(const ClipboardItem *self);

/**
 * @brief Gets the `types` property. 
*/
jb_Array ClipboardItem_types(const ClipboardItem *self);

/**
 * @brief Calls the `getType` method. 
*/
jb_Promise ClipboardItem_getType(ClipboardItem* self , jb_String * type);

/**
 * @brief Calls the `supports` method. 
*/
bool ClipboardItem_supports(ClipboardItem* self , jb_String * type);

#ifdef __cplusplus
}
#endif
