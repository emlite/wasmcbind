#include <webcbind/ValidityStateFlags.h>

DEFINE_EMLITE_TYPE(ValidityStateFlags, em_Val);


bool ValidityStateFlags_valueMissing(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("valueMissing")));
}


void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("valueMissing"), em_Val_from(value));
}


bool ValidityStateFlags_typeMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("typeMismatch")));
}


void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("typeMismatch"), em_Val_from(value));
}


bool ValidityStateFlags_patternMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("patternMismatch")));
}


void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("patternMismatch"), em_Val_from(value));
}


bool ValidityStateFlags_tooLong(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tooLong")));
}


void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tooLong"), em_Val_from(value));
}


bool ValidityStateFlags_tooShort(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tooShort")));
}


void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("tooShort"), em_Val_from(value));
}


bool ValidityStateFlags_rangeUnderflow(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeUnderflow")));
}


void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeUnderflow"), em_Val_from(value));
}


bool ValidityStateFlags_rangeOverflow(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeOverflow")));
}


void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rangeOverflow"), em_Val_from(value));
}


bool ValidityStateFlags_stepMismatch(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stepMismatch")));
}


void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stepMismatch"), em_Val_from(value));
}


bool ValidityStateFlags_badInput(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("badInput")));
}


void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("badInput"), em_Val_from(value));
}


bool ValidityStateFlags_customError(const ValidityStateFlags *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customError")));
}


void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("customError"), em_Val_from(value));
}


ValidityStateFlags ValidityStateFlags_new() {
    em_Val obj = em_Val_object();
    return ValidityStateFlags_from_val(&obj);
}

