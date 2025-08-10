#include <webbind/HMACGetSecretOutput.h>

DEFINE_EMLITE_TYPE(HMACGetSecretOutput, em_Val);


jb_ArrayBuffer HMACGetSecretOutput_output1(const HMACGetSecretOutput *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output1")));
}


void HMACGetSecretOutput_set_output1(HMACGetSecretOutput* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output1"), em_Val_from(value));
}


jb_ArrayBuffer HMACGetSecretOutput_output2(const HMACGetSecretOutput *self) {
    return em_Val_as(jb_ArrayBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output2")));
}


void HMACGetSecretOutput_set_output2(HMACGetSecretOutput* self, jb_ArrayBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output2"), em_Val_from(value));
}


HMACGetSecretOutput HMACGetSecretOutput_new() {
    em_Val obj = em_Val_object();
    return HMACGetSecretOutput_from_val(&obj);
}

