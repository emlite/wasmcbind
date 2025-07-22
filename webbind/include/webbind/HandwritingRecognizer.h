#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct HandwritingDrawing HandwritingDrawing;
typedef struct HandwritingHints HandwritingHints;


typedef struct {
  em_Val inner;
} HandwritingHints;


DECLARE_EMLITE_TYPE(HandwritingHints, em_Val);

jb_DOMString HandwritingHints_recognitionType( const HandwritingHints *self);

void HandwritingHints_set_recognitionType(HandwritingHints* self, const jb_DOMString* value);

jb_DOMString HandwritingHints_inputType( const HandwritingHints *self);

void HandwritingHints_set_inputType(HandwritingHints* self, const jb_DOMString* value);

jb_DOMString HandwritingHints_textContext( const HandwritingHints *self);

void HandwritingHints_set_textContext(HandwritingHints* self, const jb_DOMString* value);

unsigned long HandwritingHints_alternatives( const HandwritingHints *self);

void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value);
typedef struct {
  em_Val inner;
} HandwritingRecognizer;


DECLARE_EMLITE_TYPE(HandwritingRecognizer, em_Val);

HandwritingDrawing HandwritingRecognizer_startDrawing(HandwritingRecognizer* self );

HandwritingDrawing HandwritingRecognizer_startDrawing(HandwritingRecognizer* self , const HandwritingHints* hints);

jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self );
