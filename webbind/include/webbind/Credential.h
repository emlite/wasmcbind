#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(Credential, em_Val);

jb_String Credential_id(const Credential *self);

jb_String Credential_type(const Credential *self);

jb_Promise Credential_isConditionalMediationAvailable(Credential* self );

jb_Promise Credential_willRequestConditionalCreation(Credential* self );
