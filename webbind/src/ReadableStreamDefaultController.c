#include <webbind/ReadableStreamDefaultController.h>


DEFINE_EMLITE_TYPE(ReadableStreamDefaultController, em_Val);


double ReadableStreamDefaultController_desiredSize(const ReadableStreamDefaultController *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredSize")));
}


jb_Undefined ReadableStreamDefaultController_close(ReadableStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined ReadableStreamDefaultController_enqueue0(ReadableStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue"));
}


jb_Undefined ReadableStreamDefaultController_enqueue1(ReadableStreamDefaultController* self , jb_Any * chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue", em_Val_from(chunk)));
}


jb_Undefined ReadableStreamDefaultController_error0(ReadableStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error"));
}


jb_Undefined ReadableStreamDefaultController_error1(ReadableStreamDefaultController* self , jb_Any * e) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(e)));
}

