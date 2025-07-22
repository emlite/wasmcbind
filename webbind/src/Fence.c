#include <webbind/Fence.h>
#include <webbind/FencedFrameConfig.h>
#include <webbind/Event.h>


DEFINE_EMLITE_TYPE(FenceEvent, em_Val);


jb_DOMString FenceEvent_eventType(const FenceEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventType")));
}


void FenceEvent_set_eventType(FenceEvent* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventType"), em_Val_from(value));
}


jb_DOMString FenceEvent_eventData(const FenceEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventData")));
}


void FenceEvent_set_eventData(FenceEvent* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventData"), em_Val_from(value));
}


jb_Sequence FenceEvent_destination(const FenceEvent *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("destination")));
}


void FenceEvent_set_destination(FenceEvent* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("destination"), em_Val_from(value));
}


bool FenceEvent_crossOriginExposed(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crossOriginExposed")));
}


void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crossOriginExposed"), em_Val_from(value));
}


bool FenceEvent_once(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("once")));
}


void FenceEvent_set_once(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("once"), em_Val_from(value));
}


jb_USVString FenceEvent_destinationURL(const FenceEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("destinationURL")));
}


void FenceEvent_set_destinationURL(FenceEvent* self, jb_USVString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("destinationURL"), em_Val_from(value));
}

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


jb_Sequence Fence_getNestedConfigs(Fence* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getNestedConfigs"));
}


jb_Promise Fence_disableUntrustedNetwork(Fence* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "disableUntrustedNetwork"));
}


jb_Undefined Fence_notifyEvent(Fence* self , Event * event) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "notifyEvent", em_Val_from(event)));
}

