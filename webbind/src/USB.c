#include <webbind/USB.h>

#include <webbind/USBDevice.h>
#include <webbind/USBDeviceRequestOptions.h>

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

