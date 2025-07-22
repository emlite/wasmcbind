#include <webbind/TrustedScript.h>


DEFINE_EMLITE_TYPE(TrustedScript, em_Val);


jb_DOMString TrustedScript_toJSON(TrustedScript* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

