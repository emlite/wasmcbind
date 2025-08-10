#include <webbind/HID.h>

#include <webbind/HIDDevice.h>
#include <webbind/HIDDeviceRequestOptions.h>

DEFINE_EMLITE_TYPE(HID, EventTarget);


jb_Any HID_onconnect(const HID *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void HID_set_onconnect(HID* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any HID_ondisconnect(const HID *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondisconnect")));
}


void HID_set_ondisconnect(HID* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondisconnect"), em_Val_from(value));
}


jb_Promise HID_getDevices(HID* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDevices"));
}


jb_Promise HID_requestDevice(HID* self , HIDDeviceRequestOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice", em_Val_from(options)));
}

