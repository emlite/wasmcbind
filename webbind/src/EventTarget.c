#include <webbind/EventTarget.h>
#include <webbind/Event.h>
#include <webbind/Observable.h>


DEFINE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);


bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("capture")));
}


void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("capture"), em_Val_from(value));
}


bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passive")));
}


void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("passive"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(EventTarget, em_Val);


EventTarget EventTarget_new() {
        em_Val vv = em_Val_new(em_Val_global("EventTarget") );
        return EventTarget_from_val(&vv);
      }


jb_Undefined EventTarget_addEventListener0(EventTarget* self , jb_String * type, jb_Function * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addEventListener", em_Val_from(type), em_Val_from(callback)));
}


jb_Undefined EventTarget_addEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addEventListener", em_Val_from(type), em_Val_from(callback), em_Val_from(options)));
}


jb_Undefined EventTarget_removeEventListener0(EventTarget* self , jb_String * type, jb_Function * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeEventListener", em_Val_from(type), em_Val_from(callback)));
}


jb_Undefined EventTarget_removeEventListener1(EventTarget* self , jb_String * type, jb_Function * callback, jb_Any * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "removeEventListener", em_Val_from(type), em_Val_from(callback), em_Val_from(options)));
}


bool EventTarget_dispatchEvent(EventTarget* self , Event * event) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "dispatchEvent", em_Val_from(event)));
}


Observable EventTarget_when0(EventTarget* self , jb_String * type) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "when", em_Val_from(type)));
}


Observable EventTarget_when1(EventTarget* self , jb_String * type, ObservableEventListenerOptions * options) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "when", em_Val_from(type), em_Val_from(options)));
}

