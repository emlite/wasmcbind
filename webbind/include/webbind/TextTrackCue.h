#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextTrack TextTrack;


/**
 * @brief Interface TextTrackCue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCue)
 */
DECLARE_EMLITE_TYPE(TextTrackCue, EventTarget);

/**
 * @brief Gets the `track` property. 
*/
TextTrack TextTrackCue_track(const TextTrackCue *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String TextTrackCue_id(const TextTrackCue *self);

/**
 * @brief Sets the `id` property. 
*/
void TextTrackCue_set_id(TextTrackCue* self, jb_String * value);

/**
 * @brief Gets the `startTime` property. 
*/
double TextTrackCue_startTime(const TextTrackCue *self);

/**
 * @brief Sets the `startTime` property. 
*/
void TextTrackCue_set_startTime(TextTrackCue* self, double value);

/**
 * @brief Gets the `endTime` property. 
*/
double TextTrackCue_endTime(const TextTrackCue *self);

/**
 * @brief Sets the `endTime` property. 
*/
void TextTrackCue_set_endTime(TextTrackCue* self, double value);

/**
 * @brief Gets the `pauseOnExit` property. 
*/
bool TextTrackCue_pauseOnExit(const TextTrackCue *self);

/**
 * @brief Sets the `pauseOnExit` property. 
*/
void TextTrackCue_set_pauseOnExit(TextTrackCue* self, bool value);

/**
 * @brief Gets the `onenter` property. 
*/
jb_Any TextTrackCue_onenter(const TextTrackCue *self);

/**
 * @brief Sets the `onenter` property. 
*/
void TextTrackCue_set_onenter(TextTrackCue* self, jb_Any * value);

/**
 * @brief Gets the `onexit` property. 
*/
jb_Any TextTrackCue_onexit(const TextTrackCue *self);

/**
 * @brief Sets the `onexit` property. 
*/
void TextTrackCue_set_onexit(TextTrackCue* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
