#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit;


/**
 * @brief Interface SpeechRecognitionErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionErrorEvent)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEvent, Event);

/**
 * @brief Creates a new `SpeechRecognitionErrorEvent` object. 
*/
SpeechRecognitionErrorEvent SpeechRecognitionErrorEvent_new(jb_String * type, SpeechRecognitionErrorEventInit * eventInitDict);

/**
 * @brief Gets the `error` property. 
*/
SpeechRecognitionErrorCode SpeechRecognitionErrorEvent_error(const SpeechRecognitionErrorEvent *self);

/**
 * @brief Gets the `message` property. 
*/
jb_String SpeechRecognitionErrorEvent_message(const SpeechRecognitionErrorEvent *self);

#ifdef __cplusplus
}
#endif
