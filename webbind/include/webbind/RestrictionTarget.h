#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct RestrictionTarget RestrictionTarget;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(RestrictionTarget, em_Val);

jb_Promise RestrictionTarget_fromElement(RestrictionTarget* self , Element * element);
