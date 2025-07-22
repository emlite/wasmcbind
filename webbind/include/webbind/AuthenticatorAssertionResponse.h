#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AuthenticatorResponse.h"
#include "enums.h"


typedef struct {
  AuthenticatorResponse inner;
} AuthenticatorAssertionResponse;


DECLARE_EMLITE_TYPE(AuthenticatorAssertionResponse, AuthenticatorResponse);

jb_ArrayBuffer AuthenticatorAssertionResponse_authenticatorData( const AuthenticatorAssertionResponse *self);

jb_ArrayBuffer AuthenticatorAssertionResponse_signature( const AuthenticatorAssertionResponse *self);

jb_ArrayBuffer AuthenticatorAssertionResponse_userHandle( const AuthenticatorAssertionResponse *self);
