#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;

/** @brief Dictionary type HIDInputReportEventInit */
DECLARE_EMLITE_TYPE(HIDInputReportEventInit, EventInit);

/** @brief Getter of the device property */
HIDDevice HIDInputReportEventInit_device(const HIDInputReportEventInit *self);

/** @brief Setter of the device property */
void HIDInputReportEventInit_set_device(HIDInputReportEventInit* self, HIDDevice * value);

/** @brief Getter of the reportId property */
unsigned char HIDInputReportEventInit_reportId(const HIDInputReportEventInit *self);

/** @brief Setter of the reportId property */
void HIDInputReportEventInit_set_reportId(HIDInputReportEventInit* self, unsigned char value);

/** @brief Getter of the data property */
jb_DataView HIDInputReportEventInit_data(const HIDInputReportEventInit *self);

/** @brief Setter of the data property */
void HIDInputReportEventInit_set_data(HIDInputReportEventInit* self, jb_DataView * value);

/** @brief Constructor of the HIDInputReportEventInit dictionary type */
HIDInputReportEventInit HIDInputReportEventInit_new();

#ifdef __cplusplus
}
#endif
