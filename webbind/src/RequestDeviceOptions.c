#include <webbind/RequestDeviceOptions.h>

DEFINE_EMLITE_TYPE(RequestDeviceOptions, em_Val);


jb_Array RequestDeviceOptions_filters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_exclusionFilters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_optionalServices(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalServices")));
}


void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalServices"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_optionalManufacturerData(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalManufacturerData")));
}


void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalManufacturerData"), em_Val_from(value));
}


bool RequestDeviceOptions_acceptAllDevices(const RequestDeviceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("acceptAllDevices")));
}


void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("acceptAllDevices"), em_Val_from(value));
}


RequestDeviceOptions RequestDeviceOptions_new() {
    em_Val obj = em_Val_object();
    return RequestDeviceOptions_from_val(&obj);
}

