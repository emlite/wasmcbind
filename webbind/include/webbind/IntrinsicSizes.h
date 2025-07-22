#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(IntrinsicSizes, em_Val);

double IntrinsicSizes_minContentSize( const IntrinsicSizes *self);

double IntrinsicSizes_maxContentSize( const IntrinsicSizes *self);
