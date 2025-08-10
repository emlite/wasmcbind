#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingHintsQueryResult, em_Val);

jb_Array HandwritingHintsQueryResult_recognitionType(const HandwritingHintsQueryResult *self);

void HandwritingHintsQueryResult_set_recognitionType(HandwritingHintsQueryResult* self, jb_Array * value);

jb_Array HandwritingHintsQueryResult_inputType(const HandwritingHintsQueryResult *self);

void HandwritingHintsQueryResult_set_inputType(HandwritingHintsQueryResult* self, jb_Array * value);

bool HandwritingHintsQueryResult_textContext(const HandwritingHintsQueryResult *self);

void HandwritingHintsQueryResult_set_textContext(HandwritingHintsQueryResult* self, bool value);

bool HandwritingHintsQueryResult_alternatives(const HandwritingHintsQueryResult *self);

void HandwritingHintsQueryResult_set_alternatives(HandwritingHintsQueryResult* self, bool value);

HandwritingHintsQueryResult HandwritingHintsQueryResult_new();

#ifdef __cplusplus
}
#endif
