#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MediaList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaList)
 */
DECLARE_EMLITE_TYPE(MediaList, em_Val);

/**
 * @brief Gets the `mediaText` property. 
*/
jb_String MediaList_mediaText(const MediaList *self);

/**
 * @brief Sets the `mediaText` property. 
*/
void MediaList_set_mediaText(MediaList* self, jb_String * value);

/**
 * @brief Gets the `length` property. 
*/
unsigned long MediaList_length(const MediaList *self);

/**
 * @brief Calls the `item` method. 
*/
jb_String MediaList_item(MediaList* self , unsigned long index);

/**
 * @brief Calls the `appendMedium` method. 
*/
jb_Undefined MediaList_appendMedium(MediaList* self , jb_String * medium);

/**
 * @brief Calls the `deleteMedium` method. 
*/
jb_Undefined MediaList_deleteMedium(MediaList* self , jb_String * medium);

#ifdef __cplusplus
}
#endif
