#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SpeechRecognitionErrorEventInit */
DECLARE_EMLITE_TYPE(SpeechRecognitionErrorEventInit, EventInit);

/** @brief Getter of the error property */
SpeechRecognitionErrorCode SpeechRecognitionErrorEventInit_error(const SpeechRecognitionErrorEventInit *self);

/** @brief Setter of the error property */
void SpeechRecognitionErrorEventInit_set_error(SpeechRecognitionErrorEventInit* self, SpeechRecognitionErrorCode * value);

/** @brief Getter of the message property */
jb_String SpeechRecognitionErrorEventInit_message(const SpeechRecognitionErrorEventInit *self);

/** @brief Setter of the message property */
void SpeechRecognitionErrorEventInit_set_message(SpeechRecognitionErrorEventInit* self, jb_String * value);

/** @brief Constructor of the SpeechRecognitionErrorEventInit dictionary type */
SpeechRecognitionErrorEventInit SpeechRecognitionErrorEventInit_new();

#ifdef __cplusplus
}
#endif
