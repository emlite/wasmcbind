#include <webbind/GPUCompilationInfo.h>

#include <webbind/GPUCompilationMessage.h>

DEFINE_EMLITE_TYPE(GPUCompilationInfo, em_Val);


jb_Array GPUCompilationInfo_messages(const GPUCompilationInfo *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("messages")));
}

