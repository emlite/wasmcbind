#include <webcbind/CompositionEvent.h>

#include <webcbind/CompositionEventInit.h>

DEFINE_EMLITE_TYPE(CompositionEvent, UIEvent);


CompositionEvent CompositionEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("CompositionEvent") , em_Val_from(type));
        return CompositionEvent_from_val(&vv);
      }


CompositionEvent CompositionEvent_new1(jb_String * type, CompositionEventInit * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("CompositionEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return CompositionEvent_from_val(&vv);
      }


jb_String CompositionEvent_data(const CompositionEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("data")));
}


jb_Undefined CompositionEvent_initCompositionEvent0(CompositionEvent* self , jb_String * typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent1(CompositionEvent* self , jb_String * typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent2(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent3(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent4(CompositionEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, jb_Any * viewArg, jb_String * dataArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(dataArg)));
}

