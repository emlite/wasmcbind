#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;

DECLARE_EMLITE_TYPE(SpeechSynthesisEventInit, EventInit);

SpeechSynthesisUtterance SpeechSynthesisEventInit_utterance(const SpeechSynthesisEventInit *self);

void SpeechSynthesisEventInit_set_utterance(SpeechSynthesisEventInit* self, SpeechSynthesisUtterance * value);

unsigned long SpeechSynthesisEventInit_charIndex(const SpeechSynthesisEventInit *self);

void SpeechSynthesisEventInit_set_charIndex(SpeechSynthesisEventInit* self, unsigned long value);

unsigned long SpeechSynthesisEventInit_charLength(const SpeechSynthesisEventInit *self);

void SpeechSynthesisEventInit_set_charLength(SpeechSynthesisEventInit* self, unsigned long value);

float SpeechSynthesisEventInit_elapsedTime(const SpeechSynthesisEventInit *self);

void SpeechSynthesisEventInit_set_elapsedTime(SpeechSynthesisEventInit* self, float value);

jb_String SpeechSynthesisEventInit_name(const SpeechSynthesisEventInit *self);

void SpeechSynthesisEventInit_set_name(SpeechSynthesisEventInit* self, jb_String * value);

SpeechSynthesisEventInit SpeechSynthesisEventInit_new();

#ifdef __cplusplus
}
#endif
