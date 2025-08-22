#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechRecognitionResultList SpeechRecognitionResultList;

/** @brief Dictionary type SpeechRecognitionEventInit */
DECLARE_EMLITE_TYPE(SpeechRecognitionEventInit, EventInit);

/** @brief Getter of the resultIndex property */
unsigned long SpeechRecognitionEventInit_resultIndex(const SpeechRecognitionEventInit *self);

/** @brief Setter of the resultIndex property */
void SpeechRecognitionEventInit_set_resultIndex(SpeechRecognitionEventInit* self, unsigned long value);

/** @brief Getter of the results property */
SpeechRecognitionResultList SpeechRecognitionEventInit_results(const SpeechRecognitionEventInit *self);

/** @brief Setter of the results property */
void SpeechRecognitionEventInit_set_results(SpeechRecognitionEventInit* self, SpeechRecognitionResultList * value);

/** @brief Constructor of the SpeechRecognitionEventInit dictionary type */
SpeechRecognitionEventInit SpeechRecognitionEventInit_new();

#ifdef __cplusplus
}
#endif
