#include <webbind/TextTrackCue.h>
#include <webbind/TextTrack.h>


DEFINE_EMLITE_TYPE(TextTrackCue, EventTarget);


TextTrack TextTrackCue_track(const TextTrackCue *self) {
    return em_Val_as(TextTrack, em_Val_get(EventTarget_as_val(self->inner), "track"));
}


jb_DOMString TextTrackCue_id(const TextTrackCue *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


void TextTrackCue_set_id(TextTrackCue* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "id", value);
}


double TextTrackCue_startTime(const TextTrackCue *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "startTime"));
}


void TextTrackCue_set_startTime(TextTrackCue* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "startTime", value);
}


double TextTrackCue_endTime(const TextTrackCue *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "endTime"));
}


void TextTrackCue_set_endTime(TextTrackCue* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "endTime", value);
}


bool TextTrackCue_pauseOnExit(const TextTrackCue *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "pauseOnExit"));
}


void TextTrackCue_set_pauseOnExit(TextTrackCue* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "pauseOnExit", value);
}


jb_Any TextTrackCue_onenter(const TextTrackCue *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onenter"));
}


void TextTrackCue_set_onenter(TextTrackCue* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onenter", value);
}


jb_Any TextTrackCue_onexit(const TextTrackCue *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onexit"));
}


void TextTrackCue_set_onexit(TextTrackCue* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onexit", value);
}

