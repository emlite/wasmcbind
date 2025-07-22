#include <webbind/EventTarget.h>
#include <webbind/Event.h>
#include <webbind/Observable.h>


DEFINE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);


bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "capture"));
}


void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "capture", value);
}


bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "passive"));
}


void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "passive", value);
}

DEFINE_EMLITE_TYPE(EventTarget, em_Val);


EventTarget EventTarget_new() : em_Val(em_Val_global("EventTarget").new_()) {
        return EventTarget(em_Val_new(em_Val_global("EventTarget", ));
      }


jb_Undefined EventTarget_addEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addEventListener", em_Val_from(type), em_Val_from(callback)));
}


jb_Undefined EventTarget_addEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback, const jb_Any* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addEventListener", em_Val_from(type), em_Val_from(callback), em_Val_from(options)));
}


jb_Undefined EventTarget_removeEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeEventListener", em_Val_from(type), em_Val_from(callback)));
}


jb_Undefined EventTarget_removeEventListener(EventTarget* self , const jb_DOMString* type, const jb_Function* callback, const jb_Any* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeEventListener", em_Val_from(type), em_Val_from(callback), em_Val_from(options)));
}


bool EventTarget_dispatchEvent(EventTarget* self , const Event* event) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "dispatchEvent", em_Val_from(event)));
}


Observable EventTarget_when(EventTarget* self , const jb_DOMString* type) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "when", em_Val_from(type)));
}


Observable EventTarget_when(EventTarget* self , const jb_DOMString* type, const ObservableEventListenerOptions* options) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "when", em_Val_from(type), em_Val_from(options)));
}

