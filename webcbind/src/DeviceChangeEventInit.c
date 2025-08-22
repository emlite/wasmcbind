#include <webcbind/DeviceChangeEventInit.h>

#include <webcbind/MediaDeviceInfo.h>

DEFINE_EMLITE_TYPE(DeviceChangeEventInit, EventInit);


jb_Array DeviceChangeEventInit_devices(const DeviceChangeEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("devices")));
}


void DeviceChangeEventInit_set_devices(DeviceChangeEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("devices"), em_Val_from(value));
}


DeviceChangeEventInit DeviceChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return DeviceChangeEventInit_from_val(&obj);
}

