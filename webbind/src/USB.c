#include <webbind/USB.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBDeviceRequestOptions, em_Val);


jb_Sequence USBDeviceRequestOptions_filters(const USBDeviceRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "filters"));
}


void USBDeviceRequestOptions_set_filters(USBDeviceRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "filters", value);
}


jb_Sequence USBDeviceRequestOptions_exclusionFilters(const USBDeviceRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "exclusionFilters"));
}


void USBDeviceRequestOptions_set_exclusionFilters(USBDeviceRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "exclusionFilters", value);
}

DEFINE_EMLITE_TYPE(USB, EventTarget);


jb_Any USB_onconnect(const USB *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnect"));
}


void USB_set_onconnect(USB* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnect", value);
}


jb_Any USB_ondisconnect(const USB *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondisconnect"));
}


void USB_set_ondisconnect(USB* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondisconnect", value);
}


jb_Promise USB_getDevices(USB* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDevices"));
}


jb_Promise USB_requestDevice(USB* self , const USBDeviceRequestOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice", em_Val_from(options)));
}

