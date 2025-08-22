#include <webcbind/GPUOutOfMemoryError.h>

DEFINE_EMLITE_TYPE(GPUOutOfMemoryError, GPUError);


GPUOutOfMemoryError GPUOutOfMemoryError_new(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("GPUOutOfMemoryError") , em_Val_from(message));
        return GPUOutOfMemoryError_from_val(&vv);
      }

