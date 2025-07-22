#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbstractRange.h"
#include "enums.h"


typedef struct {
  AbstractRange inner;
} StaticRange;


DECLARE_EMLITE_TYPE(StaticRange, AbstractRange);

StaticRange StaticRange_new(const jb_Any* init);
