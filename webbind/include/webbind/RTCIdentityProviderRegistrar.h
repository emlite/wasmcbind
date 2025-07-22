#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct RTCIdentityProvider RTCIdentityProvider;


typedef struct {
  em_Val inner;
} RTCIdentityProvider;


DECLARE_EMLITE_TYPE(RTCIdentityProvider, em_Val);

jb_Function RTCIdentityProvider_generateAssertion( const RTCIdentityProvider *self);

void RTCIdentityProvider_set_generateAssertion(RTCIdentityProvider* self, const jb_Function* value);

jb_Function RTCIdentityProvider_validateAssertion( const RTCIdentityProvider *self);

void RTCIdentityProvider_set_validateAssertion(RTCIdentityProvider* self, const jb_Function* value);
typedef struct {
  em_Val inner;
} RTCIdentityProviderRegistrar;


DECLARE_EMLITE_TYPE(RTCIdentityProviderRegistrar, em_Val);

jb_Undefined RTCIdentityProviderRegistrar_register_(RTCIdentityProviderRegistrar* self , const RTCIdentityProvider* idp);
