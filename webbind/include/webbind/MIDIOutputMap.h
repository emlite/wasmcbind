#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MIDIOutputMap;


DECLARE_EMLITE_TYPE(MIDIOutputMap, em_Val);
