#include <webbind/TrustedScriptURL.h>


DEFINE_EMLITE_TYPE(TrustedScriptURL, em_Val);


jb_USVString TrustedScriptURL_toJSON(TrustedScriptURL* self ) {
    return em_Val_as(jb_USVString, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

