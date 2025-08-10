#include <webbind/NDEFScanOptions.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(NDEFScanOptions, em_Val);


AbortSignal NDEFScanOptions_signal(const NDEFScanOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFScanOptions_set_signal(NDEFScanOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


NDEFScanOptions NDEFScanOptions_new() {
    em_Val obj = em_Val_object();
    return NDEFScanOptions_from_val(&obj);
}

