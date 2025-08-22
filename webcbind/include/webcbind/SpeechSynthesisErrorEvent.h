#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SpeechSynthesisEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit;


/**
 * @brief Interface SpeechSynthesisErrorEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechSynthesisErrorEvent)
 */
DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);

/**
 * @brief Creates a new `SpeechSynthesisErrorEvent` object. 
*/
SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(jb_String * type, SpeechSynthesisErrorEventInit * eventInitDict);

/**
 * @brief Gets the `error` property. 
*/
SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error(const SpeechSynthesisErrorEvent *self);

#ifdef __cplusplus
}
#endif
