#include <webbind/MediaDevices.h>

#include <webbind/MediaDeviceInfo.h>
#include <webbind/AudioOutputOptions.h>
#include <webbind/CaptureHandleConfig.h>
#include <webbind/MediaTrackSupportedConstraints.h>
#include <webbind/MediaStream.h>
#include <webbind/MediaStreamConstraints.h>
#include <webbind/DisplayMediaStreamOptions.h>

DEFINE_EMLITE_TYPE(MediaDevices, EventTarget);


jb_Any MediaDevices_ondevicechange(const MediaDevices *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondevicechange")));
}


void MediaDevices_set_ondevicechange(MediaDevices* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondevicechange"), em_Val_from(value));
}


jb_Promise MediaDevices_enumerateDevices(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "enumerateDevices"));
}


jb_Promise MediaDevices_selectAudioOutput0(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "selectAudioOutput"));
}


jb_Promise MediaDevices_selectAudioOutput1(MediaDevices* self , AudioOutputOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "selectAudioOutput", em_Val_from(options)));
}


jb_Undefined MediaDevices_setCaptureHandleConfig0(MediaDevices* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setCaptureHandleConfig"));
}


jb_Undefined MediaDevices_setCaptureHandleConfig1(MediaDevices* self , CaptureHandleConfig * config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setCaptureHandleConfig", em_Val_from(config)));
}


jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , jb_Array * actions) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setSupportedCaptureActions", em_Val_from(actions)));
}


jb_Any MediaDevices_oncaptureaction(const MediaDevices *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncaptureaction")));
}


void MediaDevices_set_oncaptureaction(MediaDevices* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncaptureaction"), em_Val_from(value));
}


MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self ) {
    return em_Val_as(MediaTrackSupportedConstraints, em_Val_call(EventTarget_as_val(self->inner), "getSupportedConstraints"));
}


jb_Promise MediaDevices_getUserMedia0(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getUserMedia"));
}


jb_Promise MediaDevices_getUserMedia1(MediaDevices* self , MediaStreamConstraints * constraints) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getUserMedia", em_Val_from(constraints)));
}


jb_Promise MediaDevices_getViewportMedia0(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getViewportMedia"));
}


jb_Promise MediaDevices_getViewportMedia1(MediaDevices* self , DisplayMediaStreamOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getViewportMedia", em_Val_from(options)));
}


jb_Promise MediaDevices_getDisplayMedia0(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDisplayMedia"));
}


jb_Promise MediaDevices_getDisplayMedia1(MediaDevices* self , DisplayMediaStreamOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDisplayMedia", em_Val_from(options)));
}

