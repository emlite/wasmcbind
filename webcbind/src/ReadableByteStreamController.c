#include <webcbind/ReadableByteStreamController.h>

#include <webcbind/ReadableStreamBYOBRequest.h>

DEFINE_EMLITE_TYPE(ReadableByteStreamController, em_Val);


ReadableStreamBYOBRequest ReadableByteStreamController_byobRequest(const ReadableByteStreamController *self) {
    return em_Val_as(ReadableStreamBYOBRequest, em_Val_get(em_Val_as_val(self->inner), em_Val_from("byobRequest")));
}


double ReadableByteStreamController_desiredSize(const ReadableByteStreamController *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredSize")));
}


jb_Undefined ReadableByteStreamController_close(ReadableByteStreamController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}


jb_Undefined ReadableByteStreamController_enqueue(ReadableByteStreamController* self , jb_Any * chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enqueue", em_Val_from(chunk)));
}


jb_Undefined ReadableByteStreamController_error0(ReadableByteStreamController* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error"));
}


jb_Undefined ReadableByteStreamController_error1(ReadableByteStreamController* self , jb_Any * e) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "error", em_Val_from(e)));
}

