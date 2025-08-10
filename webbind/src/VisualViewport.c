#include <webbind/VisualViewport.h>

DEFINE_EMLITE_TYPE(VisualViewport, EventTarget);


double VisualViewport_offsetLeft(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("offsetLeft")));
}


double VisualViewport_offsetTop(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("offsetTop")));
}


double VisualViewport_pageLeft(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pageLeft")));
}


double VisualViewport_pageTop(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pageTop")));
}


double VisualViewport_width(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("width")));
}


double VisualViewport_height(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("height")));
}


double VisualViewport_scale(const VisualViewport *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("scale")));
}


jb_Any VisualViewport_onresize(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresize")));
}


void VisualViewport_set_onresize(VisualViewport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresize"), em_Val_from(value));
}


jb_Any VisualViewport_onscroll(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onscroll")));
}


void VisualViewport_set_onscroll(VisualViewport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onscroll"), em_Val_from(value));
}


jb_Any VisualViewport_onscrollend(const VisualViewport *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onscrollend")));
}


void VisualViewport_set_onscrollend(VisualViewport* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onscrollend"), em_Val_from(value));
}

