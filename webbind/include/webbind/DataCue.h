#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "TextTrackCue.h"
#include "enums.h"


typedef struct {
  TextTrackCue inner;
} DataCue;


DECLARE_EMLITE_TYPE(DataCue, TextTrackCue);

DataCue DataCue_new(double startTime, double endTime, const jb_Any* value);

DataCue DataCue_new(double startTime, double endTime, const jb_Any* value, const jb_DOMString* type);

jb_Any DataCue_value( const DataCue *self);

void DataCue_set_value(DataCue* self, const jb_Any* value);

jb_DOMString DataCue_type( const DataCue *self);
