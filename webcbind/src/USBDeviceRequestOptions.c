#include <webcbind/USBDeviceRequestOptions.h>

DEFINE_EMLITE_TYPE(USBDeviceRequestOptions, em_Val);


jb_Array USBDeviceRequestOptions_filters(const USBDeviceRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void USBDeviceRequestOptions_set_filters(USBDeviceRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array USBDeviceRequestOptions_exclusionFilters(const USBDeviceRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void USBDeviceRequestOptions_set_exclusionFilters(USBDeviceRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}


USBDeviceRequestOptions USBDeviceRequestOptions_new() {
    em_Val obj = em_Val_object();
    return USBDeviceRequestOptions_from_val(&obj);
}

