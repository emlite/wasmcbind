#include <webbind/USBDeviceFilter.h>

DEFINE_EMLITE_TYPE(USBDeviceFilter, em_Val);


unsigned short USBDeviceFilter_vendorId(const USBDeviceFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vendorId")));
}


void USBDeviceFilter_set_vendorId(USBDeviceFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vendorId"), em_Val_from(value));
}


unsigned short USBDeviceFilter_productId(const USBDeviceFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("productId")));
}


void USBDeviceFilter_set_productId(USBDeviceFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("productId"), em_Val_from(value));
}


unsigned char USBDeviceFilter_classCode(const USBDeviceFilter *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("classCode")));
}


void USBDeviceFilter_set_classCode(USBDeviceFilter* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("classCode"), em_Val_from(value));
}


unsigned char USBDeviceFilter_subclassCode(const USBDeviceFilter *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subclassCode")));
}


void USBDeviceFilter_set_subclassCode(USBDeviceFilter* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subclassCode"), em_Val_from(value));
}


unsigned char USBDeviceFilter_protocolCode(const USBDeviceFilter *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocolCode")));
}


void USBDeviceFilter_set_protocolCode(USBDeviceFilter* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocolCode"), em_Val_from(value));
}


jb_String USBDeviceFilter_serialNumber(const USBDeviceFilter *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serialNumber")));
}


void USBDeviceFilter_set_serialNumber(USBDeviceFilter* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serialNumber"), em_Val_from(value));
}


USBDeviceFilter USBDeviceFilter_new() {
    em_Val obj = em_Val_object();
    return USBDeviceFilter_from_val(&obj);
}

