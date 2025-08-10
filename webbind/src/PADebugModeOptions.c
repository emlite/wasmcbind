#include <webbind/PADebugModeOptions.h>

DEFINE_EMLITE_TYPE(PADebugModeOptions, em_Val);


long long PADebugModeOptions_debugKey(const PADebugModeOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("debugKey")));
}


void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("debugKey"), em_Val_from(value));
}


PADebugModeOptions PADebugModeOptions_new() {
    em_Val obj = em_Val_object();
    return PADebugModeOptions_from_val(&obj);
}

