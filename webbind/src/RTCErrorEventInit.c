#include <webbind/RTCErrorEventInit.h>

#include <webbind/RTCError.h>

DEFINE_EMLITE_TYPE(RTCErrorEventInit, EventInit);


RTCError RTCErrorEventInit_error(const RTCErrorEventInit *self) {
    return em_Val_as(RTCError, em_Val_get(EventInit_as_val(self->inner), em_Val_from("error")));
}


void RTCErrorEventInit_set_error(RTCErrorEventInit* self, RTCError * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


RTCErrorEventInit RTCErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return RTCErrorEventInit_from_val(&obj);
}

