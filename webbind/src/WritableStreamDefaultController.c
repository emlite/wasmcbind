#include <webbind/WritableStreamDefaultController.h>

#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(WritableStreamDefaultController, em_Val);


AbortSignal WritableStreamDefaultController_signal(const WritableStreamDefaultController *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


jb_Undefined WritableStreamDefaultController_error0(WritableStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error"));
}


jb_Undefined WritableStreamDefaultController_error1(WritableStreamDefaultController* self , jb_Any * e) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(e)));
}

