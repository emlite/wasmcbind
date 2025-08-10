#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(TimelineRangeOffset, em_Val);

jb_String TimelineRangeOffset_rangeName(const TimelineRangeOffset *self);

void TimelineRangeOffset_set_rangeName(TimelineRangeOffset* self, jb_String * value);

CSSNumericValue TimelineRangeOffset_offset(const TimelineRangeOffset *self);

void TimelineRangeOffset_set_offset(TimelineRangeOffset* self, CSSNumericValue * value);

TimelineRangeOffset TimelineRangeOffset_new();

#ifdef __cplusplus
}
#endif
