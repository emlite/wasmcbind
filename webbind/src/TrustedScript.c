#include <webbind/TrustedScript.h>


DEFINE_EMLITE_TYPE(TrustedScript, em_Val);


jb_String TrustedScript_toJSON(TrustedScript* self ) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

