#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SpeechGrammar;


DECLARE_EMLITE_TYPE(SpeechGrammar, em_Val);

jb_DOMString SpeechGrammar_src( const SpeechGrammar *self);

void SpeechGrammar_set_src(SpeechGrammar* self, const jb_DOMString* value);

float SpeechGrammar_weight( const SpeechGrammar *self);

void SpeechGrammar_set_weight(SpeechGrammar* self, float value);
