#include <webbind/Worker.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(Worker, EventTarget);


Worker Worker_new0(jb_Any * scriptURL) {
        em_Val vv = em_Val_new(em_Val_global("Worker") , em_Val_from(scriptURL));
        return Worker_from_val(&vv);
      }


Worker Worker_new1(jb_Any * scriptURL, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("Worker") , em_Val_from(scriptURL), em_Val_from(options));
        return Worker_from_val(&vv);
      }


jb_Undefined Worker_terminate(Worker* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "terminate"));
}


jb_Undefined Worker_postMessage0(Worker* self , jb_Any * message) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message)));
}


jb_Undefined Worker_postMessage1(Worker* self , jb_Any * message, StructuredSerializeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "postMessage", em_Val_from(message), em_Val_from(options)));
}


jb_Any Worker_onerror(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void Worker_set_onerror(Worker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


jb_Any Worker_onmessage(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessage")));
}


void Worker_set_onmessage(Worker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessage"), em_Val_from(value));
}


jb_Any Worker_onmessageerror(const Worker *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmessageerror")));
}


void Worker_set_onmessageerror(Worker* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmessageerror"), em_Val_from(value));
}

