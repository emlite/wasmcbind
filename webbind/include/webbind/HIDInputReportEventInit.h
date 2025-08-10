#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;

DECLARE_EMLITE_TYPE(HIDInputReportEventInit, EventInit);

HIDDevice HIDInputReportEventInit_device(const HIDInputReportEventInit *self);

void HIDInputReportEventInit_set_device(HIDInputReportEventInit* self, HIDDevice * value);

unsigned char HIDInputReportEventInit_reportId(const HIDInputReportEventInit *self);

void HIDInputReportEventInit_set_reportId(HIDInputReportEventInit* self, unsigned char value);

jb_DataView HIDInputReportEventInit_data(const HIDInputReportEventInit *self);

void HIDInputReportEventInit_set_data(HIDInputReportEventInit* self, jb_DataView * value);

HIDInputReportEventInit HIDInputReportEventInit_new();

#ifdef __cplusplus
}
#endif
