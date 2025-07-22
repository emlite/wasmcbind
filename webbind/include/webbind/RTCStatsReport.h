#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} RTCStatsReport;


DECLARE_EMLITE_TYPE(RTCStatsReport, em_Val);
