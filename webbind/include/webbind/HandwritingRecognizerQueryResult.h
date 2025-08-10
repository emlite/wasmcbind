#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingHintsQueryResult.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);

bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value);

bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value);

HandwritingHintsQueryResult HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self);

void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, HandwritingHintsQueryResult * value);

HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult_new();

#ifdef __cplusplus
}
#endif
