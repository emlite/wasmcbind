#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechSynthesisUtterance SpeechSynthesisUtterance;

/** @brief Dictionary type SpeechSynthesisEventInit */
DECLARE_EMLITE_TYPE(SpeechSynthesisEventInit, EventInit);

/** @brief Getter of the utterance property */
SpeechSynthesisUtterance SpeechSynthesisEventInit_utterance(const SpeechSynthesisEventInit *self);

/** @brief Setter of the utterance property */
void SpeechSynthesisEventInit_set_utterance(SpeechSynthesisEventInit* self, SpeechSynthesisUtterance * value);

/** @brief Getter of the charIndex property */
unsigned long SpeechSynthesisEventInit_charIndex(const SpeechSynthesisEventInit *self);

/** @brief Setter of the charIndex property */
void SpeechSynthesisEventInit_set_charIndex(SpeechSynthesisEventInit* self, unsigned long value);

/** @brief Getter of the charLength property */
unsigned long SpeechSynthesisEventInit_charLength(const SpeechSynthesisEventInit *self);

/** @brief Setter of the charLength property */
void SpeechSynthesisEventInit_set_charLength(SpeechSynthesisEventInit* self, unsigned long value);

/** @brief Getter of the elapsedTime property */
float SpeechSynthesisEventInit_elapsedTime(const SpeechSynthesisEventInit *self);

/** @brief Setter of the elapsedTime property */
void SpeechSynthesisEventInit_set_elapsedTime(SpeechSynthesisEventInit* self, float value);

/** @brief Getter of the name property */
jb_String SpeechSynthesisEventInit_name(const SpeechSynthesisEventInit *self);

/** @brief Setter of the name property */
void SpeechSynthesisEventInit_set_name(SpeechSynthesisEventInit* self, jb_String * value);

/** @brief Constructor of the SpeechSynthesisEventInit dictionary type */
SpeechSynthesisEventInit SpeechSynthesisEventInit_new();

#ifdef __cplusplus
}
#endif
