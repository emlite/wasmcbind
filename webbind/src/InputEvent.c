#include <webbind/InputEvent.h>
#include <webbind/DataTransfer.h>
#include <webbind/StaticRange.h>


DEFINE_EMLITE_TYPE(InputEvent, UIEvent);


InputEvent InputEvent_new(const jb_DOMString* type) : UIEvent(em_Val_global("InputEvent").new_(em_Val_from(type))) {
        return InputEvent(em_Val_new(em_Val_global("InputEvent", em_Val_from(type)));
      }


InputEvent InputEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : UIEvent(em_Val_global("InputEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return InputEvent(em_Val_new(em_Val_global("InputEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


jb_USVString InputEvent_data(const InputEvent *self) {
    return em_Val_as(jb_USVString, em_Val_get(UIEvent_as_val(self->inner), "data"));
}


bool InputEvent_isComposing(const InputEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), "isComposing"));
}


jb_DOMString InputEvent_inputType(const InputEvent *self) {
    return em_Val_as(jb_DOMString, em_Val_get(UIEvent_as_val(self->inner), "inputType"));
}


DataTransfer InputEvent_dataTransfer(const InputEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(UIEvent_as_val(self->inner), "dataTransfer"));
}


jb_Sequence InputEvent_getTargetRanges(InputEvent* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(UIEvent_as_val(self->inner), "getTargetRanges"));
}

