#include <jsbind/jsbind.h>
#include "DOMException.h"


typedef struct {
  DOMException inner;
} IdentityCredentialError;


DECLARE_EMLITE_TYPE(IdentityCredentialError, DOMException);

IdentityCredentialError IdentityCredentialError_new();

IdentityCredentialError IdentityCredentialError_new(const jb_DOMString* message);

IdentityCredentialError IdentityCredentialError_new(const jb_DOMString* message, const jb_Any* options);

jb_DOMString IdentityCredentialError_error( const IdentityCredentialError *self);

jb_USVString IdentityCredentialError_url( const IdentityCredentialError *self);
