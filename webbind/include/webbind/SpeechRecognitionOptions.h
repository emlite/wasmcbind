#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SpeechRecognitionOptions, em_Val);

jb_Array SpeechRecognitionOptions_langs(const SpeechRecognitionOptions *self);

void SpeechRecognitionOptions_set_langs(SpeechRecognitionOptions* self, jb_Array * value);

bool SpeechRecognitionOptions_processLocally(const SpeechRecognitionOptions *self);

void SpeechRecognitionOptions_set_processLocally(SpeechRecognitionOptions* self, bool value);

SpeechRecognitionOptions SpeechRecognitionOptions_new();

#ifdef __cplusplus
}
#endif
