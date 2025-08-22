#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FenceEvent FenceEvent;
typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct Event Event;


/**
 * @brief Interface Fence
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Fence)
 */
DECLARE_EMLITE_TYPE(Fence, em_Val);

/**
 * @brief Calls the `reportEvent` method. 
*/
jb_Undefined Fence_reportEvent0(Fence* self );

/**
 * @brief Calls the `reportEvent` method. 
*/
jb_Undefined Fence_reportEvent1(Fence* self , jb_Any * event);

/**
 * @brief Calls the `setReportEventDataForAutomaticBeacons` method. 
*/
jb_Undefined Fence_setReportEventDataForAutomaticBeacons0(Fence* self );

/**
 * @brief Calls the `setReportEventDataForAutomaticBeacons` method. 
*/
jb_Undefined Fence_setReportEventDataForAutomaticBeacons1(Fence* self , FenceEvent * event);

/**
 * @brief Calls the `getNestedConfigs` method. 
*/
jb_Array Fence_getNestedConfigs(Fence* self );

/**
 * @brief Calls the `disableUntrustedNetwork` method. 
*/
jb_Promise Fence_disableUntrustedNetwork(Fence* self );

/**
 * @brief Calls the `notifyEvent` method. 
*/
jb_Undefined Fence_notifyEvent(Fence* self , Event * event);

#ifdef __cplusplus
}
#endif
