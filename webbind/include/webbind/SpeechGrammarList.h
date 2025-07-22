#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SpeechGrammar SpeechGrammar;


typedef struct {
  em_Val inner;
} SpeechGrammarList;


DECLARE_EMLITE_TYPE(SpeechGrammarList, em_Val);

SpeechGrammarList SpeechGrammarList_new();

unsigned long SpeechGrammarList_length( const SpeechGrammarList *self);

SpeechGrammar SpeechGrammarList_item(SpeechGrammarList* self , unsigned long index);

jb_Undefined SpeechGrammarList_addFromURI(SpeechGrammarList* self , const jb_DOMString* src);

jb_Undefined SpeechGrammarList_addFromURI(SpeechGrammarList* self , const jb_DOMString* src, float weight);

jb_Undefined SpeechGrammarList_addFromString(SpeechGrammarList* self , const jb_DOMString* string);

jb_Undefined SpeechGrammarList_addFromString(SpeechGrammarList* self , const jb_DOMString* string, float weight);
