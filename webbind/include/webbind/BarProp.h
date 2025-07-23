#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(BarProp, em_Val);

bool BarProp_visible(const BarProp *self);
