#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HIDReportItem.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HIDReportInfo, em_Val);

unsigned char HIDReportInfo_reportId(const HIDReportInfo *self);

void HIDReportInfo_set_reportId(HIDReportInfo* self, unsigned char value);

jb_Array HIDReportInfo_items(const HIDReportInfo *self);

void HIDReportInfo_set_items(HIDReportInfo* self, jb_Array * value);

HIDReportInfo HIDReportInfo_new();

#ifdef __cplusplus
}
#endif
