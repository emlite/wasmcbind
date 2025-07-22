#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MIDIInputMap;


DECLARE_EMLITE_TYPE(MIDIInputMap, em_Val);
