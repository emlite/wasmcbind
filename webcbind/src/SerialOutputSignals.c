#include <webcbind/SerialOutputSignals.h>

DEFINE_EMLITE_TYPE(SerialOutputSignals, em_Val);


bool SerialOutputSignals_dataTerminalReady(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataTerminalReady")));
}


void SerialOutputSignals_set_dataTerminalReady(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataTerminalReady"), em_Val_from(value));
}


bool SerialOutputSignals_requestToSend(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestToSend")));
}


void SerialOutputSignals_set_requestToSend(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestToSend"), em_Val_from(value));
}


bool SerialOutputSignals_break_(const SerialOutputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("break")));
}


void SerialOutputSignals_set_break_(SerialOutputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("break"), em_Val_from(value));
}


SerialOutputSignals SerialOutputSignals_new() {
    em_Val obj = em_Val_object();
    return SerialOutputSignals_from_val(&obj);
}

