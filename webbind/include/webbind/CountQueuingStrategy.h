#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} CountQueuingStrategy;


DECLARE_EMLITE_TYPE(CountQueuingStrategy, em_Val);

CountQueuingStrategy CountQueuingStrategy_new(const jb_Any* init);

double CountQueuingStrategy_highWaterMark( const CountQueuingStrategy *self);

jb_Function CountQueuingStrategy_size( const CountQueuingStrategy *self);
