#include <webcbind/NDEFWriteOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(NDEFWriteOptions, em_Val);


bool NDEFWriteOptions_overwrite(const NDEFWriteOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("overwrite")));
}


void NDEFWriteOptions_set_overwrite(NDEFWriteOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("overwrite"), em_Val_from(value));
}


AbortSignal NDEFWriteOptions_signal(const NDEFWriteOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFWriteOptions_set_signal(NDEFWriteOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


NDEFWriteOptions NDEFWriteOptions_new() {
    em_Val obj = em_Val_object();
    return NDEFWriteOptions_from_val(&obj);
}

