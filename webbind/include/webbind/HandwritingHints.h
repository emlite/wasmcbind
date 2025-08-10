#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingHints, em_Val);

jb_String HandwritingHints_recognitionType(const HandwritingHints *self);

void HandwritingHints_set_recognitionType(HandwritingHints* self, jb_String * value);

jb_String HandwritingHints_inputType(const HandwritingHints *self);

void HandwritingHints_set_inputType(HandwritingHints* self, jb_String * value);

jb_String HandwritingHints_textContext(const HandwritingHints *self);

void HandwritingHints_set_textContext(HandwritingHints* self, jb_String * value);

unsigned long HandwritingHints_alternatives(const HandwritingHints *self);

void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value);

HandwritingHints HandwritingHints_new();

#ifdef __cplusplus
}
#endif
