#include <webcbind/UIEvent.h>

#include <webcbind/UIEventInit.h>
#include <webcbind/Window.h>
#include <webcbind/InputDeviceCapabilities.h>

DEFINE_EMLITE_TYPE(UIEvent, Event);


UIEvent UIEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("UIEvent") , em_Val_from(type));
        return UIEvent_from_val(&vv);
      }


UIEvent UIEvent_new1(jb_String * type, UIEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("UIEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return UIEvent_from_val(&vv);
      }


Window UIEvent_view(const UIEvent *self) {
    return em_Val_as(Window, em_Val_get(Event_as_val(self->inner), em_Val_from("view")));
}


long UIEvent_detail(const UIEvent *self) {
    return em_Val_as(long, em_Val_get(Event_as_val(self->inner), em_Val_from("detail")));
}


InputDeviceCapabilities UIEvent_sourceCapabilities(const UIEvent *self) {
    return em_Val_as(InputDeviceCapabilities, em_Val_get(Event_as_val(self->inner), em_Val_from("sourceCapabilities")));
}


jb_Undefined UIEvent_initUIEvent0(UIEvent* self , jb_String * typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg)));
}


jb_Undefined UIEvent_initUIEvent1(UIEvent* self , jb_String * typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined UIEvent_initUIEvent2(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined UIEvent_initUIEvent3(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined UIEvent_initUIEvent4(UIEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg) {
    return em_Val_as(jb_Undefined, em_Val_call(Event_as_val(self->inner), "initUIEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(detailArg)));
}


unsigned long UIEvent_which(const UIEvent *self) {
    return em_Val_as(unsigned long, em_Val_get(Event_as_val(self->inner), em_Val_from("which")));
}

