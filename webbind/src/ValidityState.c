#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(ValidityState, em_Val);


bool ValidityState_valueMissing(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "valueMissing"));
}


bool ValidityState_typeMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "typeMismatch"));
}


bool ValidityState_patternMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "patternMismatch"));
}


bool ValidityState_tooLong(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "tooLong"));
}


bool ValidityState_tooShort(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "tooShort"));
}


bool ValidityState_rangeUnderflow(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "rangeUnderflow"));
}


bool ValidityState_rangeOverflow(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "rangeOverflow"));
}


bool ValidityState_stepMismatch(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "stepMismatch"));
}


bool ValidityState_badInput(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "badInput"));
}


bool ValidityState_customError(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "customError"));
}


bool ValidityState_valid(const ValidityState *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "valid"));
}

