#include <webbind/LayoutFragment.h>
#include <webbind/ChildBreakToken.h>


DEFINE_EMLITE_TYPE(LayoutFragment, em_Val);


double LayoutFragment_inlineSize(const LayoutFragment *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineSize")));
}


double LayoutFragment_blockSize(const LayoutFragment *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockSize")));
}


double LayoutFragment_inlineOffset(const LayoutFragment *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inlineOffset")));
}


void LayoutFragment_set_inlineOffset(LayoutFragment* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("inlineOffset"), em_Val_from(value));
}


double LayoutFragment_blockOffset(const LayoutFragment *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockOffset")));
}


void LayoutFragment_set_blockOffset(LayoutFragment* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blockOffset"), em_Val_from(value));
}


jb_Any LayoutFragment_data(const LayoutFragment *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


ChildBreakToken LayoutFragment_breakToken(const LayoutFragment *self) {
    return em_Val_as(ChildBreakToken, em_Val_get(em_Val_as_val(self->inner), em_Val_from("breakToken")));
}

