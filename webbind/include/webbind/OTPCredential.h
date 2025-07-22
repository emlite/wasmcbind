#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"


typedef struct {
  Credential inner;
} OTPCredential;


DECLARE_EMLITE_TYPE(OTPCredential, Credential);

jb_DOMString OTPCredential_code( const OTPCredential *self);
