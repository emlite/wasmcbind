#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(ProtectedAudience, em_Val);

jb_Any ProtectedAudience_queryFeatureSupport(ProtectedAudience* self , jb_String * feature);
