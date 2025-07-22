#include <webbind/ManagedMediaSource.h>


DEFINE_EMLITE_TYPE(ManagedMediaSource, MediaSource);


ManagedMediaSource ManagedMediaSource_new() {
        em_Val vv = em_Val_new(em_Val_global("ManagedMediaSource") );
        return ManagedMediaSource_from_val(&vv);
      }


bool ManagedMediaSource_streaming(const ManagedMediaSource *self) {
    return em_Val_as(bool, em_Val_get(MediaSource_as_val(self->inner), em_Val_from("streaming")));
}


jb_Any ManagedMediaSource_onstartstreaming(const ManagedMediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(MediaSource_as_val(self->inner), em_Val_from("onstartstreaming")));
}


void ManagedMediaSource_set_onstartstreaming(ManagedMediaSource* self, jb_Any * value) {
    em_Val_set(MediaSource_as_val(self->inner), em_Val_from("onstartstreaming"), em_Val_from(value));
}


jb_Any ManagedMediaSource_onendstreaming(const ManagedMediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(MediaSource_as_val(self->inner), em_Val_from("onendstreaming")));
}


void ManagedMediaSource_set_onendstreaming(ManagedMediaSource* self, jb_Any * value) {
    em_Val_set(MediaSource_as_val(self->inner), em_Val_from("onendstreaming"), em_Val_from(value));
}

