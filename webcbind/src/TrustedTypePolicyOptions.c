#include <webcbind/TrustedTypePolicyOptions.h>

DEFINE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);


jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createHTML")));
}


void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createHTML"), em_Val_from(value));
}


jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createScript")));
}


void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createScript"), em_Val_from(value));
}


jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("createScriptURL")));
}


void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("createScriptURL"), em_Val_from(value));
}


TrustedTypePolicyOptions TrustedTypePolicyOptions_new() {
    em_Val obj = em_Val_object();
    return TrustedTypePolicyOptions_from_val(&obj);
}

