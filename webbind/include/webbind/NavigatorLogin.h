#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(NavigatorLogin, em_Val);

jb_Promise NavigatorLogin_setStatus(NavigatorLogin* self , LoginStatus * status);
