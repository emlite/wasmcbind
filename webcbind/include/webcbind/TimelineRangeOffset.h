#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

/** @brief Dictionary type TimelineRangeOffset */
DECLARE_EMLITE_TYPE(TimelineRangeOffset, em_Val);

/** @brief Getter of the rangeName property */
jb_String TimelineRangeOffset_rangeName(const TimelineRangeOffset *self);

/** @brief Setter of the rangeName property */
void TimelineRangeOffset_set_rangeName(TimelineRangeOffset* self, jb_String * value);

/** @brief Getter of the offset property */
CSSNumericValue TimelineRangeOffset_offset(const TimelineRangeOffset *self);

/** @brief Setter of the offset property */
void TimelineRangeOffset_set_offset(TimelineRangeOffset* self, CSSNumericValue * value);

/** @brief Constructor of the TimelineRangeOffset dictionary type */
TimelineRangeOffset TimelineRangeOffset_new();

#ifdef __cplusplus
}
#endif
