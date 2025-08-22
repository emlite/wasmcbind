#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ValidityStateFlags */
DECLARE_EMLITE_TYPE(ValidityStateFlags, em_Val);

/** @brief Getter of the valueMissing property */
bool ValidityStateFlags_valueMissing(const ValidityStateFlags *self);

/** @brief Setter of the valueMissing property */
void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value);

/** @brief Getter of the typeMismatch property */
bool ValidityStateFlags_typeMismatch(const ValidityStateFlags *self);

/** @brief Setter of the typeMismatch property */
void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value);

/** @brief Getter of the patternMismatch property */
bool ValidityStateFlags_patternMismatch(const ValidityStateFlags *self);

/** @brief Setter of the patternMismatch property */
void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value);

/** @brief Getter of the tooLong property */
bool ValidityStateFlags_tooLong(const ValidityStateFlags *self);

/** @brief Setter of the tooLong property */
void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value);

/** @brief Getter of the tooShort property */
bool ValidityStateFlags_tooShort(const ValidityStateFlags *self);

/** @brief Setter of the tooShort property */
void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value);

/** @brief Getter of the rangeUnderflow property */
bool ValidityStateFlags_rangeUnderflow(const ValidityStateFlags *self);

/** @brief Setter of the rangeUnderflow property */
void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value);

/** @brief Getter of the rangeOverflow property */
bool ValidityStateFlags_rangeOverflow(const ValidityStateFlags *self);

/** @brief Setter of the rangeOverflow property */
void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value);

/** @brief Getter of the stepMismatch property */
bool ValidityStateFlags_stepMismatch(const ValidityStateFlags *self);

/** @brief Setter of the stepMismatch property */
void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value);

/** @brief Getter of the badInput property */
bool ValidityStateFlags_badInput(const ValidityStateFlags *self);

/** @brief Setter of the badInput property */
void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value);

/** @brief Getter of the customError property */
bool ValidityStateFlags_customError(const ValidityStateFlags *self);

/** @brief Setter of the customError property */
void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value);

/** @brief Constructor of the ValidityStateFlags dictionary type */
ValidityStateFlags ValidityStateFlags_new();

#ifdef __cplusplus
}
#endif
