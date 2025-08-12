#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;
typedef struct SpeechSynthesisVoice SpeechSynthesisVoice;


/**
 * @brief Interface SpeechSynthesis
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesis)
 */
DECLARE_EMLITE_TYPE(SpeechSynthesis, EventTarget);

/**
 * @brief Gets the `pending` property. 
*/
bool SpeechSynthesis_pending(const SpeechSynthesis *self);

/**
 * @brief Gets the `speaking` property. 
*/
bool SpeechSynthesis_speaking(const SpeechSynthesis *self);

/**
 * @brief Gets the `paused` property. 
*/
bool SpeechSynthesis_paused(const SpeechSynthesis *self);

/**
 * @brief Gets the `onvoiceschanged` property. 
*/
jb_Any SpeechSynthesis_onvoiceschanged(const SpeechSynthesis *self);

/**
 * @brief Sets the `onvoiceschanged` property. 
*/
void SpeechSynthesis_set_onvoiceschanged(SpeechSynthesis* self, jb_Any * value);

/**
 * @brief Calls the `speak` method. 
*/
jb_Undefined SpeechSynthesis_speak(SpeechSynthesis* self , SpeechSynthesisUtterance * utterance);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Undefined SpeechSynthesis_cancel(SpeechSynthesis* self );

/**
 * @brief Calls the `pause` method. 
*/
jb_Undefined SpeechSynthesis_pause(SpeechSynthesis* self );

/**
 * @brief Calls the `resume` method. 
*/
jb_Undefined SpeechSynthesis_resume(SpeechSynthesis* self );

/**
 * @brief Calls the `getVoices` method. 
*/
jb_Array SpeechSynthesis_getVoices(SpeechSynthesis* self );

#ifdef __cplusplus
}
#endif
