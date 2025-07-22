#include <webbind/GPUDeviceLostInfo.h>


DEFINE_EMLITE_TYPE(GPUDeviceLostInfo, em_Val);


GPUDeviceLostReason GPUDeviceLostInfo_reason(const GPUDeviceLostInfo *self) {
    return em_Val_as(GPUDeviceLostReason, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reason")));
}


jb_DOMString GPUDeviceLostInfo_message(const GPUDeviceLostInfo *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("message")));
}

