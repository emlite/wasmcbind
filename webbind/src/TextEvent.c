#include <webbind/TextEvent.h>
#include <webbind/Window.h>


DEFINE_EMLITE_TYPE(TextEvent, UIEvent);


jb_DOMString TextEvent_data(const TextEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(UIEvent_as_val(self->inner), "data"));
}


jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type)));
}


jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const Window* view) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(view)));
}


jb_Undefined TextEvent_initTextEvent(TextEvent* self , const jb_DOMString* type, bool bubbles, bool cancelable, const Window* view, const jb_DOMString* data) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(view), em_Val_from(data)));
}

