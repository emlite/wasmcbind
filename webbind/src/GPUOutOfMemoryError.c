#include <webbind/GPUOutOfMemoryError.h>


DEFINE_EMLITE_TYPE(GPUOutOfMemoryError, GPUError);


GPUOutOfMemoryError GPUOutOfMemoryError_new(const jb_DOMString* message) : GPUError(em_Val_global("GPUOutOfMemoryError").new_(em_Val_from(message))) {
        return GPUOutOfMemoryError(em_Val_new(em_Val_global("GPUOutOfMemoryError", em_Val_from(message)));
      }

