#include <webbind/UIEvent.h>
#include <webbind/Window.h>
#include <webbind/InputDeviceCapabilities.h>


DEFINE_EMLITE_TYPE(UIEvent, Event);


UIEvent UIEvent_new(const jb_DOMString* type) : Event(em_Val_global("UIEvent").new_(em_Val_from(type))) {
        return UIEvent(em_Val_new(em_Val_global("UIEvent", em_Val_from(type)));
      }


UIEvent UIEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("UIEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return UIEvent(em_Val_new(em_Val_global("UIEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


Window UIEvent_view(const UIEvent *self) {
    return em_Val_as(Window, em_Val_get(Event_as_val(self->inner), "view"));
}


long UIEvent_detail(const UIEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), "detail"));
}


InputDeviceCapabilities UIEvent_sourceCapabilities(const UIEvent *self) {
    return em_Val_as(InputDeviceCapabilities, em_Val_get(Event_as_val(self->inner), "sourceCapabilities"));
}


jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg)));
}


jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined UIEvent_initUIEvent(UIEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const Window* viewArg, long detailArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg)));
}


unsigned long UIEvent_which(const UIEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), "which"));
}

