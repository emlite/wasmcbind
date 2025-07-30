#include <webbind/OTPCredential.h>


DEFINE_EMLITE_TYPE(OTPCredential, Credential);


jb_String OTPCredential_code(const OTPCredential *self) {
    return em_Val_as(jb_String, em_Val_get(Credential_as_val(self->inner), em_Val_from("code")));
}

