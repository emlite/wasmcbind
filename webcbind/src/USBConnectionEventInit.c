#include <webcbind/USBConnectionEventInit.h>

#include <webcbind/USBDevice.h>

DEFINE_EMLITE_TYPE(USBConnectionEventInit, EventInit);


USBDevice USBConnectionEventInit_device(const USBConnectionEventInit *self) {
    return em_Val_as(USBDevice, em_Val_get(EventInit_as_val(self->inner), em_Val_from("device")));
}


void USBConnectionEventInit_set_device(USBConnectionEventInit* self, USBDevice * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("device"), em_Val_from(value));
}


USBConnectionEventInit USBConnectionEventInit_new() {
    em_Val obj = em_Val_object();
    return USBConnectionEventInit_from_val(&obj);
}

