#include <webcbind/GetAnimationsOptions.h>

DEFINE_EMLITE_TYPE(GetAnimationsOptions, em_Val);


bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subtree")));
}


void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subtree"), em_Val_from(value));
}


jb_String GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pseudoElement")));
}


void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}


GetAnimationsOptions GetAnimationsOptions_new() {
    em_Val obj = em_Val_object();
    return GetAnimationsOptions_from_val(&obj);
}

