#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionEventInit SpeechRecognitionEventInit;
typedef struct SpeechRecognitionResultList SpeechRecognitionResultList;


/**
 * @brief Interface SpeechRecognitionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionEvent)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionEvent, Event);

/**
 * @brief Creates a new `SpeechRecognitionEvent` object. 
*/
SpeechRecognitionEvent SpeechRecognitionEvent_new(jb_String * type, SpeechRecognitionEventInit * eventInitDict);

/**
 * @brief Gets the `resultIndex` property. 
*/
unsigned long SpeechRecognitionEvent_resultIndex(const SpeechRecognitionEvent *self);

/**
 * @brief Gets the `results` property. 
*/
SpeechRecognitionResultList SpeechRecognitionEvent_results(const SpeechRecognitionEvent *self);

#ifdef __cplusplus
}
#endif
