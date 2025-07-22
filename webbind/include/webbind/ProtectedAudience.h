#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ProtectedAudience;


DECLARE_EMLITE_TYPE(ProtectedAudience, em_Val);

jb_Any ProtectedAudience_queryFeatureSupport(ProtectedAudience* self , const jb_DOMString* feature);
