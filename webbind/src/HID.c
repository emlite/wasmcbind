#include <webbind/HID.h>
#include <webbind/HIDDevice.h>


DEFINE_EMLITE_TYPE(HIDDeviceRequestOptions, em_Val);


jb_Sequence HIDDeviceRequestOptions_filters(const HIDDeviceRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void HIDDeviceRequestOptions_set_filters(HIDDeviceRequestOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Sequence HIDDeviceRequestOptions_exclusionFilters(const HIDDeviceRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void HIDDeviceRequestOptions_set_exclusionFilters(HIDDeviceRequestOptions* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}

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

