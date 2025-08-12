#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechGrammarList SpeechGrammarList;
typedef struct SpeechRecognitionPhrase SpeechRecognitionPhrase;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct SpeechRecognitionOptions SpeechRecognitionOptions;


/**
 * @brief Interface SpeechRecognition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognition)
 */
DECLARE_EMLITE_TYPE(SpeechRecognition, EventTarget);

/**
 * @brief Creates a new `SpeechRecognition` object. 
*/
SpeechRecognition SpeechRecognition_new();

/**
 * @brief Gets the `grammars` property. 
*/
SpeechGrammarList SpeechRecognition_grammars(const SpeechRecognition *self);

/**
 * @brief Sets the `grammars` property. 
*/
void SpeechRecognition_set_grammars(SpeechRecognition* self, SpeechGrammarList * value);

/**
 * @brief Gets the `lang` property. 
*/
jb_String SpeechRecognition_lang(const SpeechRecognition *self);

/**
 * @brief Sets the `lang` property. 
*/
void SpeechRecognition_set_lang(SpeechRecognition* self, jb_String * value);

/**
 * @brief Gets the `continuous` property. 
*/
bool SpeechRecognition_continuous(const SpeechRecognition *self);

/**
 * @brief Sets the `continuous` property. 
*/
void SpeechRecognition_set_continuous(SpeechRecognition* self, bool value);

/**
 * @brief Gets the `interimResults` property. 
*/
bool SpeechRecognition_interimResults(const SpeechRecognition *self);

/**
 * @brief Sets the `interimResults` property. 
*/
void SpeechRecognition_set_interimResults(SpeechRecognition* self, bool value);

/**
 * @brief Gets the `maxAlternatives` property. 
*/
unsigned long SpeechRecognition_maxAlternatives(const SpeechRecognition *self);

/**
 * @brief Sets the `maxAlternatives` property. 
*/
void SpeechRecognition_set_maxAlternatives(SpeechRecognition* self, unsigned long value);

/**
 * @brief Gets the `processLocally` property. 
*/
bool SpeechRecognition_processLocally(const SpeechRecognition *self);

/**
 * @brief Sets the `processLocally` property. 
*/
void SpeechRecognition_set_processLocally(SpeechRecognition* self, bool value);

/**
 * @brief Gets the `phrases` property. 
*/
jb_Array SpeechRecognition_phrases(const SpeechRecognition *self);

/**
 * @brief Sets the `phrases` property. 
*/
void SpeechRecognition_set_phrases(SpeechRecognition* self, jb_Array * value);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined SpeechRecognition_start(SpeechRecognition* self , MediaStreamTrack * audioTrack);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined SpeechRecognition_stop(SpeechRecognition* self );

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined SpeechRecognition_abort(SpeechRecognition* self );

/**
 * @brief Calls the `available` method. 
*/
jb_Promise SpeechRecognition_available(SpeechRecognition* self , SpeechRecognitionOptions * options);

/**
 * @brief Calls the `install` method. 
*/
jb_Promise SpeechRecognition_install(SpeechRecognition* self , SpeechRecognitionOptions * options);

/**
 * @brief Gets the `onaudiostart` property. 
*/
jb_Any SpeechRecognition_onaudiostart(const SpeechRecognition *self);

/**
 * @brief Sets the `onaudiostart` property. 
*/
void SpeechRecognition_set_onaudiostart(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onsoundstart` property. 
*/
jb_Any SpeechRecognition_onsoundstart(const SpeechRecognition *self);

/**
 * @brief Sets the `onsoundstart` property. 
*/
void SpeechRecognition_set_onsoundstart(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onspeechstart` property. 
*/
jb_Any SpeechRecognition_onspeechstart(const SpeechRecognition *self);

/**
 * @brief Sets the `onspeechstart` property. 
*/
void SpeechRecognition_set_onspeechstart(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onspeechend` property. 
*/
jb_Any SpeechRecognition_onspeechend(const SpeechRecognition *self);

/**
 * @brief Sets the `onspeechend` property. 
*/
void SpeechRecognition_set_onspeechend(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onsoundend` property. 
*/
jb_Any SpeechRecognition_onsoundend(const SpeechRecognition *self);

/**
 * @brief Sets the `onsoundend` property. 
*/
void SpeechRecognition_set_onsoundend(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onaudioend` property. 
*/
jb_Any SpeechRecognition_onaudioend(const SpeechRecognition *self);

/**
 * @brief Sets the `onaudioend` property. 
*/
void SpeechRecognition_set_onaudioend(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onresult` property. 
*/
jb_Any SpeechRecognition_onresult(const SpeechRecognition *self);

/**
 * @brief Sets the `onresult` property. 
*/
void SpeechRecognition_set_onresult(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onnomatch` property. 
*/
jb_Any SpeechRecognition_onnomatch(const SpeechRecognition *self);

/**
 * @brief Sets the `onnomatch` property. 
*/
void SpeechRecognition_set_onnomatch(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any SpeechRecognition_onerror(const SpeechRecognition *self);

/**
 * @brief Sets the `onerror` property. 
*/
void SpeechRecognition_set_onerror(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onstart` property. 
*/
jb_Any SpeechRecognition_onstart(const SpeechRecognition *self);

/**
 * @brief Sets the `onstart` property. 
*/
void SpeechRecognition_set_onstart(SpeechRecognition* self, jb_Any * value);

/**
 * @brief Gets the `onend` property. 
*/
jb_Any SpeechRecognition_onend(const SpeechRecognition *self);

/**
 * @brief Sets the `onend` property. 
*/
void SpeechRecognition_set_onend(SpeechRecognition* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
