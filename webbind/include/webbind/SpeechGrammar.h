#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SpeechGrammar, em_Val);

jb_String SpeechGrammar_src(const SpeechGrammar *self);

void SpeechGrammar_set_src(SpeechGrammar* self, jb_String * value);

float SpeechGrammar_weight(const SpeechGrammar *self);

void SpeechGrammar_set_weight(SpeechGrammar* self, float value);
