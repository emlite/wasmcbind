#include <webbind/WindowControlsOverlayGeometryChangeEvent.h>
#include <webbind/DOMRect.h>


DEFINE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEvent, Event);


WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent_new(jb_String * type, jb_Any * eventInitDict) {
        em_Val vv = em_Val_new(em_Val_global("WindowControlsOverlayGeometryChangeEvent") , em_Val_from(type), em_Val_from(eventInitDict));
        return WindowControlsOverlayGeometryChangeEvent_from_val(&vv);
      }


DOMRect WindowControlsOverlayGeometryChangeEvent_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEvent *self) {
    return em_Val_as(DOMRect, em_Val_get(Event_as_val(self->inner), em_Val_from("titlebarAreaRect")));
}


bool WindowControlsOverlayGeometryChangeEvent_visible(const WindowControlsOverlayGeometryChangeEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), em_Val_from("visible")));
}

