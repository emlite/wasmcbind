#include <webcbind/DeviceMotionEvent.h>

#include <webcbind/DeviceMotionEventInit.h>
#include <webcbind/DeviceMotionEventAcceleration.h>
#include <webcbind/DeviceMotionEventRotationRate.h>

DEFINE_EMLITE_TYPE(DeviceMotionEvent, Event);


DeviceMotionEvent DeviceMotionEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("DeviceMotionEvent") , em_Val_from(type));
        return DeviceMotionEvent_from_val(&vv);
      }


DeviceMotionEvent DeviceMotionEvent_new1(jb_String * type, DeviceMotionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DeviceMotionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DeviceMotionEvent_from_val(&vv);
      }


DeviceMotionEventAcceleration DeviceMotionEvent_acceleration(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventAcceleration, em_Val_get(Event_as_val(self->inner), em_Val_from("acceleration")));
}


DeviceMotionEventAcceleration DeviceMotionEvent_accelerationIncludingGravity(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventAcceleration, em_Val_get(Event_as_val(self->inner), em_Val_from("accelerationIncludingGravity")));
}


DeviceMotionEventRotationRate DeviceMotionEvent_rotationRate(const DeviceMotionEvent *self) {
    return em_Val_as(DeviceMotionEventRotationRate, em_Val_get(Event_as_val(self->inner), em_Val_from("rotationRate")));
}


double DeviceMotionEvent_interval(const DeviceMotionEvent *self) {
    return em_Val_as(double, em_Val_get(Event_as_val(self->inner), em_Val_from("interval")));
}


jb_Promise DeviceMotionEvent_requestPermission(DeviceMotionEvent* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("devicemotionevent"), "requestPermission"));
}

