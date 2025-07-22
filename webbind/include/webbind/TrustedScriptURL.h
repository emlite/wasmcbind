#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} TrustedScriptURL;


DECLARE_EMLITE_TYPE(TrustedScriptURL, em_Val);

jb_USVString TrustedScriptURL_toJSON(TrustedScriptURL* self );
