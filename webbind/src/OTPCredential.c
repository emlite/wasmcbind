#include <webbind/OTPCredential.h>


DEFINE_EMLITE_TYPE(OTPCredential, Credential);


jb_DOMString OTPCredential_code(const OTPCredential *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Credential_as_val(self->inner), "code"));
}

