#include <webbind/USBControlTransferParameters.h>

DEFINE_EMLITE_TYPE(USBControlTransferParameters, em_Val);


USBRequestType USBControlTransferParameters_requestType(const USBControlTransferParameters *self) {
    return em_Val_as(USBRequestType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestType")));
}


void USBControlTransferParameters_set_requestType(USBControlTransferParameters* self, USBRequestType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requestType"), em_Val_from(value));
}


USBRecipient USBControlTransferParameters_recipient(const USBControlTransferParameters *self) {
    return em_Val_as(USBRecipient, em_Val_get(em_Val_as_val(self->inner), em_Val_from("recipient")));
}


void USBControlTransferParameters_set_recipient(USBControlTransferParameters* self, USBRecipient * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("recipient"), em_Val_from(value));
}


unsigned char USBControlTransferParameters_request(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


void USBControlTransferParameters_set_request(USBControlTransferParameters* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("request"), em_Val_from(value));
}


unsigned short USBControlTransferParameters_value(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("value")));
}


void USBControlTransferParameters_set_value(USBControlTransferParameters* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


unsigned short USBControlTransferParameters_index(const USBControlTransferParameters *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("index")));
}


void USBControlTransferParameters_set_index(USBControlTransferParameters* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("index"), em_Val_from(value));
}


USBControlTransferParameters USBControlTransferParameters_new() {
    em_Val obj = em_Val_object();
    return USBControlTransferParameters_from_val(&obj);
}

