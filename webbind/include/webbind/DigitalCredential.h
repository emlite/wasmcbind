#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"


typedef struct {
  Credential inner;
} DigitalCredential;


DECLARE_EMLITE_TYPE(DigitalCredential, Credential);

jb_Object DigitalCredential_toJSON(DigitalCredential* self );

jb_DOMString DigitalCredential_protocol( const DigitalCredential *self);

jb_Object DigitalCredential_data( const DigitalCredential *self);

bool DigitalCredential_userAgentAllowsProtocol(DigitalCredential* self , const jb_DOMString* protocol);
