#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SourceBuffer SourceBuffer;


/**
 * @brief Interface AudioTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioTrack)
 */
DECLARE_EMLITE_TYPE(AudioTrack, em_Val);

/**
 * @brief Gets the `id` property. 
*/
jb_String AudioTrack_id(const AudioTrack *self);

/**
 * @brief Gets the `kind` property. 
*/
jb_String AudioTrack_kind(const AudioTrack *self);

/**
 * @brief Gets the `label` property. 
*/
jb_String AudioTrack_label(const AudioTrack *self);

/**
 * @brief Gets the `language` property. 
*/
jb_String AudioTrack_language(const AudioTrack *self);

/**
 * @brief Gets the `enabled` property. 
*/
bool AudioTrack_enabled(const AudioTrack *self);

/**
 * @brief Sets the `enabled` property. 
*/
void AudioTrack_set_enabled(AudioTrack* self, bool value);

/**
 * @brief Gets the `sourceBuffer` property. 
*/
SourceBuffer AudioTrack_sourceBuffer(const AudioTrack *self);

#ifdef __cplusplus
}
#endif
