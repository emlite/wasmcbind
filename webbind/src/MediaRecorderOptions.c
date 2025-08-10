#include <webbind/MediaRecorderOptions.h>

DEFINE_EMLITE_TYPE(MediaRecorderOptions, em_Val);


jb_String MediaRecorderOptions_mimeType(const MediaRecorderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mimeType")));
}


void MediaRecorderOptions_set_mimeType(MediaRecorderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mimeType"), em_Val_from(value));
}


unsigned long MediaRecorderOptions_audioBitsPerSecond(const MediaRecorderOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioBitsPerSecond")));
}


void MediaRecorderOptions_set_audioBitsPerSecond(MediaRecorderOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioBitsPerSecond"), em_Val_from(value));
}


unsigned long MediaRecorderOptions_videoBitsPerSecond(const MediaRecorderOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("videoBitsPerSecond")));
}


void MediaRecorderOptions_set_videoBitsPerSecond(MediaRecorderOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("videoBitsPerSecond"), em_Val_from(value));
}


unsigned long MediaRecorderOptions_bitsPerSecond(const MediaRecorderOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitsPerSecond")));
}


void MediaRecorderOptions_set_bitsPerSecond(MediaRecorderOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitsPerSecond"), em_Val_from(value));
}


BitrateMode MediaRecorderOptions_audioBitrateMode(const MediaRecorderOptions *self) {
    return em_Val_as(BitrateMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audioBitrateMode")));
}


void MediaRecorderOptions_set_audioBitrateMode(MediaRecorderOptions* self, BitrateMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audioBitrateMode"), em_Val_from(value));
}


jb_Any MediaRecorderOptions_videoKeyFrameIntervalDuration(const MediaRecorderOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("videoKeyFrameIntervalDuration")));
}


void MediaRecorderOptions_set_videoKeyFrameIntervalDuration(MediaRecorderOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("videoKeyFrameIntervalDuration"), em_Val_from(value));
}


unsigned long MediaRecorderOptions_videoKeyFrameIntervalCount(const MediaRecorderOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("videoKeyFrameIntervalCount")));
}


void MediaRecorderOptions_set_videoKeyFrameIntervalCount(MediaRecorderOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("videoKeyFrameIntervalCount"), em_Val_from(value));
}


MediaRecorderOptions MediaRecorderOptions_new() {
    em_Val obj = em_Val_object();
    return MediaRecorderOptions_from_val(&obj);
}

