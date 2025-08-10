#include <webbind/RTCStats.h>

DEFINE_EMLITE_TYPE(RTCStats, em_Val);


jb_Any RTCStats_timestamp(const RTCStats *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void RTCStats_set_timestamp(RTCStats* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


RTCStatsType RTCStats_type(const RTCStats *self) {
    return em_Val_as(RTCStatsType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RTCStats_set_type(RTCStats* self, RTCStatsType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String RTCStats_id(const RTCStats *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RTCStats_set_id(RTCStats* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


RTCStats RTCStats_new() {
    em_Val obj = em_Val_object();
    return RTCStats_from_val(&obj);
}

