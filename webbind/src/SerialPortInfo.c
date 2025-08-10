#include <webbind/SerialPortInfo.h>

DEFINE_EMLITE_TYPE(SerialPortInfo, em_Val);


unsigned short SerialPortInfo_usbVendorId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbVendorId")));
}


void SerialPortInfo_set_usbVendorId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbVendorId"), em_Val_from(value));
}


unsigned short SerialPortInfo_usbProductId(const SerialPortInfo *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usbProductId")));
}


void SerialPortInfo_set_usbProductId(SerialPortInfo* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usbProductId"), em_Val_from(value));
}


jb_Any SerialPortInfo_bluetoothServiceClassId(const SerialPortInfo *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId")));
}


void SerialPortInfo_set_bluetoothServiceClassId(SerialPortInfo* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bluetoothServiceClassId"), em_Val_from(value));
}


SerialPortInfo SerialPortInfo_new() {
    em_Val obj = em_Val_object();
    return SerialPortInfo_from_val(&obj);
}

