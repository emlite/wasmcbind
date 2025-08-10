#include <webbind/Viewport.h>

#include <webbind/DOMRect.h>

DEFINE_EMLITE_TYPE(Viewport, em_Val);


jb_Array Viewport_segments(const Viewport *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("segments")));
}

