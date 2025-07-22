#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} TrustedHTML;


DECLARE_EMLITE_TYPE(TrustedHTML, em_Val);

jb_DOMString TrustedHTML_toJSON(TrustedHTML* self );
