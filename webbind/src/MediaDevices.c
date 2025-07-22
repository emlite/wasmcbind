#include <webbind/MediaDevices.h>
#include <webbind/MediaDeviceInfo.h>
#include <webbind/MediaStream.h>
#include <webbind/CaptureController.h>


DEFINE_EMLITE_TYPE(AudioOutputOptions, em_Val);


jb_DOMString AudioOutputOptions_deviceId(const AudioOutputOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceId")));
}


void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("deviceId"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CaptureHandleConfig, em_Val);


bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exposeOrigin")));
}


void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exposeOrigin"), em_Val_from(value));
}


jb_DOMString CaptureHandleConfig_handle(const CaptureHandleConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handle")));
}


void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handle"), em_Val_from(value));
}


jb_Sequence CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("permittedOrigins")));
}


void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("permittedOrigins"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);


bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio")));
}


void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio"), em_Val_from(value));
}


bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback")));
}


void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaStreamConstraints, em_Val);


jb_DOMString MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peerIdentity")));
}


void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peerIdentity"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);


jb_Any DisplayMediaStreamOptions_video(const DisplayMediaStreamOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("video")));
}


void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("video"), em_Val_from(value));
}


jb_Any DisplayMediaStreamOptions_audio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audio")));
}


void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audio"), em_Val_from(value));
}


CaptureController DisplayMediaStreamOptions_controller(const DisplayMediaStreamOptions *self) {
    return em_Val_as(CaptureController, em_Val_get(em_Val_as_val(self->inner), em_Val_from("controller")));
}


void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, CaptureController * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("controller"), em_Val_from(value));
}


SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SelfCapturePreferenceEnum, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selfBrowserSurface")));
}


void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, SelfCapturePreferenceEnum * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selfBrowserSurface"), em_Val_from(value));
}


SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SystemAudioPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), em_Val_from("systemAudio")));
}


void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, SystemAudioPreferenceEnum * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("systemAudio"), em_Val_from(value));
}


WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(WindowAudioPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), em_Val_from("windowAudio")));
}


void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, WindowAudioPreferenceEnum * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("windowAudio"), em_Val_from(value));
}


SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SurfaceSwitchingPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), em_Val_from("surfaceSwitching")));
}


void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, SurfaceSwitchingPreferenceEnum * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("surfaceSwitching"), em_Val_from(value));
}


MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces(const DisplayMediaStreamOptions *self) {
    return em_Val_as(MonitorTypeSurfacesEnum, em_Val_get(em_Val_as_val(self->inner), em_Val_from("monitorTypeSurfaces")));
}


void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, MonitorTypeSurfacesEnum * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("monitorTypeSurfaces"), em_Val_from(value));
}

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


jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , jb_Sequence * actions) {
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

