#include <webcbind/RTCErrorInit.h>

DEFINE_EMLITE_TYPE(RTCErrorInit, em_Val);


RTCErrorDetailType RTCErrorInit_errorDetail(const RTCErrorInit *self) {
    return em_Val_as(RTCErrorDetailType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("errorDetail")));
}


void RTCErrorInit_set_errorDetail(RTCErrorInit* self, RTCErrorDetailType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("errorDetail"), em_Val_from(value));
}


long RTCErrorInit_sdpLineNumber(const RTCErrorInit *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdpLineNumber")));
}


void RTCErrorInit_set_sdpLineNumber(RTCErrorInit* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdpLineNumber"), em_Val_from(value));
}


long RTCErrorInit_sctpCauseCode(const RTCErrorInit *self) {
    return em_Val_as(long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sctpCauseCode")));
}


void RTCErrorInit_set_sctpCauseCode(RTCErrorInit* self, long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sctpCauseCode"), em_Val_from(value));
}


unsigned long RTCErrorInit_receivedAlert(const RTCErrorInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("receivedAlert")));
}


void RTCErrorInit_set_receivedAlert(RTCErrorInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("receivedAlert"), em_Val_from(value));
}


unsigned long RTCErrorInit_sentAlert(const RTCErrorInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sentAlert")));
}


void RTCErrorInit_set_sentAlert(RTCErrorInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sentAlert"), em_Val_from(value));
}


RTCErrorInit RTCErrorInit_new() {
    em_Val obj = em_Val_object();
    return RTCErrorInit_from_val(&obj);
}

