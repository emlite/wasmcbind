#include <webcbind/TextEvent.h>

#include <webcbind/Window.h>

DEFINE_EMLITE_TYPE(TextEvent, UIEvent);


jb_String TextEvent_data(const TextEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("data")));
}


jb_Undefined TextEvent_initTextEvent0(TextEvent* self , jb_String * type) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type)));
}


jb_Undefined TextEvent_initTextEvent1(TextEvent* self , jb_String * type, bool bubbles) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles)));
}


jb_Undefined TextEvent_initTextEvent2(TextEvent* self , jb_String * type, bool bubbles, bool cancelable) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable)));
}


jb_Undefined TextEvent_initTextEvent3(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(view)));
}


jb_Undefined TextEvent_initTextEvent4(TextEvent* self , jb_String * type, bool bubbles, bool cancelable, Window * view, jb_String * data) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initTextEvent", em_Val_from(type), em_Val_from(bubbles), em_Val_from(cancelable), em_Val_from(view), em_Val_from(data)));
}

