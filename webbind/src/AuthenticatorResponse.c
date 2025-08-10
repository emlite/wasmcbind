#include <webbind/AuthenticatorResponse.h>

DEFINE_EMLITE_TYPE(AuthenticatorResponse, em_Val);


jb_ArrayBuffer AuthenticatorResponse_clientDataJSON(const AuthenticatorResponse *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clientDataJSON")));
}

