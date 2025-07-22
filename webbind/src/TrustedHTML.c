#include <webbind/TrustedHTML.h>


DEFINE_EMLITE_TYPE(TrustedHTML, em_Val);


jb_DOMString TrustedHTML_toJSON(TrustedHTML* self ) {
    return em_Val_as(jb_DOMString, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

