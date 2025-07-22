#include <webbind/ReadableByteStreamController.h>
#include <webbind/ReadableStreamBYOBRequest.h>


DEFINE_EMLITE_TYPE(ReadableByteStreamController, em_Val);


ReadableStreamBYOBRequest ReadableByteStreamController_byobRequest(const ReadableByteStreamController *self) {
    return em_Val_as(ReadableStreamBYOBRequest, em_Val_get(em_Val_as_val(self->inner), "byobRequest"));
}


double ReadableByteStreamController_desiredSize(const ReadableByteStreamController *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "desiredSize"));
}


jb_Undefined ReadableByteStreamController_close(ReadableByteStreamController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined ReadableByteStreamController_enqueue(ReadableByteStreamController* self , const jb_Any* chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue", em_Val_from(chunk)));
}


jb_Undefined ReadableByteStreamController_error(ReadableByteStreamController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error"));
}


jb_Undefined ReadableByteStreamController_error(ReadableByteStreamController* self , const jb_Any* e) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(e)));
}

