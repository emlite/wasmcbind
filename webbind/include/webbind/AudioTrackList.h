#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioTrack AudioTrack;


/**
 * @brief Interface AudioTrackList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrackList)
 */
DECLARE_EMLITE_TYPE(AudioTrackList, EventTarget);

/**
 * @brief Gets the `length` property. 
*/
unsigned long AudioTrackList_length(const AudioTrackList *self);

/**
 * @brief Calls the `getTrackById` method. 
*/
AudioTrack AudioTrackList_getTrackById(AudioTrackList* self , jb_String * id);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any AudioTrackList_onchange(const AudioTrackList *self);

/**
 * @brief Sets the `onchange` property. 
*/
void AudioTrackList_set_onchange(AudioTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onaddtrack` property. 
*/
jb_Any AudioTrackList_onaddtrack(const AudioTrackList *self);

/**
 * @brief Sets the `onaddtrack` property. 
*/
void AudioTrackList_set_onaddtrack(AudioTrackList* self, jb_Any * value);

/**
 * @brief Gets the `onremovetrack` property. 
*/
jb_Any AudioTrackList_onremovetrack(const AudioTrackList *self);

/**
 * @brief Sets the `onremovetrack` property. 
*/
void AudioTrackList_set_onremovetrack(AudioTrackList* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
