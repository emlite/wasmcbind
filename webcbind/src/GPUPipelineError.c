#include <webcbind/GPUPipelineError.h>

#include <webcbind/GPUPipelineErrorInit.h>

DEFINE_EMLITE_TYPE(GPUPipelineError, DOMException);


GPUPipelineError GPUPipelineError_new0() {
        em_Val vv = em_Val_new(em_Val_global("GPUPipelineError") );
        return GPUPipelineError_from_val(&vv);
      }


GPUPipelineError GPUPipelineError_new1(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("GPUPipelineError") , em_Val_from(message));
        return GPUPipelineError_from_val(&vv);
      }


GPUPipelineError GPUPipelineError_new2(jb_String * message, GPUPipelineErrorInit * options) {
        em_Val vv = em_Val_new(em_Val_global("GPUPipelineError") , em_Val_from(message), em_Val_from(options));
        return GPUPipelineError_from_val(&vv);
      }


GPUPipelineErrorReason GPUPipelineError_reason(const GPUPipelineError *self) {
    return em_Val_as(GPUPipelineErrorReason, em_Val_get(DOMException_as_val(self->inner), em_Val_from("reason")));
}

