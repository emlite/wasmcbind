#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SpeechRecognitionAlternative
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionAlternative)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionAlternative, em_Val);

/**
 * @brief Gets the `transcript` property. 
*/
jb_String SpeechRecognitionAlternative_transcript(const SpeechRecognitionAlternative *self);

/**
 * @brief Gets the `confidence` property. 
*/
float SpeechRecognitionAlternative_confidence(const SpeechRecognitionAlternative *self);

#ifdef __cplusplus
}
#endif
