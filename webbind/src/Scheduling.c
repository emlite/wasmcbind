#include <webbind/Scheduling.h>


DEFINE_EMLITE_TYPE(IsInputPendingOptions, em_Val);


bool IsInputPendingOptions_includeContinuous(const IsInputPendingOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "includeContinuous"));
}


void IsInputPendingOptions_set_includeContinuous(IsInputPendingOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "includeContinuous", value);
}

DEFINE_EMLITE_TYPE(Scheduling, em_Val);


bool Scheduling_isInputPending(Scheduling* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isInputPending"));
}


bool Scheduling_isInputPending(Scheduling* self , const IsInputPendingOptions* isInputPendingOptions) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isInputPending", em_Val_from(isInputPendingOptions)));
}

