#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SpeechRecognitionPhrase
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionPhrase)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionPhrase, em_Val);

/**
 * @brief Creates a new `SpeechRecognitionPhrase` object. 
*/
SpeechRecognitionPhrase SpeechRecognitionPhrase_new0(jb_String * phrase);

/**
 * @brief Creates a new `SpeechRecognitionPhrase` object. 
*/
SpeechRecognitionPhrase SpeechRecognitionPhrase_new1(jb_String * phrase, float boost);

/**
 * @brief Gets the `phrase` property. 
*/
jb_String SpeechRecognitionPhrase_phrase(const SpeechRecognitionPhrase *self);

/**
 * @brief Gets the `boost` property. 
*/
float SpeechRecognitionPhrase_boost(const SpeechRecognitionPhrase *self);

#ifdef __cplusplus
}
#endif
