#include <webbind/WindowControlsOverlayGeometryChangeEventInit.h>

#include <webbind/DOMRect.h>

DEFINE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEventInit, EventInit);


DOMRect WindowControlsOverlayGeometryChangeEventInit_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEventInit *self) {
    return em_Val_as(DOMRect, em_Val_get(EventInit_as_val(self->inner), em_Val_from("titlebarAreaRect")));
}


void WindowControlsOverlayGeometryChangeEventInit_set_titlebarAreaRect(WindowControlsOverlayGeometryChangeEventInit* self, DOMRect * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("titlebarAreaRect"), em_Val_from(value));
}


bool WindowControlsOverlayGeometryChangeEventInit_visible(const WindowControlsOverlayGeometryChangeEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("visible")));
}


void WindowControlsOverlayGeometryChangeEventInit_set_visible(WindowControlsOverlayGeometryChangeEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("visible"), em_Val_from(value));
}


WindowControlsOverlayGeometryChangeEventInit WindowControlsOverlayGeometryChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return WindowControlsOverlayGeometryChangeEventInit_from_val(&obj);
}

