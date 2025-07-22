#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SpeechSynthesisVoice;


DECLARE_EMLITE_TYPE(SpeechSynthesisVoice, em_Val);

jb_DOMString SpeechSynthesisVoice_voiceURI( const SpeechSynthesisVoice *self);

jb_DOMString SpeechSynthesisVoice_name( const SpeechSynthesisVoice *self);

jb_DOMString SpeechSynthesisVoice_lang( const SpeechSynthesisVoice *self);

bool SpeechSynthesisVoice_localService( const SpeechSynthesisVoice *self);

bool SpeechSynthesisVoice_default_( const SpeechSynthesisVoice *self);
