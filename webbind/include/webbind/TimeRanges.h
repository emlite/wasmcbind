#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} TimeRanges;


DECLARE_EMLITE_TYPE(TimeRanges, em_Val);

unsigned long TimeRanges_length( const TimeRanges *self);

double TimeRanges_start(TimeRanges* self , unsigned long index);

double TimeRanges_end(TimeRanges* self , unsigned long index);
