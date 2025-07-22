#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} BarProp;


DECLARE_EMLITE_TYPE(BarProp, em_Val);

bool BarProp_visible( const BarProp *self);
