#include <webbind/USB.h>
#include <webbind/USBDevice.h>


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

DEFINE_EMLITE_TYPE(USB, EventTarget);


jb_Any USB_onconnect(const USB *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void USB_set_onconnect(USB* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any USB_ondisconnect(const USB *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondisconnect")));
}


void USB_set_ondisconnect(USB* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondisconnect"), em_Val_from(value));
}


jb_Promise USB_getDevices(USB* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDevices"));
}


jb_Promise USB_requestDevice(USB* self , USBDeviceRequestOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice", em_Val_from(options)));
}

