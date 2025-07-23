#include <jsbind/jsbind.h>
#include "DOMException.h"


DECLARE_EMLITE_TYPE(IdentityCredentialError, DOMException);

IdentityCredentialError IdentityCredentialError_new0();

IdentityCredentialError IdentityCredentialError_new1(jb_DOMString * message);

IdentityCredentialError IdentityCredentialError_new2(jb_DOMString * message, jb_Any * options);

jb_DOMString IdentityCredentialError_error(const IdentityCredentialError *self);

jb_USVString IdentityCredentialError_url(const IdentityCredentialError *self);
