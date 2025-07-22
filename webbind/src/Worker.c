#include <webbind/Worker.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(Worker, EventTarget);


Worker Worker_new(const jb_Any* scriptURL) : EventTarget(em_Val_global("Worker").new_(em_Val_from(scriptURL))) {
        return Worker(em_Val_new(em_Val_global("Worker", em_Val_from(scriptURL)));
      }


Worker Worker_new(const jb_Any* scriptURL, const jb_Any* options) : EventTarget(em_Val_global("Worker").new_(em_Val_from(scriptURL), em_Val_from(options))) {
        return Worker(em_Val_new(em_Val_global("Worker", em_Val_from(scriptURL), em_Val_from(options)));
      }


jb_Undefined Worker_terminate(Worker* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "terminate"));
}


jb_Undefined Worker_postMessage(Worker* self , const jb_Any* message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined Worker_postMessage(Worker* self , const jb_Any* message, const StructuredSerializeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any Worker_onerror(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void Worker_set_onerror(Worker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any Worker_onmessage(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessage"));
}


void Worker_set_onmessage(Worker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessage", value);
}


jb_Any Worker_onmessageerror(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmessageerror"));
}


void Worker_set_onmessageerror(Worker* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmessageerror", value);
}

