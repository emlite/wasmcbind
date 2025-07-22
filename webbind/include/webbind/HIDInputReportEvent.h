#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct HIDDevice HIDDevice;


typedef struct {
  Event inner;
} HIDInputReportEvent;


DECLARE_EMLITE_TYPE(HIDInputReportEvent, Event);

HIDInputReportEvent HIDInputReportEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

HIDDevice HIDInputReportEvent_device( const HIDInputReportEvent *self);

unsigned char HIDInputReportEvent_reportId( const HIDInputReportEvent *self);

jb_DataView HIDInputReportEvent_data( const HIDInputReportEvent *self);
