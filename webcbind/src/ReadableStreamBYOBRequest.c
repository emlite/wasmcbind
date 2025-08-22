#include <webcbind/ReadableStreamBYOBRequest.h>

DEFINE_EMLITE_TYPE(ReadableStreamBYOBRequest, em_Val);


jb_Any ReadableStreamBYOBRequest_view(const ReadableStreamBYOBRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("view")));
}


jb_Undefined ReadableStreamBYOBRequest_respond(ReadableStreamBYOBRequest* self , long long bytesWritten) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "respond", em_Val_from(bytesWritten)));
}


jb_Undefined ReadableStreamBYOBRequest_respondWithNewView(ReadableStreamBYOBRequest* self , jb_Any * view) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "respondWithNewView", em_Val_from(view)));
}

