#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SpeechRecognitionOptions */
DECLARE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);

/** @brief Getter of the langs property */
jb_Array SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self);

/** @brief Setter of the langs property */
void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, jb_Array * value);

/** @brief Getter of the processLocally property */
bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self);

/** @brief Setter of the processLocally property */
void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value);

/** @brief Constructor of the SpeechRecognitionOptions dictionary type */
SpeechRecognitionOptions SpeechRecognitionOptions_new();

#ifdef __cplusplus
}
#endif
