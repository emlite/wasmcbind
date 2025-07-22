#include <webbind/GPUInternalError.h>


DEFINE_EMLITE_TYPE(GPUInternalError, GPUError);


GPUInternalError GPUInternalError_new(const jb_DOMString* message) : GPUError(em_Val_global("GPUInternalError").new_(em_Val_from(message))) {
        return GPUInternalError(em_Val_new(em_Val_global("GPUInternalError", em_Val_from(message)));
      }

