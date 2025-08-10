#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DocumentTimelineOptions, em_Val);

jb_Any DocumentTimelineOptions_originTime(const DocumentTimelineOptions *self);

void DocumentTimelineOptions_set_originTime(DocumentTimelineOptions* self, jb_Any * value);

DocumentTimelineOptions DocumentTimelineOptions_new();

#ifdef __cplusplus
}
#endif
