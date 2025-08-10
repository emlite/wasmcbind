#include <webbind/IsInputPendingOptions.h>

DEFINE_EMLITE_TYPE(IsInputPendingOptions, em_Val);


bool IsInputPendingOptions_includeContinuous(const IsInputPendingOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("includeContinuous")));
}


void IsInputPendingOptions_set_includeContinuous(IsInputPendingOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("includeContinuous"), em_Val_from(value));
}


IsInputPendingOptions IsInputPendingOptions_new() {
    em_Val obj = em_Val_object();
    return IsInputPendingOptions_from_val(&obj);
}

