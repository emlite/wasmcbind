#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionAlternative SpeechRecognitionAlternative;


/**
 * @brief Interface SpeechRecognitionResult
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResult)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionResult, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SpeechRecognitionResult_length(const SpeechRecognitionResult *self);

/**
 * @brief Calls the `item` method. 
*/
SpeechRecognitionAlternative SpeechRecognitionResult_item(SpeechRecognitionResult* self , unsigned long index);

/**
 * @brief Gets the `isFinal` property. 
*/
bool SpeechRecognitionResult_isFinal(const SpeechRecognitionResult *self);

#ifdef __cplusplus
}
#endif
