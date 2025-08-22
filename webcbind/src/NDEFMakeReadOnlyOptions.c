#include <webcbind/NDEFMakeReadOnlyOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(NDEFMakeReadOnlyOptions, em_Val);


AbortSignal NDEFMakeReadOnlyOptions_signal(const NDEFMakeReadOnlyOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void NDEFMakeReadOnlyOptions_set_signal(NDEFMakeReadOnlyOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


NDEFMakeReadOnlyOptions NDEFMakeReadOnlyOptions_new() {
    em_Val obj = em_Val_object();
    return NDEFMakeReadOnlyOptions_from_val(&obj);
}

