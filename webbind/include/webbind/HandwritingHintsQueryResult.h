#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingHintsQueryResult */
DECLARE_EMLITE_TYPE(HandwritingHintsQueryResult, em_Val);

/** @brief Getter of the recognitionType property */
jb_Array HandwritingHintsQueryResult_recognitionType(const HandwritingHintsQueryResult *self);

/** @brief Setter of the recognitionType property */
void HandwritingHintsQueryResult_set_recognitionType(HandwritingHintsQueryResult* self, jb_Array * value);

/** @brief Getter of the inputType property */
jb_Array HandwritingHintsQueryResult_inputType(const HandwritingHintsQueryResult *self);

/** @brief Setter of the inputType property */
void HandwritingHintsQueryResult_set_inputType(HandwritingHintsQueryResult* self, jb_Array * value);

/** @brief Getter of the textContext property */
bool HandwritingHintsQueryResult_textContext(const HandwritingHintsQueryResult *self);

/** @brief Setter of the textContext property */
void HandwritingHintsQueryResult_set_textContext(HandwritingHintsQueryResult* self, bool value);

/** @brief Getter of the alternatives property */
bool HandwritingHintsQueryResult_alternatives(const HandwritingHintsQueryResult *self);

/** @brief Setter of the alternatives property */
void HandwritingHintsQueryResult_set_alternatives(HandwritingHintsQueryResult* self, bool value);

/** @brief Constructor of the HandwritingHintsQueryResult dictionary type */
HandwritingHintsQueryResult HandwritingHintsQueryResult_new();

#ifdef __cplusplus
}
#endif
