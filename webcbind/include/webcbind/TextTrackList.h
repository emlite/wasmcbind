#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextTrack TextTrack;


/**
 * @brief Interface TextTrackList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackList)
 */
DECLARE_EMLITE_TYPE(TextTrackList, EventTarget);

/**
 * @brief Gets the `length` property. 
*/
unsigned long TextTrackList_length(const TextTrackList *self);

/**
 * @brief Calls the `getTrackById` method. 
*/
TextTrack TextTrackList_getTrackById(TextTrackList* self , jb_String * id);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any TextTrackList_onchange(const TextTrackList *self);

/**
 * @brief Sets the `onchange` property. 
*/
void TextTrackList_set_onchange(TextTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onaddtrack` property. 
*/
jb_Any TextTrackList_onaddtrack(const TextTrackList *self);

/**
 * @brief Sets the `onaddtrack` property. 
*/
void TextTrackList_set_onaddtrack(TextTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onremovetrack` property. 
*/
jb_Any TextTrackList_onremovetrack(const TextTrackList *self);

/**
 * @brief Sets the `onremovetrack` property. 
*/
void TextTrackList_set_onremovetrack(TextTrackList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
