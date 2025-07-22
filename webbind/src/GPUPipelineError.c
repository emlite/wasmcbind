#include <webbind/GPUPipelineError.h>


DEFINE_EMLITE_TYPE(GPUPipelineError, DOMException);


GPUPipelineError GPUPipelineError_new() : DOMException(em_Val_global("GPUPipelineError").new_()) {
        return GPUPipelineError(em_Val_new(em_Val_global("GPUPipelineError", ));
      }


GPUPipelineError GPUPipelineError_new(const jb_DOMString* message) : DOMException(em_Val_global("GPUPipelineError").new_(em_Val_from(message))) {
        return GPUPipelineError(em_Val_new(em_Val_global("GPUPipelineError", em_Val_from(message)));
      }


GPUPipelineError GPUPipelineError_new(const jb_DOMString* message, const jb_Any* options) : DOMException(em_Val_global("GPUPipelineError").new_(em_Val_from(message), em_Val_from(options))) {
        return GPUPipelineError(em_Val_new(em_Val_global("GPUPipelineError", em_Val_from(message), em_Val_from(options)));
      }


GPUPipelineErrorReason GPUPipelineError_reason(const GPUPipelineError *self) {
    return em_Val_as(GPUPipelineErrorReason, em_Val_get(DOMException_as_val(self->inner), "reason"));
}

