#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} TrustedScript;


DECLARE_EMLITE_TYPE(TrustedScript, em_Val);

jb_DOMString TrustedScript_toJSON(TrustedScript* self );
