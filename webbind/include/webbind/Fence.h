#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FenceEvent FenceEvent;
typedef struct FencedFrameConfig FencedFrameConfig;
typedef struct Event Event;

DECLARE_EMLITE_TYPE(Fence, em_Val);

jb_Undefined Fence_reportEvent0(Fence* self );

jb_Undefined Fence_reportEvent1(Fence* self , jb_Any * event);

jb_Undefined Fence_setReportEventDataForAutomaticBeacons0(Fence* self );

jb_Undefined Fence_setReportEventDataForAutomaticBeacons1(Fence* self , FenceEvent * event);

jb_Array Fence_getNestedConfigs(Fence* self );

jb_Promise Fence_disableUntrustedNetwork(Fence* self );

jb_Undefined Fence_notifyEvent(Fence* self , Event * event);

#ifdef __cplusplus
}
#endif
