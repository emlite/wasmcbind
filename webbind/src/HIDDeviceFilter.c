#include <webbind/HIDDeviceFilter.h>

DEFINE_EMLITE_TYPE(HIDDeviceFilter, em_Val);


unsigned long HIDDeviceFilter_vendorId(const HIDDeviceFilter *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vendorId")));
}


void HIDDeviceFilter_set_vendorId(HIDDeviceFilter* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("vendorId"), em_Val_from(value));
}


unsigned short HIDDeviceFilter_productId(const HIDDeviceFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("productId")));
}


void HIDDeviceFilter_set_productId(HIDDeviceFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("productId"), em_Val_from(value));
}


unsigned short HIDDeviceFilter_usagePage(const HIDDeviceFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usagePage")));
}


void HIDDeviceFilter_set_usagePage(HIDDeviceFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usagePage"), em_Val_from(value));
}


unsigned short HIDDeviceFilter_usage(const HIDDeviceFilter *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usage")));
}


void HIDDeviceFilter_set_usage(HIDDeviceFilter* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usage"), em_Val_from(value));
}


HIDDeviceFilter HIDDeviceFilter_new() {
    em_Val obj = em_Val_object();
    return HIDDeviceFilter_from_val(&obj);
}

