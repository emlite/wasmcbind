#include <webbind/ProtectedAudienceUtilities.h>

DEFINE_EMLITE_TYPE(ProtectedAudienceUtilities, em_Val);


jb_Uint8Array ProtectedAudienceUtilities_encodeUtf8(ProtectedAudienceUtilities* self , jb_String * input) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "encodeUtf8", em_Val_from(input)));
}


jb_String ProtectedAudienceUtilities_decodeUtf8(ProtectedAudienceUtilities* self , jb_Uint8Array * bytes) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "decodeUtf8", em_Val_from(bytes)));
}

