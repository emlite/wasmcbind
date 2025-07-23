#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(RTCIdentityAssertion, em_Val);

RTCIdentityAssertion RTCIdentityAssertion_new(jb_DOMString * idp, jb_DOMString * name);

jb_DOMString RTCIdentityAssertion_idp(const RTCIdentityAssertion *self);

void RTCIdentityAssertion_set_idp(RTCIdentityAssertion* self, jb_DOMString * value);

jb_DOMString RTCIdentityAssertion_name(const RTCIdentityAssertion *self);

void RTCIdentityAssertion_set_name(RTCIdentityAssertion* self, jb_DOMString * value);
