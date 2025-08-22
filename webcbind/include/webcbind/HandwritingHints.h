#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingHints */
DECLARE_EMLITE_TYPE(HandwritingHints, em_Val);

/** @brief Getter of the recognitionType property */
jb_String HandwritingHints_recognitionType(const HandwritingHints *self);

/** @brief Setter of the recognitionType property */
void HandwritingHints_set_recognitionType(HandwritingHints* self, jb_String * value);

/** @brief Getter of the inputType property */
jb_String HandwritingHints_inputType(const HandwritingHints *self);

/** @brief Setter of the inputType property */
void HandwritingHints_set_inputType(HandwritingHints* self, jb_String * value);

/** @brief Getter of the textContext property */
jb_String HandwritingHints_textContext(const HandwritingHints *self);

/** @brief Setter of the textContext property */
void HandwritingHints_set_textContext(HandwritingHints* self, jb_String * value);

/** @brief Getter of the alternatives property */
unsigned long HandwritingHints_alternatives(const HandwritingHints *self);

/** @brief Setter of the alternatives property */
void HandwritingHints_set_alternatives(HandwritingHints* self, unsigned long value);

/** @brief Constructor of the HandwritingHints dictionary type */
HandwritingHints HandwritingHints_new();

#ifdef __cplusplus
}
#endif
