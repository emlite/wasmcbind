#include <webcbind/GPUCompilationMessage.h>

DEFINE_EMLITE_TYPE(GPUCompilationMessage, em_Val);


jb_String GPUCompilationMessage_message(const GPUCompilationMessage *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}


GPUCompilationMessageType GPUCompilationMessage_type(const GPUCompilationMessage *self) {
    return em_Val_as(GPUCompilationMessageType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


long long GPUCompilationMessage_lineNum(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineNum")));
}


long long GPUCompilationMessage_linePos(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("linePos")));
}


long long GPUCompilationMessage_offset(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offset")));
}


long long GPUCompilationMessage_length(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}

