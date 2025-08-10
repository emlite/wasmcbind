#include <webbind/TrackEventInit.h>

DEFINE_EMLITE_TYPE(TrackEventInit, EventInit);


jb_Any TrackEventInit_track(const TrackEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("track")));
}


void TrackEventInit_set_track(TrackEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("track"), em_Val_from(value));
}


TrackEventInit TrackEventInit_new() {
    em_Val obj = em_Val_object();
    return TrackEventInit_from_val(&obj);
}

