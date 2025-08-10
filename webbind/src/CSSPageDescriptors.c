#include <webbind/CSSPageDescriptors.h>

DEFINE_EMLITE_TYPE(CSSPageDescriptors, CSSStyleDeclaration);


jb_String CSSPageDescriptors_margin(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin")));
}


void CSSPageDescriptors_set_margin(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin"), em_Val_from(value));
}


jb_String CSSPageDescriptors_marginTop(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginTop")));
}


void CSSPageDescriptors_set_marginTop(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginTop"), em_Val_from(value));
}


jb_String CSSPageDescriptors_marginRight(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginRight")));
}


void CSSPageDescriptors_set_marginRight(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginRight"), em_Val_from(value));
}


jb_String CSSPageDescriptors_marginBottom(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBottom")));
}


void CSSPageDescriptors_set_marginBottom(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBottom"), em_Val_from(value));
}


jb_String CSSPageDescriptors_marginLeft(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginLeft")));
}


void CSSPageDescriptors_set_marginLeft(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginLeft"), em_Val_from(value));
}


jb_String CSSPageDescriptors_margin_top(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-top")));
}


void CSSPageDescriptors_set_margin_top(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-top"), em_Val_from(value));
}


jb_String CSSPageDescriptors_margin_right(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-right")));
}


void CSSPageDescriptors_set_margin_right(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-right"), em_Val_from(value));
}


jb_String CSSPageDescriptors_margin_bottom(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-bottom")));
}


void CSSPageDescriptors_set_margin_bottom(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-bottom"), em_Val_from(value));
}


jb_String CSSPageDescriptors_margin_left(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-left")));
}


void CSSPageDescriptors_set_margin_left(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-left"), em_Val_from(value));
}


jb_String CSSPageDescriptors_size(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("size")));
}


void CSSPageDescriptors_set_size(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_String CSSPageDescriptors_pageOrientation(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("pageOrientation")));
}


void CSSPageDescriptors_set_pageOrientation(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("pageOrientation"), em_Val_from(value));
}


jb_String CSSPageDescriptors_page_orientation(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("page-orientation")));
}


void CSSPageDescriptors_set_page_orientation(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("page-orientation"), em_Val_from(value));
}


jb_String CSSPageDescriptors_marks(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marks")));
}


void CSSPageDescriptors_set_marks(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marks"), em_Val_from(value));
}


jb_String CSSPageDescriptors_bleed(const CSSPageDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("bleed")));
}


void CSSPageDescriptors_set_bleed(CSSPageDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("bleed"), em_Val_from(value));
}

