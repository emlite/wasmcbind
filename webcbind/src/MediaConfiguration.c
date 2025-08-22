#include <webcbind/MediaConfiguration.h>

DEFINE_EMLITE_TYPE(MediaConfiguration, em_Val);


VideoConfiguration MediaConfiguration_video(const MediaConfiguration *self) {
    return em_Val_as(VideoConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("video")));
}


void MediaConfiguration_set_video(MediaConfiguration* self, VideoConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("video"), em_Val_from(value));
}


AudioConfiguration MediaConfiguration_audio(const MediaConfiguration *self) {
    return em_Val_as(AudioConfiguration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("audio")));
}


void MediaConfiguration_set_audio(MediaConfiguration* self, AudioConfiguration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("audio"), em_Val_from(value));
}


MediaConfiguration MediaConfiguration_new() {
    em_Val obj = em_Val_object();
    return MediaConfiguration_from_val(&obj);
}

