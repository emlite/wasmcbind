#include <webbind/Scheduling.h>

#include <webbind/IsInputPendingOptions.h>

DEFINE_EMLITE_TYPE(Scheduling, em_Val);


bool Scheduling_isInputPending0(Scheduling* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isInputPending"));
}


bool Scheduling_isInputPending1(Scheduling* self , IsInputPendingOptions * isInputPendingOptions) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isInputPending", em_Val_from(isInputPendingOptions)));
}

