#include <webbind/DeviceOrientationEvent.h>

#include <webbind/DeviceOrientationEventInit.h>

DEFINE_EMLITE_TYPE(DeviceOrientationEvent, Event);


DeviceOrientationEvent DeviceOrientationEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("DeviceOrientationEvent") , em_Val_from(type));
        return DeviceOrientationEvent_from_val(&vv);
      }


DeviceOrientationEvent DeviceOrientationEvent_new1(jb_String * type, DeviceOrientationEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DeviceOrientationEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DeviceOrientationEvent_from_val(&vv);
      }


double DeviceOrientationEvent_alpha(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("alpha")));
}


double DeviceOrientationEvent_beta(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("beta")));
}


double DeviceOrientationEvent_gamma(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("gamma")));
}


bool DeviceOrientationEvent_absolute(const DeviceOrientationEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("absolute")));
}


jb_Promise DeviceOrientationEvent_requestPermission0(DeviceOrientationEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("deviceorientationevent"), "requestPermission"));
}


jb_Promise DeviceOrientationEvent_requestPermission1(DeviceOrientationEvent* self , bool absolute) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("deviceorientationevent"), "requestPermission", em_Val_from(absolute)));
}

