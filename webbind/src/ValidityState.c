#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(ValidityState, em_Val);


bool ValidityState_valueMissing(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("valueMissing")));
}


bool ValidityState_typeMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("typeMismatch")));
}


bool ValidityState_patternMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("patternMismatch")));
}


bool ValidityState_tooLong(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tooLong")));
}


bool ValidityState_tooShort(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("tooShort")));
}


bool ValidityState_rangeUnderflow(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeUnderflow")));
}


bool ValidityState_rangeOverflow(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rangeOverflow")));
}


bool ValidityState_stepMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stepMismatch")));
}


bool ValidityState_badInput(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("badInput")));
}


bool ValidityState_customError(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("customError")));
}


bool ValidityState_valid(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("valid")));
}

