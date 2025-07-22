#include <webbind/GPUError.h>


DEFINE_EMLITE_TYPE(GPUError, em_Val);


jb_DOMString GPUError_message(const GPUError *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "message"));
}

