#include <webcbind/TrustedTypePolicy.h>

#include <webcbind/TrustedHTML.h>
#include <webcbind/TrustedScript.h>
#include <webcbind/TrustedScriptURL.h>

DEFINE_EMLITE_TYPE(TrustedTypePolicy, em_Val);


jb_String TrustedTypePolicy_name(const TrustedTypePolicy *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


TrustedHTML TrustedTypePolicy_createHTML(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments) {
    return em_Val_as(TrustedHTML, em_Val_call(em_Val_as_val(self->inner), "createHTML", em_Val_from(input), em_Val_from(arguments)));
}


TrustedScript TrustedTypePolicy_createScript(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments) {
    return em_Val_as(TrustedScript, em_Val_call(em_Val_as_val(self->inner), "createScript", em_Val_from(input), em_Val_from(arguments)));
}


TrustedScriptURL TrustedTypePolicy_createScriptURL(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments) {
    return em_Val_as(TrustedScriptURL, em_Val_call(em_Val_as_val(self->inner), "createScriptURL", em_Val_from(input), em_Val_from(arguments)));
}

