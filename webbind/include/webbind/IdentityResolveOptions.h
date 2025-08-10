#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityResolveOptions, em_Val);

jb_String IdentityResolveOptions_accountId(const IdentityResolveOptions *self);

void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, jb_String * value);

IdentityResolveOptions IdentityResolveOptions_new();

#ifdef __cplusplus
}
#endif
