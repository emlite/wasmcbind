#include <webbind/GPUUncapturedErrorEvent.h>
#include <webbind/GPUError.h>


DEFINE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);


GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(const jb_DOMString* type, const jb_Any* gpuUncapturedErrorEventInitDict) : Event(em_Val_global("GPUUncapturedErrorEvent").new_(em_Val_from(type), em_Val_from(gpuUncapturedErrorEventInitDict))) {
        return GPUUncapturedErrorEvent(em_Val_new(em_Val_global("GPUUncapturedErrorEvent", em_Val_from(type), em_Val_from(gpuUncapturedErrorEventInitDict)));
      }


GPUError GPUUncapturedErrorEvent_error(const GPUUncapturedErrorEvent *self) {
    return em_Val_as(GPUError, em_Val_get(Event_as_val(self->inner), "error"));
}

