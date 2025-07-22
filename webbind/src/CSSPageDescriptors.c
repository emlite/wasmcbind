#include <webbind/CSSPageDescriptors.h>


DEFINE_EMLITE_TYPE(CSSPageDescriptors, CSSStyleDeclaration);


jb_CSSOMString CSSPageDescriptors_margin(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin"));
}


void CSSPageDescriptors_set_margin(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin", value);
}


jb_CSSOMString CSSPageDescriptors_marginTop(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginTop"));
}


void CSSPageDescriptors_set_marginTop(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginTop", value);
}


jb_CSSOMString CSSPageDescriptors_marginRight(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginRight"));
}


void CSSPageDescriptors_set_marginRight(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginRight", value);
}


jb_CSSOMString CSSPageDescriptors_marginBottom(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginBottom"));
}


void CSSPageDescriptors_set_marginBottom(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginBottom", value);
}


jb_CSSOMString CSSPageDescriptors_marginLeft(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginLeft"));
}


void CSSPageDescriptors_set_marginLeft(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginLeft", value);
}


jb_CSSOMString CSSPageDescriptors_margin_top(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-top"));
}


void CSSPageDescriptors_set_margin_top(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-top", value);
}


jb_CSSOMString CSSPageDescriptors_margin_right(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-right"));
}


void CSSPageDescriptors_set_margin_right(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-right", value);
}


jb_CSSOMString CSSPageDescriptors_margin_bottom(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-bottom"));
}


void CSSPageDescriptors_set_margin_bottom(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-bottom", value);
}


jb_CSSOMString CSSPageDescriptors_margin_left(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-left"));
}


void CSSPageDescriptors_set_margin_left(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-left", value);
}


jb_CSSOMString CSSPageDescriptors_size(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "size"));
}


void CSSPageDescriptors_set_size(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "size", value);
}


jb_CSSOMString CSSPageDescriptors_pageOrientation(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "pageOrientation"));
}


void CSSPageDescriptors_set_pageOrientation(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "pageOrientation", value);
}


jb_CSSOMString CSSPageDescriptors_page_orientation(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "page-orientation"));
}


void CSSPageDescriptors_set_page_orientation(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "page-orientation", value);
}


jb_CSSOMString CSSPageDescriptors_marks(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marks"));
}


void CSSPageDescriptors_set_marks(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marks", value);
}


jb_CSSOMString CSSPageDescriptors_bleed(const CSSPageDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "bleed"));
}


void CSSPageDescriptors_set_bleed(CSSPageDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "bleed", value);
}

