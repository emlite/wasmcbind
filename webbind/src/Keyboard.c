#include <webbind/Keyboard.h>
#include <webbind/KeyboardLayoutMap.h>


DEFINE_EMLITE_TYPE(Keyboard, EventTarget);


jb_Promise Keyboard_lock(Keyboard* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "lock"));
}


jb_Promise Keyboard_lock(Keyboard* self , const jb_Sequence* keyCodes) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "lock", em_Val_from(keyCodes)));
}


jb_Undefined Keyboard_unlock(Keyboard* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "unlock"));
}


jb_Promise Keyboard_getLayoutMap(Keyboard* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getLayoutMap"));
}


jb_Any Keyboard_onlayoutchange(const Keyboard *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onlayoutchange"));
}


void Keyboard_set_onlayoutchange(Keyboard* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onlayoutchange", value);
}

