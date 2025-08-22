#include <webcbind/SerialPortFilter.h>

DEFINE_EMLITE_TYPE(SerialPortFilter, em_Val);


unsigned short SerialPortFilter_usbVendorId(const SerialPortFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbVendorId")));
}


void SerialPortFilter_set_usbVendorId(SerialPortFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbVendorId"), em_Val_from(value));
}


unsigned short SerialPortFilter_usbProductId(const SerialPortFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbProductId")));
}


void SerialPortFilter_set_usbProductId(SerialPortFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbProductId"), em_Val_from(value));
}


jb_Any SerialPortFilter_bluetoothServiceClassId(const SerialPortFilter *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId")));
}


void SerialPortFilter_set_bluetoothServiceClassId(SerialPortFilter* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId"), em_Val_from(value));
}


SerialPortFilter SerialPortFilter_new() {
    em_Val obj = em_Val_object();
    return SerialPortFilter_from_val(&obj);
}

