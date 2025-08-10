#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HIDReportInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HIDCollectionInfo, em_Val);

unsigned short HIDCollectionInfo_usagePage(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_usagePage(HIDCollectionInfo* self, unsigned short value);

unsigned short HIDCollectionInfo_usage(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_usage(HIDCollectionInfo* self, unsigned short value);

unsigned char HIDCollectionInfo_type(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_type(HIDCollectionInfo* self, unsigned char value);

jb_Array HIDCollectionInfo_children(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_children(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_inputReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_inputReports(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_outputReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_outputReports(HIDCollectionInfo* self, jb_Array * value);

jb_Array HIDCollectionInfo_featureReports(const HIDCollectionInfo *self);

void HIDCollectionInfo_set_featureReports(HIDCollectionInfo* self, jb_Array * value);

HIDCollectionInfo HIDCollectionInfo_new();

#ifdef __cplusplus
}
#endif
