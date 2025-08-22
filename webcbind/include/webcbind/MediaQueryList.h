#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MediaQueryList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryList)
 */
DECLARE_EMLITE_TYPE(MediaQueryList, EventTarget);

/**
 * @brief Gets the `media` property. 
*/
jb_String MediaQueryList_media(const MediaQueryList *self);

/**
 * @brief Gets the `matches` property. 
*/
bool MediaQueryList_matches(const MediaQueryList *self);

/**
 * @brief Calls the `addListener` method. 
*/
jb_Undefined MediaQueryList_addListener(MediaQueryList* self , jb_Function * callback);

/**
 * @brief Calls the `removeListener` method. 
*/
jb_Undefined MediaQueryList_removeListener(MediaQueryList* self , jb_Function * callback);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any MediaQueryList_onchange(const MediaQueryList *self);

/**
 * @brief Sets the `onchange` property. 
*/
void MediaQueryList_set_onchange(MediaQueryList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
