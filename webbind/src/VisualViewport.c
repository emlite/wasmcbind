#include <webbind/VisualViewport.h>


DEFINE_EMLITE_TYPE(VisualViewport, EventTarget);


double VisualViewport_offsetLeft(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "offsetLeft"));
}


double VisualViewport_offsetTop(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "offsetTop"));
}


double VisualViewport_pageLeft(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "pageLeft"));
}


double VisualViewport_pageTop(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "pageTop"));
}


double VisualViewport_width(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "width"));
}


double VisualViewport_height(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "height"));
}


double VisualViewport_scale(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "scale"));
}


jb_Any VisualViewport_onresize(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onresize"));
}


void VisualViewport_set_onresize(VisualViewport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onresize", value);
}


jb_Any VisualViewport_onscroll(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onscroll"));
}


void VisualViewport_set_onscroll(VisualViewport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onscroll", value);
}


jb_Any VisualViewport_onscrollend(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onscrollend"));
}


void VisualViewport_set_onscrollend(VisualViewport* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onscrollend", value);
}

