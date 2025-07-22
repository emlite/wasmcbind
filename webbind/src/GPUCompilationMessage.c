#include <webbind/GPUCompilationMessage.h>


DEFINE_EMLITE_TYPE(GPUCompilationMessage, em_Val);


jb_DOMString GPUCompilationMessage_message(const GPUCompilationMessage *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "message"));
}


GPUCompilationMessageType GPUCompilationMessage_type(const GPUCompilationMessage *self) {
    return em_Val_as(GPUCompilationMessageType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


long long GPUCompilationMessage_lineNum(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "lineNum"));
}


long long GPUCompilationMessage_linePos(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "linePos"));
}


long long GPUCompilationMessage_offset(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "offset"));
}


long long GPUCompilationMessage_length(const GPUCompilationMessage *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "length"));
}

