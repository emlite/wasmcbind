#include <webbind/MediaDevices.h>
#include <webbind/MediaDeviceInfo.h>
#include <webbind/MediaStream.h>
#include <webbind/CaptureController.h>


DEFINE_EMLITE_TYPE(AudioOutputOptions, em_Val);


jb_DOMString AudioOutputOptions_deviceId(const AudioOutputOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "deviceId"));
}


void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "deviceId", value);
}

DEFINE_EMLITE_TYPE(CaptureHandleConfig, em_Val);


bool CaptureHandleConfig_exposeOrigin(const CaptureHandleConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "exposeOrigin"));
}


void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "exposeOrigin", value);
}


jb_DOMString CaptureHandleConfig_handle(const CaptureHandleConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "handle"));
}


void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "handle", value);
}


jb_Sequence CaptureHandleConfig_permittedOrigins(const CaptureHandleConfig *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "permittedOrigins"));
}


void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "permittedOrigins", value);
}

DEFINE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);


bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "displaySurface"));
}


void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "displaySurface", value);
}


bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "logicalSurface"));
}


void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "logicalSurface", value);
}


bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "cursor"));
}


void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "cursor", value);
}


bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "restrictOwnAudio"));
}


void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "restrictOwnAudio", value);
}


bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "suppressLocalAudioPlayback"));
}


void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "suppressLocalAudioPlayback", value);
}

DEFINE_EMLITE_TYPE(MediaStreamConstraints, em_Val);


jb_DOMString MediaStreamConstraints_peerIdentity(const MediaStreamConstraints *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "peerIdentity"));
}


void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "peerIdentity", value);
}

DEFINE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);


jb_Any DisplayMediaStreamOptions_video(const DisplayMediaStreamOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "video"));
}


void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "video", value);
}


jb_Any DisplayMediaStreamOptions_audio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "audio"));
}


void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "audio", value);
}


CaptureController DisplayMediaStreamOptions_controller(const DisplayMediaStreamOptions *self) {
    return em_Val_as(CaptureController, em_Val_get(em_Val_as_val(self->inner), "controller"));
}


void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, const CaptureController* value) {
    em_Val_set(em_Val_as_val(self->inner), "controller", value);
}


SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SelfCapturePreferenceEnum, em_Val_get(em_Val_as_val(self->inner), "selfBrowserSurface"));
}


void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, const SelfCapturePreferenceEnum* value) {
    em_Val_set(em_Val_as_val(self->inner), "selfBrowserSurface", value);
}


SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SystemAudioPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), "systemAudio"));
}


void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, const SystemAudioPreferenceEnum* value) {
    em_Val_set(em_Val_as_val(self->inner), "systemAudio", value);
}


WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio(const DisplayMediaStreamOptions *self) {
    return em_Val_as(WindowAudioPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), "windowAudio"));
}


void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, const WindowAudioPreferenceEnum* value) {
    em_Val_set(em_Val_as_val(self->inner), "windowAudio", value);
}


SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching(const DisplayMediaStreamOptions *self) {
    return em_Val_as(SurfaceSwitchingPreferenceEnum, em_Val_get(em_Val_as_val(self->inner), "surfaceSwitching"));
}


void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, const SurfaceSwitchingPreferenceEnum* value) {
    em_Val_set(em_Val_as_val(self->inner), "surfaceSwitching", value);
}


MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces(const DisplayMediaStreamOptions *self) {
    return em_Val_as(MonitorTypeSurfacesEnum, em_Val_get(em_Val_as_val(self->inner), "monitorTypeSurfaces"));
}


void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, const MonitorTypeSurfacesEnum* value) {
    em_Val_set(em_Val_as_val(self->inner), "monitorTypeSurfaces", value);
}

DEFINE_EMLITE_TYPE(MediaDevices, EventTarget);


jb_Any MediaDevices_ondevicechange(const MediaDevices *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondevicechange"));
}


void MediaDevices_set_ondevicechange(MediaDevices* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondevicechange", value);
}


jb_Promise MediaDevices_enumerateDevices(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "enumerateDevices"));
}


jb_Promise MediaDevices_selectAudioOutput(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "selectAudioOutput"));
}


jb_Promise MediaDevices_selectAudioOutput(MediaDevices* self , const AudioOutputOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "selectAudioOutput", em_Val_from(options)));
}


jb_Undefined MediaDevices_setCaptureHandleConfig(MediaDevices* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setCaptureHandleConfig"));
}


jb_Undefined MediaDevices_setCaptureHandleConfig(MediaDevices* self , const CaptureHandleConfig* config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setCaptureHandleConfig", em_Val_from(config)));
}


jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , const jb_Sequence* actions) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setSupportedCaptureActions", em_Val_from(actions)));
}


jb_Any MediaDevices_oncaptureaction(const MediaDevices *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncaptureaction"));
}


void MediaDevices_set_oncaptureaction(MediaDevices* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncaptureaction", value);
}


MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self ) {
    return em_Val_as(MediaTrackSupportedConstraints, em_Val_call(EventTarget_as_val(self->inner), "getSupportedConstraints"));
}


jb_Promise MediaDevices_getUserMedia(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getUserMedia"));
}


jb_Promise MediaDevices_getUserMedia(MediaDevices* self , const MediaStreamConstraints* constraints) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getUserMedia", em_Val_from(constraints)));
}


jb_Promise MediaDevices_getViewportMedia(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getViewportMedia"));
}


jb_Promise MediaDevices_getViewportMedia(MediaDevices* self , const DisplayMediaStreamOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getViewportMedia", em_Val_from(options)));
}


jb_Promise MediaDevices_getDisplayMedia(MediaDevices* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDisplayMedia"));
}


jb_Promise MediaDevices_getDisplayMedia(MediaDevices* self , const DisplayMediaStreamOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDisplayMedia", em_Val_from(options)));
}

