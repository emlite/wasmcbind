#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PerformanceServerTiming;


DECLARE_EMLITE_TYPE(PerformanceServerTiming, em_Val);

jb_DOMString PerformanceServerTiming_name( const PerformanceServerTiming *self);

jb_Any PerformanceServerTiming_duration( const PerformanceServerTiming *self);

jb_DOMString PerformanceServerTiming_description( const PerformanceServerTiming *self);

jb_Object PerformanceServerTiming_toJSON(PerformanceServerTiming* self );
