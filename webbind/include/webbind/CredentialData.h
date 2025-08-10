#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CredentialData, em_Val);

jb_String CredentialData_id(const CredentialData *self);

void CredentialData_set_id(CredentialData* self, jb_String * value);

CredentialData CredentialData_new();

#ifdef __cplusplus
}
#endif
