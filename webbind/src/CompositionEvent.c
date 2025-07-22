#include <webbind/CompositionEvent.h>


DEFINE_EMLITE_TYPE(CompositionEvent, UIEvent);


CompositionEvent CompositionEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("CompositionEvent").new_(em_Val_from(type))) {
        return CompositionEvent(em_Val_new(em_Val_global("CompositionEvent", em_Val_from(type)));
      }


CompositionEvent CompositionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("CompositionEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return CompositionEvent(em_Val_new(em_Val_global("CompositionEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_USVString CompositionEvent_data(const CompositionEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(UIEvent_as_val(self->inner), "data"));
}


jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const jb_Any* viewArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg)));
}


jb_Undefined CompositionEvent_initCompositionEvent(CompositionEvent* self , const jb_DOMString* typeArg, bool bubblesArg, bool cancelableArg, const jb_Any* viewArg, const jb_DOMString* dataArg) {
    return em_Val_as(jb_Undefined, em_Val_call(UIEvent_as_val(self->inner), "initCompositionEvent", em_Val_from(typeArg), em_Val_from(bubblesArg), em_Val_from(cancelableArg), em_Val_from(viewArg), em_Val_from(dataArg)));
}

