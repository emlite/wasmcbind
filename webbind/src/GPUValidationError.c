#include <webbind/GPUValidationError.h>


DEFINE_EMLITE_TYPE(GPUValidationError, GPUError);


GPUValidationError GPUValidationError_new(const jb_DOMString* message) : GPUError(em_Val_global("GPUValidationError").new_(em_Val_from(message))) {
        return GPUValidationError(em_Val_new(em_Val_global("GPUValidationError", em_Val_from(message)));
      }

