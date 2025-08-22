#include <webcbind/RTCVideoSourceStats.h>

DEFINE_EMLITE_TYPE(RTCVideoSourceStats, RTCMediaSourceStats);


unsigned long RTCVideoSourceStats_width(const RTCVideoSourceStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("width")));
}


void RTCVideoSourceStats_set_width(RTCVideoSourceStats* self, unsigned long value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long RTCVideoSourceStats_height(const RTCVideoSourceStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("height")));
}


void RTCVideoSourceStats_set_height(RTCVideoSourceStats* self, unsigned long value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long RTCVideoSourceStats_frames(const RTCVideoSourceStats *self) {
    return em_Val_as(unsigned long, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("frames")));
}


void RTCVideoSourceStats_set_frames(RTCVideoSourceStats* self, unsigned long value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("frames"), em_Val_from(value));
}


double RTCVideoSourceStats_framesPerSecond(const RTCVideoSourceStats *self) {
    return em_Val_as(double, em_Val_get(RTCMediaSourceStats_as_val(self->inner), em_Val_from("framesPerSecond")));
}


void RTCVideoSourceStats_set_framesPerSecond(RTCVideoSourceStats* self, double value) {
    em_Val_set(RTCMediaSourceStats_as_val(self->inner), em_Val_from("framesPerSecond"), em_Val_from(value));
}


RTCVideoSourceStats RTCVideoSourceStats_new() {
    em_Val obj = em_Val_object();
    return RTCVideoSourceStats_from_val(&obj);
}

