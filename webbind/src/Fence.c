#include <webbind/Fence.h>
#include <webbind/FencedFrameConfig.h>
#include <webbind/Event.h>


DEFINE_EMLITE_TYPE(FenceEvent, em_Val);


jb_DOMString FenceEvent_eventType(const FenceEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "eventType"));
}


void FenceEvent_set_eventType(FenceEvent* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "eventType", value);
}


jb_DOMString FenceEvent_eventData(const FenceEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "eventData"));
}


void FenceEvent_set_eventData(FenceEvent* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "eventData", value);
}


jb_Sequence FenceEvent_destination(const FenceEvent *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "destination"));
}


void FenceEvent_set_destination(FenceEvent* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "destination", value);
}


bool FenceEvent_crossOriginExposed(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "crossOriginExposed"));
}


void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "crossOriginExposed", value);
}


bool FenceEvent_once(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "once"));
}


void FenceEvent_set_once(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "once", value);
}


jb_USVString FenceEvent_destinationURL(const FenceEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "destinationURL"));
}


void FenceEvent_set_destinationURL(FenceEvent* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "destinationURL", value);
}

DEFINE_EMLITE_TYPE(Fence, em_Val);


jb_Undefined Fence_reportEvent(Fence* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportEvent"));
}


jb_Undefined Fence_reportEvent(Fence* self , const jb_Any* event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportEvent", em_Val_from(event)));
}


jb_Undefined Fence_setReportEventDataForAutomaticBeacons(Fence* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setReportEventDataForAutomaticBeacons"));
}


jb_Undefined Fence_setReportEventDataForAutomaticBeacons(Fence* self , const FenceEvent* event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setReportEventDataForAutomaticBeacons", em_Val_from(event)));
}


jb_Sequence Fence_getNestedConfigs(Fence* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getNestedConfigs"));
}


jb_Promise Fence_disableUntrustedNetwork(Fence* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "disableUntrustedNetwork"));
}


jb_Undefined Fence_notifyEvent(Fence* self , const Event* event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "notifyEvent", em_Val_from(event)));
}

