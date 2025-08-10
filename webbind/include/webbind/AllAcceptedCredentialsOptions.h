#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AllAcceptedCredentialsOptions, em_Val);

jb_String AllAcceptedCredentialsOptions_rpId(const AllAcceptedCredentialsOptions *self);

void AllAcceptedCredentialsOptions_set_rpId(AllAcceptedCredentialsOptions* self, jb_String * value);

jb_Any AllAcceptedCredentialsOptions_userId(const AllAcceptedCredentialsOptions *self);

void AllAcceptedCredentialsOptions_set_userId(AllAcceptedCredentialsOptions* self, jb_Any * value);

jb_Array AllAcceptedCredentialsOptions_allAcceptedCredentialIds(const AllAcceptedCredentialsOptions *self);

void AllAcceptedCredentialsOptions_set_allAcceptedCredentialIds(AllAcceptedCredentialsOptions* self, jb_Array * value);

AllAcceptedCredentialsOptions AllAcceptedCredentialsOptions_new();

#ifdef __cplusplus
}
#endif
