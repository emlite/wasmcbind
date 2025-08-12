#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisEventInit SpeechSynthesisEventInit;
typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;


/**
 * @brief Interface SpeechSynthesisEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisEvent)
 */
DECLARE_EMLITE_TYPE(SpeechSynthesisEvent, Event);

/**
 * @brief Creates a new `SpeechSynthesisEvent` object. 
*/
SpeechSynthesisEvent SpeechSynthesisEvent_new(jb_String * type, SpeechSynthesisEventInit * eventInitDict);

/**
 * @brief Gets the `utterance` property. 
*/
SpeechSynthesisUtterance SpeechSynthesisEvent_utterance(const SpeechSynthesisEvent *self);

/**
 * @brief Gets the `charIndex` property. 
*/
unsigned long SpeechSynthesisEvent_charIndex(const SpeechSynthesisEvent *self);

/**
 * @brief Gets the `charLength` property. 
*/
unsigned long SpeechSynthesisEvent_charLength(const SpeechSynthesisEvent *self);

/**
 * @brief Gets the `elapsedTime` property. 
*/
float SpeechSynthesisEvent_elapsedTime(const SpeechSynthesisEvent *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String SpeechSynthesisEvent_name(const SpeechSynthesisEvent *self);

#ifdef __cplusplus
}
#endif
