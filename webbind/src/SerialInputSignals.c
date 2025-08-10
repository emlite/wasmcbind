#include <webbind/SerialInputSignals.h>

DEFINE_EMLITE_TYPE(SerialInputSignals, em_Val);


bool SerialInputSignals_dataCarrierDetect(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataCarrierDetect")));
}


void SerialInputSignals_set_dataCarrierDetect(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataCarrierDetect"), em_Val_from(value));
}


bool SerialInputSignals_clearToSend(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clearToSend")));
}


void SerialInputSignals_set_clearToSend(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clearToSend"), em_Val_from(value));
}


bool SerialInputSignals_ringIndicator(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ringIndicator")));
}


void SerialInputSignals_set_ringIndicator(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ringIndicator"), em_Val_from(value));
}


bool SerialInputSignals_dataSetReady(const SerialInputSignals *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataSetReady")));
}


void SerialInputSignals_set_dataSetReady(SerialInputSignals* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataSetReady"), em_Val_from(value));
}


SerialInputSignals SerialInputSignals_new() {
    em_Val obj = em_Val_object();
    return SerialInputSignals_from_val(&obj);
}

