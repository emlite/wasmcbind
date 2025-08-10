#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ValidityStateFlags, em_Val);

bool ValidityStateFlags_valueMissing(const ValidityStateFlags *self);

void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_typeMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_patternMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooLong(const ValidityStateFlags *self);

void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooShort(const ValidityStateFlags *self);

void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeUnderflow(const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeOverflow(const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_stepMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_badInput(const ValidityStateFlags *self);

void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_customError(const ValidityStateFlags *self);

void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value);

ValidityStateFlags ValidityStateFlags_new();

#ifdef __cplusplus
}
#endif
