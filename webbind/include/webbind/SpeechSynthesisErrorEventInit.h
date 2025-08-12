#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SpeechSynthesisEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SpeechSynthesisErrorEventInit */
DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEventInit, SpeechSynthesisEventInit);

/** @brief Getter of the error property */
SpeechSynthesisErrorCode SpeechSynthesisErrorEventInit_error(const SpeechSynthesisErrorEventInit *self);

/** @brief Setter of the error property */
void SpeechSynthesisErrorEventInit_set_error(SpeechSynthesisErrorEventInit* self, SpeechSynthesisErrorCode * value);

/** @brief Constructor of the SpeechSynthesisErrorEventInit dictionary type */
SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit_new();

#ifdef __cplusplus
}
#endif
