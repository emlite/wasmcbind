#include <webcbind/RTCMediaSourceStats.h>

DEFINE_EMLITE_TYPE(RTCMediaSourceStats, RTCStats);


jb_String RTCMediaSourceStats_trackIdentifier(const RTCMediaSourceStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("trackIdentifier")));
}


void RTCMediaSourceStats_set_trackIdentifier(RTCMediaSourceStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("trackIdentifier"), em_Val_from(value));
}


jb_String RTCMediaSourceStats_kind(const RTCMediaSourceStats *self) {
    return em_Val_as(jb_String, em_Val_get(RTCStats_as_val(self->inner), em_Val_from("kind")));
}


void RTCMediaSourceStats_set_kind(RTCMediaSourceStats* self, jb_String * value) {
    em_Val_set(RTCStats_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


RTCMediaSourceStats RTCMediaSourceStats_new() {
    em_Val obj = em_Val_object();
    return RTCMediaSourceStats_from_val(&obj);
}

