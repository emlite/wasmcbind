#include <webbind/IdentityCredentialError.h>


DEFINE_EMLITE_TYPE(IdentityCredentialError, DOMException);


IdentityCredentialError IdentityCredentialError_new0() {
        em_Val vv = em_Val_new(em_Val_global("IdentityCredentialError") );
        return IdentityCredentialError_from_val(&vv);
      }


IdentityCredentialError IdentityCredentialError_new1(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("IdentityCredentialError") , em_Val_from(message));
        return IdentityCredentialError_from_val(&vv);
      }


IdentityCredentialError IdentityCredentialError_new2(jb_String * message, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("IdentityCredentialError") , em_Val_from(message), em_Val_from(options));
        return IdentityCredentialError_from_val(&vv);
      }


jb_String IdentityCredentialError_error(const IdentityCredentialError *self) {
    return em_Val_as(jb_String, em_Val_get(DOMException_as_val(self->inner), em_Val_from("error")));
}


jb_String IdentityCredentialError_url(const IdentityCredentialError *self) {
    return em_Val_as(jb_String, em_Val_get(DOMException_as_val(self->inner), em_Val_from("url")));
}

