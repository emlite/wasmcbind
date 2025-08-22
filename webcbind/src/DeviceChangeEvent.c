#include <webcbind/DeviceChangeEvent.h>

#include <webcbind/DeviceChangeEventInit.h>
#include <webcbind/MediaDeviceInfo.h>

DEFINE_EMLITE_TYPE(DeviceChangeEvent, Event);


DeviceChangeEvent DeviceChangeEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("DeviceChangeEvent") , em_Val_from(type));
        return DeviceChangeEvent_from_val(&vv);
      }


DeviceChangeEvent DeviceChangeEvent_new1(jb_String * type, DeviceChangeEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("DeviceChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return DeviceChangeEvent_from_val(&vv);
      }


jb_Array DeviceChangeEvent_devices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("devices")));
}


jb_Array DeviceChangeEvent_userInsertedDevices(const DeviceChangeEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(Event_as_val(self->inner), em_Val_from("userInsertedDevices")));
}

