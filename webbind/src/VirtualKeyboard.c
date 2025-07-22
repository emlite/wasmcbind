#include <webbind/VirtualKeyboard.h>
#include <webbind/DOMRect.h>


DEFINE_EMLITE_TYPE(VirtualKeyboard, EventTarget);


jb_Undefined VirtualKeyboard_show(VirtualKeyboard* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "show"));
}


jb_Undefined VirtualKeyboard_hide(VirtualKeyboard* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "hide"));
}


DOMRect VirtualKeyboard_boundingRect(const VirtualKeyboard *self) {
    return em_Val_as(DOMRect, em_Val_get(EventTarget_as_val(self->inner), "boundingRect"));
}


bool VirtualKeyboard_overlaysContent(const VirtualKeyboard *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "overlaysContent"));
}


void VirtualKeyboard_set_overlaysContent(VirtualKeyboard* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "overlaysContent", value);
}


jb_Any VirtualKeyboard_ongeometrychange(const VirtualKeyboard *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ongeometrychange"));
}


void VirtualKeyboard_set_ongeometrychange(VirtualKeyboard* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ongeometrychange", value);
}

