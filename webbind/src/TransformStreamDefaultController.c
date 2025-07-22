#include <webbind/TransformStreamDefaultController.h>


DEFINE_EMLITE_TYPE(TransformStreamDefaultController, em_Val);


double TransformStreamDefaultController_desiredSize(const TransformStreamDefaultController *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredSize")));
}


jb_Undefined TransformStreamDefaultController_enqueue0(TransformStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue"));
}


jb_Undefined TransformStreamDefaultController_enqueue1(TransformStreamDefaultController* self , jb_Any * chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue", em_Val_from(chunk)));
}


jb_Undefined TransformStreamDefaultController_error0(TransformStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error"));
}


jb_Undefined TransformStreamDefaultController_error1(TransformStreamDefaultController* self , jb_Any * reason) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(reason)));
}


jb_Undefined TransformStreamDefaultController_terminate(TransformStreamDefaultController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "terminate"));
}

