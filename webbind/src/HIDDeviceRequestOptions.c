#include <webbind/HIDDeviceRequestOptions.h>

DEFINE_EMLITE_TYPE(HIDDeviceRequestOptions, em_Val);


jb_Array HIDDeviceRequestOptions_filters(const HIDDeviceRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void HIDDeviceRequestOptions_set_filters(HIDDeviceRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array HIDDeviceRequestOptions_exclusionFilters(const HIDDeviceRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void HIDDeviceRequestOptions_set_exclusionFilters(HIDDeviceRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}


HIDDeviceRequestOptions HIDDeviceRequestOptions_new() {
    em_Val obj = em_Val_object();
    return HIDDeviceRequestOptions_from_val(&obj);
}

