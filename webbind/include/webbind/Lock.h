#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(Lock, em_Val);

jb_String Lock_name(const Lock *self);

LockMode Lock_mode(const Lock *self);
