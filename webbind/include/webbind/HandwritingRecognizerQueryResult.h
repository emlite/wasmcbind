#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HandwritingHintsQueryResult.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingRecognizerQueryResult */
DECLARE_EMLITE_TYPE(HandwritingRecognizerQueryResult, em_Val);

/** @brief Getter of the textAlternatives property */
bool HandwritingRecognizerQueryResult_textAlternatives(const HandwritingRecognizerQueryResult *self);

/** @brief Setter of the textAlternatives property */
void HandwritingRecognizerQueryResult_set_textAlternatives(HandwritingRecognizerQueryResult* self, bool value);

/** @brief Getter of the textSegmentation property */
bool HandwritingRecognizerQueryResult_textSegmentation(const HandwritingRecognizerQueryResult *self);

/** @brief Setter of the textSegmentation property */
void HandwritingRecognizerQueryResult_set_textSegmentation(HandwritingRecognizerQueryResult* self, bool value);

/** @brief Getter of the hints property */
HandwritingHintsQueryResult HandwritingRecognizerQueryResult_hints(const HandwritingRecognizerQueryResult *self);

/** @brief Setter of the hints property */
void HandwritingRecognizerQueryResult_set_hints(HandwritingRecognizerQueryResult* self, HandwritingHintsQueryResult * value);

/** @brief Constructor of the HandwritingRecognizerQueryResult dictionary type */
HandwritingRecognizerQueryResult HandwritingRecognizerQueryResult_new();

#ifdef __cplusplus
}
#endif
