#include <webbind/WindowControlsOverlay.h>
#include <webbind/DOMRect.h>


DEFINE_EMLITE_TYPE(WindowControlsOverlay, EventTarget);


bool WindowControlsOverlay_visible(const WindowControlsOverlay *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "visible"));
}


DOMRect WindowControlsOverlay_getTitlebarAreaRect(WindowControlsOverlay* self ) {
    return em_Val_as(DOMRect, em_Val_call(EventTarget_as_val(self->inner), "getTitlebarAreaRect"));
}


jb_Any WindowControlsOverlay_ongeometrychange(const WindowControlsOverlay *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ongeometrychange"));
}


void WindowControlsOverlay_set_ongeometrychange(WindowControlsOverlay* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ongeometrychange", value);
}

