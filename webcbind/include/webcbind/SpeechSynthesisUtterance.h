#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisVoice SpeechSynthesisVoice;


/**
 * @brief Interface SpeechSynthesisUtterance
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisUtterance)
 */
DECLARE_EMLITE_TYPE(SpeechSynthesisUtterance, EventTarget);

/**
 * @brief Creates a new `SpeechSynthesisUtterance` object. 
*/
SpeechSynthesisUtterance SpeechSynthesisUtterance_new0();

/**
 * @brief Creates a new `SpeechSynthesisUtterance` object. 
*/
SpeechSynthesisUtterance SpeechSynthesisUtterance_new1(jb_String * text);

/**
 * @brief Gets the `text` property. 
*/
jb_String SpeechSynthesisUtterance_text(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `text` property. 
*/
void SpeechSynthesisUtterance_set_text(SpeechSynthesisUtterance* self, jb_String * value);

/**
 * @brief Gets the `lang` property. 
*/
jb_String SpeechSynthesisUtterance_lang(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `lang` property. 
*/
void SpeechSynthesisUtterance_set_lang(SpeechSynthesisUtterance* self, jb_String * value);

/**
 * @brief Gets the `voice` property. 
*/
SpeechSynthesisVoice SpeechSynthesisUtterance_voice(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `voice` property. 
*/
void SpeechSynthesisUtterance_set_voice(SpeechSynthesisUtterance* self, SpeechSynthesisVoice * value);

/**
 * @brief Gets the `volume` property. 
*/
float SpeechSynthesisUtterance_volume(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `volume` property. 
*/
void SpeechSynthesisUtterance_set_volume(SpeechSynthesisUtterance* self, float value);

/**
 * @brief Gets the `rate` property. 
*/
float SpeechSynthesisUtterance_rate(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `rate` property. 
*/
void SpeechSynthesisUtterance_set_rate(SpeechSynthesisUtterance* self, float value);

/**
 * @brief Gets the `pitch` property. 
*/
float SpeechSynthesisUtterance_pitch(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `pitch` property. 
*/
void SpeechSynthesisUtterance_set_pitch(SpeechSynthesisUtterance* self, float value);

/**
 * @brief Gets the `onstart` property. 
*/
jb_Any SpeechSynthesisUtterance_onstart(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onstart` property. 
*/
void SpeechSynthesisUtterance_set_onstart(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onend` property. 
*/
jb_Any SpeechSynthesisUtterance_onend(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onend` property. 
*/
void SpeechSynthesisUtterance_set_onend(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any SpeechSynthesisUtterance_onerror(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onerror` property. 
*/
void SpeechSynthesisUtterance_set_onerror(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onpause` property. 
*/
jb_Any SpeechSynthesisUtterance_onpause(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onpause` property. 
*/
void SpeechSynthesisUtterance_set_onpause(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onresume` property. 
*/
jb_Any SpeechSynthesisUtterance_onresume(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onresume` property. 
*/
void SpeechSynthesisUtterance_set_onresume(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onmark` property. 
*/
jb_Any SpeechSynthesisUtterance_onmark(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onmark` property. 
*/
void SpeechSynthesisUtterance_set_onmark(SpeechSynthesisUtterance* self, jb_Any * value);

/**
 * @brief Gets the `onboundary` property. 
*/
jb_Any SpeechSynthesisUtterance_onboundary(const SpeechSynthesisUtterance *self);

/**
 * @brief Sets the `onboundary` property. 
*/
void SpeechSynthesisUtterance_set_onboundary(SpeechSynthesisUtterance* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
