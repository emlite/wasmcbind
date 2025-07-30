#include <webbind/InputEvent.h>
#include <webbind/DataTransfer.h>
#include <webbind/StaticRange.h>


DEFINE_EMLITE_TYPE(InputEvent, UIEvent);


InputEvent InputEvent_new0(jb_String * type) {
        em_Val vv = em_Val_new(em_Val_global("InputEvent") , em_Val_from(type));
        return InputEvent_from_val(&vv);
      }


InputEvent InputEvent_new1(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("InputEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return InputEvent_from_val(&vv);
      }


jb_String InputEvent_data(const InputEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("data")));
}


bool InputEvent_isComposing(const InputEvent *self) {
    return em_Val_as(bool, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("isComposing")));
}


jb_String InputEvent_inputType(const InputEvent *self) {
    return em_Val_as(jb_String, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("inputType")));
}


DataTransfer InputEvent_dataTransfer(const InputEvent *self) {
    return em_Val_as(DataTransfer, em_Val_get(UIEvent_as_val(self->inner), em_Val_from("dataTransfer")));
}


jb_Array InputEvent_getTargetRanges(InputEvent* self ) {
    return em_Val_as(jb_Array, em_Val_call(UIEvent_as_val(self->inner), "getTargetRanges"));
}

