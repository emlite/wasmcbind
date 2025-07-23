#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(AuthenticatorResponse, em_Val);

jb_ArrayBuffer AuthenticatorResponse_clientDataJSON(const AuthenticatorResponse *self);
