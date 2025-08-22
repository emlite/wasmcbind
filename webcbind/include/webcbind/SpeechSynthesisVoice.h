#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SpeechSynthesisVoice
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisVoice)
 */
DECLARE_EMLITE_TYPE(SpeechSynthesisVoice, em_Val);

/**
 * @brief Gets the `voiceURI` property. 
*/
jb_String SpeechSynthesisVoice_voiceURI(const SpeechSynthesisVoice *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String SpeechSynthesisVoice_name(const SpeechSynthesisVoice *self);

/**
 * @brief Gets the `lang` property. 
*/
jb_String SpeechSynthesisVoice_lang(const SpeechSynthesisVoice *self);

/**
 * @brief Gets the `localService` property. 
*/
bool SpeechSynthesisVoice_localService(const SpeechSynthesisVoice *self);

/**
 * @brief Gets the `default` property. 
*/
bool SpeechSynthesisVoice_default_(const SpeechSynthesisVoice *self);

#ifdef __cplusplus
}
#endif
