#include <webbind/Fence.h>

#include <webbind/FenceEvent.h>
#include <webbind/FencedFrameConfig.h>
#include <webbind/Event.h>

DEFINE_EMLITE_TYPE(Fence, em_Val);


jb_Undefined Fence_reportEvent0(Fence* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportEvent"));
}


jb_Undefined Fence_reportEvent1(Fence* self , jb_Any * event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportEvent", em_Val_from(event)));
}


jb_Undefined Fence_setReportEventDataForAutomaticBeacons0(Fence* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setReportEventDataForAutomaticBeacons"));
}


jb_Undefined Fence_setReportEventDataForAutomaticBeacons1(Fence* self , FenceEvent * event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setReportEventDataForAutomaticBeacons", em_Val_from(event)));
}


jb_Array Fence_getNestedConfigs(Fence* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getNestedConfigs"));
}


jb_Promise Fence_disableUntrustedNetwork(Fence* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "disableUntrustedNetwork"));
}


jb_Undefined Fence_notifyEvent(Fence* self , Event * event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "notifyEvent", em_Val_from(event)));
}

