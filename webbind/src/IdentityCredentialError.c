#include <webbind/IdentityCredentialError.h>


DEFINE_EMLITE_TYPE(IdentityCredentialError, DOMException);


IdentityCredentialError IdentityCredentialError_new() : DOMException(em_Val_global("IdentityCredentialError").new_()) {
        return IdentityCredentialError(em_Val_new(em_Val_global("IdentityCredentialError", ));
      }


IdentityCredentialError IdentityCredentialError_new(const jb_DOMString* message) : DOMException(em_Val_global("IdentityCredentialError").new_(em_Val_from(message))) {
        return IdentityCredentialError(em_Val_new(em_Val_global("IdentityCredentialError", em_Val_from(message)));
      }


IdentityCredentialError IdentityCredentialError_new(const jb_DOMString* message, const jb_Any* options) : DOMException(em_Val_global("IdentityCredentialError").new_(em_Val_from(message), em_Val_from(options))) {
        return IdentityCredentialError(em_Val_new(em_Val_global("IdentityCredentialError", em_Val_from(message), em_Val_from(options)));
      }


jb_DOMString IdentityCredentialError_error(const IdentityCredentialError *self) {
    return em_Val_as(jb_DOMString, em_Val_get(DOMException_as_val(self->inner), "error"));
}


jb_USVString IdentityCredentialError_url(const IdentityCredentialError *self) {
    return em_Val_as(jb_USVString, em_Val_get(DOMException_as_val(self->inner), "url"));
}

