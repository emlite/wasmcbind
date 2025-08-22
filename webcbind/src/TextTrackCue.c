#include <webcbind/TextTrackCue.h>

#include <webcbind/TextTrack.h>

DEFINE_EMLITE_TYPE(TextTrackCue, EventTarget);


TextTrack TextTrackCue_track(const TextTrackCue *self) {
    return em_Val_as(TextTrack, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("track")));
}


jb_String TextTrackCue_id(const TextTrackCue *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


void TextTrackCue_set_id(TextTrackCue* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


double TextTrackCue_startTime(const TextTrackCue *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("startTime")));
}


void TextTrackCue_set_startTime(TextTrackCue* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("startTime"), em_Val_from(value));
}


double TextTrackCue_endTime(const TextTrackCue *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("endTime")));
}


void TextTrackCue_set_endTime(TextTrackCue* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("endTime"), em_Val_from(value));
}


bool TextTrackCue_pauseOnExit(const TextTrackCue *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pauseOnExit")));
}


void TextTrackCue_set_pauseOnExit(TextTrackCue* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("pauseOnExit"), em_Val_from(value));
}


jb_Any TextTrackCue_onenter(const TextTrackCue *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onenter")));
}


void TextTrackCue_set_onenter(TextTrackCue* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onenter"), em_Val_from(value));
}


jb_Any TextTrackCue_onexit(const TextTrackCue *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onexit")));
}


void TextTrackCue_set_onexit(TextTrackCue* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onexit"), em_Val_from(value));
}

