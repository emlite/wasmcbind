#include <webcbind/HandwritingModelConstraint.h>

DEFINE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);


jb_Array HandwritingModelConstraint_languages(const HandwritingModelConstraint *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("languages")));
}


void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("languages"), em_Val_from(value));
}


HandwritingModelConstraint HandwritingModelConstraint_new() {
    em_Val obj = em_Val_object();
    return HandwritingModelConstraint_from_val(&obj);
}

