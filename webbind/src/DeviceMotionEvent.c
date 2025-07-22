#include <webbind/DeviceMotionEvent.h>
#include <webbind/DeviceMotionEventAcceleration.h>
#include <webbind/DeviceMotionEventRotationRate.h>


DEFINE_EMLITE_TYPE(DeviceMotionEvent, Event);


DeviceMotionEvent DeviceMotionEvent_new(const jb_DOMString* type) : Event(em_Val_global("DeviceMotionEvent").new_(em_Val_from(type))) {
        return DeviceMotionEvent(em_Val_new(em_Val_global("DeviceMotionEvent", em_Val_from(type)));
      }


DeviceMotionEvent DeviceMotionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("DeviceMotionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return DeviceMotionEvent(em_Val_new(em_Val_global("DeviceMotionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


DeviceMotionEventAcceleration DeviceMotionEvent_acceleration(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventAcceleration, em_Val_get(Event_as_val(self->inner), "acceleration"));
}


DeviceMotionEventAcceleration DeviceMotionEvent_accelerationIncludingGravity(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventAcceleration, em_Val_get(Event_as_val(self->inner), "accelerationIncludingGravity"));
}


DeviceMotionEventRotationRate DeviceMotionEvent_rotationRate(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventRotationRate, em_Val_get(Event_as_val(self->inner), "rotationRate"));
}


double DeviceMotionEvent_interval(const DeviceMotionEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), "interval"));
}


jb_Promise DeviceMotionEvent_requestPermission(DeviceMotionEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("devicemotionevent"), "requestPermission"));
}

