#include <webbind/TrustedTypePolicy.h>
#include <webbind/TrustedHTML.h>
#include <webbind/TrustedScript.h>
#include <webbind/TrustedScriptURL.h>


DEFINE_EMLITE_TYPE(TrustedTypePolicy, em_Val);


jb_DOMString TrustedTypePolicy_name(const TrustedTypePolicy *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


TrustedHTML TrustedTypePolicy_createHTML(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments) {
    return em_Val_as(TrustedHTML, em_Val_call(em_Val_as_val(self->inner), "createHTML", em_Val_from(input), em_Val_from(arguments)));
}


TrustedScript TrustedTypePolicy_createScript(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments) {
    return em_Val_as(TrustedScript, em_Val_call(em_Val_as_val(self->inner), "createScript", em_Val_from(input), em_Val_from(arguments)));
}


TrustedScriptURL TrustedTypePolicy_createScriptURL(TrustedTypePolicy* self , jb_DOMString * input, jb_Any * arguments) {
    return em_Val_as(TrustedScriptURL, em_Val_call(em_Val_as_val(self->inner), "createScriptURL", em_Val_from(input), em_Val_from(arguments)));
}

