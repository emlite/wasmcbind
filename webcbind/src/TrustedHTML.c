#include <webcbind/TrustedHTML.h>

DEFINE_EMLITE_TYPE(TrustedHTML, em_Val);


jb_String TrustedHTML_toJSON(TrustedHTML* self ) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

