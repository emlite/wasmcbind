#include <webbind/GPUInternalError.h>


DEFINE_EMLITE_TYPE(GPUInternalError, GPUError);


GPUInternalError GPUInternalError_new(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("GPUInternalError") , em_Val_from(message));
        return GPUInternalError_from_val(&vv);
      }

