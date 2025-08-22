#include <webcbind/HandwritingHintsQueryResult.h>

DEFINE_EMLITE_TYPE(HandwritingHintsQueryResult, em_Val);


jb_Array HandwritingHintsQueryResult_recognitionType(const HandwritingHintsQueryResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recognitionType")));
}


void HandwritingHintsQueryResult_set_recognitionType(HandwritingHintsQueryResult* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recognitionType"), em_Val_from(value));
}


jb_Array HandwritingHintsQueryResult_inputType(const HandwritingHintsQueryResult *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inputType")));
}


void HandwritingHintsQueryResult_set_inputType(HandwritingHintsQueryResult* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inputType"), em_Val_from(value));
}


bool HandwritingHintsQueryResult_textContext(const HandwritingHintsQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textContext")));
}


void HandwritingHintsQueryResult_set_textContext(HandwritingHintsQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textContext"), em_Val_from(value));
}


bool HandwritingHintsQueryResult_alternatives(const HandwritingHintsQueryResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alternatives")));
}


void HandwritingHintsQueryResult_set_alternatives(HandwritingHintsQueryResult* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alternatives"), em_Val_from(value));
}


HandwritingHintsQueryResult HandwritingHintsQueryResult_new() {
    em_Val obj = em_Val_object();
    return HandwritingHintsQueryResult_from_val(&obj);
}

