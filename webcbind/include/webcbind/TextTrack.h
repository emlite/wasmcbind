#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextTrackCueList TextTrackCueList;
typedef struct TextTrackCue TextTrackCue;
typedef struct SourceBuffer SourceBuffer;


/**
 * @brief Interface TextTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextTrack)
 */
DECLARE_EMLITE_TYPE(TextTrack, EventTarget);

/**
 * @brief Gets the `kind` property. 
*/
TextTrackKind TextTrack_kind(const TextTrack *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String TextTrack_label(const TextTrack *self);

/**
 * @brief Gets the `language` property. 
*/
jb_String TextTrack_language(const TextTrack *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String TextTrack_id(const TextTrack *self);

/**
 * @brief Gets the `inBandMetadataTrackDispatchType` property. 
*/
jb_String TextTrack_inBandMetadataTrackDispatchType(const TextTrack *self);

/**
 * @brief Gets the `mode` property. 
*/
TextTrackMode TextTrack_mode(const TextTrack *self);

/**
 * @brief Sets the `mode` property. 
*/
void TextTrack_set_mode(TextTrack* self, TextTrackMode * value);

/**
 * @brief Gets the `cues` property. 
*/
TextTrackCueList TextTrack_cues(const TextTrack *self);

/**
 * @brief Gets the `activeCues` property. 
*/
TextTrackCueList TextTrack_activeCues(const TextTrack *self);

/**
 * @brief Calls the `addCue` method. 
*/
jb_Undefined TextTrack_addCue(TextTrack* self , TextTrackCue * cue);

/**
 * @brief Calls the `removeCue` method. 
*/
jb_Undefined TextTrack_removeCue(TextTrack* self , TextTrackCue * cue);

/**
 * @brief Gets the `oncuechange` property. 
*/
jb_Any TextTrack_oncuechange(const TextTrack *self);

/**
 * @brief Sets the `oncuechange` property. 
*/
void TextTrack_set_oncuechange(TextTrack* self, jb_Any * value);

/**
 * @brief Gets the `sourceBuffer` property. 
*/
SourceBuffer TextTrack_sourceBuffer(const TextTrack *self);

#ifdef __cplusplus
}
#endif
