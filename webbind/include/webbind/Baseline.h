#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(Baseline, em_Val);

jb_DOMString Baseline_name( const Baseline *self);

double Baseline_value( const Baseline *self);
