#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDInputReportEventInit HIDInputReportEventInit;
typedef struct HIDDevice HIDDevice;


/**
 * @brief Interface HIDInputReportEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent)
 */
DECLARE_EMLITE_TYPE(HIDInputReportEvent, Event);

/**
 * @brief Creates a new `HIDInputReportEvent` object. 
*/
HIDInputReportEvent HIDInputReportEvent_new(jb_String * type, HIDInputReportEventInit * eventInitDict);

/**
 * @brief Gets the `device` property. 
*/
HIDDevice HIDInputReportEvent_device(const HIDInputReportEvent *self);

/**
 * @brief Gets the `reportId` property. 
*/
unsigned char HIDInputReportEvent_reportId(const HIDInputReportEvent *self);

/**
 * @brief Gets the `data` property. 
*/
jb_DataView HIDInputReportEvent_data(const HIDInputReportEvent *self);

#ifdef __cplusplus
}
#endif
