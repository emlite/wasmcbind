#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PressureRecord;


DECLARE_EMLITE_TYPE(PressureRecord, em_Val);

PressureSource PressureRecord_source( const PressureRecord *self);

PressureState PressureRecord_state( const PressureRecord *self);

jb_Any PressureRecord_time( const PressureRecord *self);

jb_Object PressureRecord_toJSON(PressureRecord* self );
