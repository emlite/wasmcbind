#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SpeechSynthesisEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisErrorEventInit SpeechSynthesisErrorEventInit;

DECLARE_EMLITE_TYPE(SpeechSynthesisErrorEvent, SpeechSynthesisEvent);

SpeechSynthesisErrorEvent SpeechSynthesisErrorEvent_new(jb_String * type, SpeechSynthesisErrorEventInit * eventInitDict);

SpeechSynthesisErrorCode SpeechSynthesisErrorEvent_error(const SpeechSynthesisErrorEvent *self);

#ifdef __cplusplus
}
#endif
