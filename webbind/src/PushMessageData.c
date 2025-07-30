#include <webbind/PushMessageData.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(PushMessageData, em_Val);


jb_ArrayBuffer PushMessageData_arrayBuffer(PushMessageData* self ) {
    return em_Val_as(jb_ArrayBuffer, em_Val_call(em_Val_as_val(self->inner), "arrayBuffer"));
}


Blob PushMessageData_blob(PushMessageData* self ) {
    return em_Val_as(Blob, em_Val_call(em_Val_as_val(self->inner), "blob"));
}


jb_Uint8Array PushMessageData_bytes(PushMessageData* self ) {
    return em_Val_as(jb_Uint8Array, em_Val_call(em_Val_as_val(self->inner), "bytes"));
}


jb_Any PushMessageData_json(PushMessageData* self ) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "json"));
}


jb_String PushMessageData_text(PushMessageData* self ) {
    return em_Val_as(jb_String, em_Val_call(em_Val_as_val(self->inner), "text"));
}

