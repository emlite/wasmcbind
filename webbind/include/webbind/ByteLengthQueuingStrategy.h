#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ByteLengthQueuingStrategy;


DECLARE_EMLITE_TYPE(ByteLengthQueuingStrategy, em_Val);

ByteLengthQueuingStrategy ByteLengthQueuingStrategy_new(const jb_Any* init);

double ByteLengthQueuingStrategy_highWaterMark( const ByteLengthQueuingStrategy *self);

jb_Function ByteLengthQueuingStrategy_size( const ByteLengthQueuingStrategy *self);
