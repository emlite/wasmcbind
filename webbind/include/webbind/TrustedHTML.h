#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(TrustedHTML, em_Val);

jb_String TrustedHTML_toJSON(TrustedHTML* self );
