#include <webbind/DeviceChangeEvent.h>
#include <webbind/MediaDeviceInfo.h>


DEFINE_EMLITE_TYPE(DeviceChangeEvent, Event);


DeviceChangeEvent DeviceChangeEvent_new0(jb_DOMString * type) {
        em_Val vv = em_Val_new(em_Val_global("DeviceChangeEvent") , em_Val_from(type));
        return DeviceChangeEvent_from_val(&vv);
      }


DeviceChangeEvent DeviceChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DeviceChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DeviceChangeEvent_from_val(&vv);
      }


jb_FrozenArray DeviceChangeEvent_devices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), em_Val_from("devices")));
}


jb_FrozenArray DeviceChangeEvent_userInsertedDevices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(Event_as_val(self->inner), em_Val_from("userInsertedDevices")));
}

