#include <webcbind/SerialOptions.h>

DEFINE_EMLITE_TYPE(SerialOptions, em_Val);


unsigned long SerialOptions_baudRate(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baudRate")));
}


void SerialOptions_set_baudRate(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("baudRate"), em_Val_from(value));
}


unsigned char SerialOptions_dataBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataBits")));
}


void SerialOptions_set_dataBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataBits"), em_Val_from(value));
}


unsigned char SerialOptions_stopBits(const SerialOptions *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stopBits")));
}


void SerialOptions_set_stopBits(SerialOptions* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stopBits"), em_Val_from(value));
}


ParityType SerialOptions_parity(const SerialOptions *self) {
    return em_Val_as(ParityType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("parity")));
}


void SerialOptions_set_parity(SerialOptions* self, ParityType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("parity"), em_Val_from(value));
}


unsigned long SerialOptions_bufferSize(const SerialOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bufferSize")));
}


void SerialOptions_set_bufferSize(SerialOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bufferSize"), em_Val_from(value));
}


FlowControlType SerialOptions_flowControl(const SerialOptions *self) {
    return em_Val_as(FlowControlType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flowControl")));
}


void SerialOptions_set_flowControl(SerialOptions* self, FlowControlType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flowControl"), em_Val_from(value));
}


SerialOptions SerialOptions_new() {
    em_Val obj = em_Val_object();
    return SerialOptions_from_val(&obj);
}

