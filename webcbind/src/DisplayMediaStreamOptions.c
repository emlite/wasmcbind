#include <webcbind/DisplayMediaStreamOptions.h>

#include <webcbind/CaptureController.h>

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


DisplayMediaStreamOptions DisplayMediaStreamOptions_new() {
    em_Val obj = em_Val_object();
    return DisplayMediaStreamOptions_from_val(&obj);
}

