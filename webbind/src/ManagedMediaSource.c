#include <webbind/ManagedMediaSource.h>


DEFINE_EMLITE_TYPE(ManagedMediaSource, MediaSource);


ManagedMediaSource ManagedMediaSource_new() : MediaSource(em_Val_global("ManagedMediaSource").new_()) {
        return ManagedMediaSource(em_Val_new(em_Val_global("ManagedMediaSource", ));
      }


bool ManagedMediaSource_streaming(const ManagedMediaSource *self) {
    return em_Val_as(bool, em_Val_get(MediaSource_as_val(self->inner), "streaming"));
}


jb_Any ManagedMediaSource_onstartstreaming(const ManagedMediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(MediaSource_as_val(self->inner), "onstartstreaming"));
}


void ManagedMediaSource_set_onstartstreaming(ManagedMediaSource* self, const jb_Any* value) {
    em_Val_set(MediaSource_as_val(self->inner), "onstartstreaming", value);
}


jb_Any ManagedMediaSource_onendstreaming(const ManagedMediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(MediaSource_as_val(self->inner), "onendstreaming"));
}


void ManagedMediaSource_set_onendstreaming(ManagedMediaSource* self, const jb_Any* value) {
    em_Val_set(MediaSource_as_val(self->inner), "onendstreaming", value);
}

