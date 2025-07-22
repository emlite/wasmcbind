#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct HandwritingDrawing HandwritingDrawing;
typedef struct HandwritingHints HandwritingHints;


DECLARE_EMLITE_TYPE(HandwritingHints, em_Val);

jb_DOMString HandwritingHints_recognitionType( const HandwritingHints *self);

void HandwritingHints_set_recognitionType(HandwritingHints* self, jb_DOMString * value);

jb_DOMString HandwritingHints_inputType( const HandwritingHints *self);

void HandwritingHints_set_inputType(HandwritingHints* self, jb_DOMString * value);

jb_DOMString HandwritingHints_textContext( const HandwritingHints *self);

void HandwritingHints_set_textContext(HandwritingHints* self, jb_DOMString * value);

unsigned long HandwritingHints_alternatives( const HandwritingHints *self);

void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value);
DECLARE_EMLITE_TYPE(HandwritingRecognizer, em_Val);

HandwritingDrawing HandwritingRecognizer_startDrawing0(HandwritingRecognizer* self );

HandwritingDrawing HandwritingRecognizer_startDrawing1(HandwritingRecognizer* self , HandwritingHints * hints);

jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self );
