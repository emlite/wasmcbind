#include <webbind/DeviceOrientationEvent.h>


DEFINE_EMLITE_TYPE(DeviceOrientationEvent, Event);


DeviceOrientationEvent DeviceOrientationEvent_new(const jb_DOMString* type) : Event(em_Val_global("DeviceOrientationEvent").new_(em_Val_from(type))) {
        return DeviceOrientationEvent(em_Val_new(em_Val_global("DeviceOrientationEvent", em_Val_from(type)));
      }


DeviceOrientationEvent DeviceOrientationEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("DeviceOrientationEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return DeviceOrientationEvent(em_Val_new(em_Val_global("DeviceOrientationEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


double DeviceOrientationEvent_alpha(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "alpha"));
}


double DeviceOrientationEvent_beta(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "beta"));
}


double DeviceOrientationEvent_gamma(const DeviceOrientationEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "gamma"));
}


bool DeviceOrientationEvent_absolute(const DeviceOrientationEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "absolute"));
}


jb_Promise DeviceOrientationEvent_requestPermission(DeviceOrientationEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("deviceorientationevent"), "requestPermission"));
}


jb_Promise DeviceOrientationEvent_requestPermission(DeviceOrientationEvent* self , bool absolute) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("deviceorientationevent"), "requestPermission", em_Val_from(absolute)));
}

