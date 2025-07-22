#include <webbind/GPUValidationError.h>


DEFINE_EMLITE_TYPE(GPUValidationError, GPUError);


GPUValidationError GPUValidationError_new(jb_DOMString * message) {
        em_Val vv = em_Val_new(em_Val_global("GPUValidationError") , em_Val_from(message));
        return GPUValidationError_from_val(&vv);
      }

