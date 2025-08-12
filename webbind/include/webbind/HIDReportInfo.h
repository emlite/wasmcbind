#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "HIDReportItem.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HIDReportInfo */
DECLARE_EMLITE_TYPE(HIDReportInfo, em_Val);

/** @brief Getter of the reportId property */
unsigned char HIDReportInfo_reportId(const HIDReportInfo *self);

/** @brief Setter of the reportId property */
void HIDReportInfo_set_reportId(HIDReportInfo* self, unsigned char value);

/** @brief Getter of the items property */
jb_Array HIDReportInfo_items(const HIDReportInfo *self);

/** @brief Setter of the items property */
void HIDReportInfo_set_items(HIDReportInfo* self, jb_Array * value);

/** @brief Constructor of the HIDReportInfo dictionary type */
HIDReportInfo HIDReportInfo_new();

#ifdef __cplusplus
}
#endif
