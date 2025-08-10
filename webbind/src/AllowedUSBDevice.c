#include <webbind/AllowedUSBDevice.h>

DEFINE_EMLITE_TYPE(AllowedUSBDevice, em_Val);


unsigned char AllowedUSBDevice_vendorId(const AllowedUSBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vendorId")));
}


void AllowedUSBDevice_set_vendorId(AllowedUSBDevice* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vendorId"), em_Val_from(value));
}


unsigned char AllowedUSBDevice_productId(const AllowedUSBDevice *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("productId")));
}


void AllowedUSBDevice_set_productId(AllowedUSBDevice* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("productId"), em_Val_from(value));
}


jb_String AllowedUSBDevice_serialNumber(const AllowedUSBDevice *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serialNumber")));
}


void AllowedUSBDevice_set_serialNumber(AllowedUSBDevice* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serialNumber"), em_Val_from(value));
}


AllowedUSBDevice AllowedUSBDevice_new() {
    em_Val obj = em_Val_object();
    return AllowedUSBDevice_from_val(&obj);
}

