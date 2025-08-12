#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionResult SpeechRecognitionResult;


/**
 * @brief Interface SpeechRecognitionResultList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechRecognitionResultList)
 */
DECLARE_EMLITE_TYPE(SpeechRecognitionResultList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long SpeechRecognitionResultList_length(const SpeechRecognitionResultList *self);

/**
 * @brief Calls the `item` method. 
*/
SpeechRecognitionResult SpeechRecognitionResultList_item(SpeechRecognitionResultList* self , unsigned long index);

#ifdef __cplusplus
}
#endif
