#include <webbind/GPUUncapturedErrorEvent.h>
#include <webbind/GPUError.h>


DEFINE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);


GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(jb_DOMString * type, jb_Any * gpuUncapturedErrorEventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("GPUUncapturedErrorEvent") , em_Val_from(type), em_Val_from(gpuUncapturedErrorEventInitDict));
        return GPUUncapturedErrorEvent_from_val(&vv);
      }


GPUError GPUUncapturedErrorEvent_error(const GPUUncapturedErrorEvent *self) {
    return em_Val_as(GPUError, em_Val_get(Event_as_val(self->inner), em_Val_from("error")));
}

