#include <webbind/WindowControlsOverlayGeometryChangeEvent.h>
#include <webbind/DOMRect.h>


DEFINE_EMLITE_TYPE(WindowControlsOverlayGeometryChangeEvent, Event);


WindowControlsOverlayGeometryChangeEvent WindowControlsOverlayGeometryChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict) : Event(em_Val_global("WindowControlsOverlayGeometryChangeEvent").new_(em_Val_from(type), em_Val_from(eventInitDict))) {
        return WindowControlsOverlayGeometryChangeEvent(em_Val_new(em_Val_global("WindowControlsOverlayGeometryChangeEvent", em_Val_from(type), em_Val_from(eventInitDict)));
      }


DOMRect WindowControlsOverlayGeometryChangeEvent_titlebarAreaRect(const WindowControlsOverlayGeometryChangeEvent *self) {
    return em_Val_as(DOMRect, em_Val_get(Event_as_val(self->inner), "titlebarAreaRect"));
}


bool WindowControlsOverlayGeometryChangeEvent_visible(const WindowControlsOverlayGeometryChangeEvent *self) {
    return em_Val_as(bool, em_Val_get(Event_as_val(self->inner), "visible"));
}

