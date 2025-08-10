#include <webbind/HTMLTableCellElement.h>

DEFINE_EMLITE_TYPE(HTMLTableCellElement, HTMLElement);


HTMLTableCellElement HTMLTableCellElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableCellElement") );
        return HTMLTableCellElement_from_val(&vv);
      }


unsigned long HTMLTableCellElement_colSpan(const HTMLTableCellElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("colSpan")));
}


void HTMLTableCellElement_set_colSpan(HTMLTableCellElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("colSpan"), em_Val_from(value));
}


unsigned long HTMLTableCellElement_rowSpan(const HTMLTableCellElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rowSpan")));
}


void HTMLTableCellElement_set_rowSpan(HTMLTableCellElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rowSpan"), em_Val_from(value));
}


jb_String HTMLTableCellElement_headers(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("headers")));
}


void HTMLTableCellElement_set_headers(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("headers"), em_Val_from(value));
}


long HTMLTableCellElement_cellIndex(const HTMLTableCellElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cellIndex")));
}


jb_String HTMLTableCellElement_scope(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scope")));
}


void HTMLTableCellElement_set_scope(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scope"), em_Val_from(value));
}


jb_String HTMLTableCellElement_abbr(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("abbr")));
}


void HTMLTableCellElement_set_abbr(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("abbr"), em_Val_from(value));
}


jb_String HTMLTableCellElement_align(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableCellElement_set_align(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_String HTMLTableCellElement_axis(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("axis")));
}


void HTMLTableCellElement_set_axis(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("axis"), em_Val_from(value));
}


jb_String HTMLTableCellElement_height(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLTableCellElement_set_height(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_String HTMLTableCellElement_width(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLTableCellElement_set_width(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String HTMLTableCellElement_ch(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ch")));
}


void HTMLTableCellElement_set_ch(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ch"), em_Val_from(value));
}


jb_String HTMLTableCellElement_chOff(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("chOff")));
}


void HTMLTableCellElement_set_chOff(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("chOff"), em_Val_from(value));
}


bool HTMLTableCellElement_noWrap(const HTMLTableCellElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noWrap")));
}


void HTMLTableCellElement_set_noWrap(HTMLTableCellElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noWrap"), em_Val_from(value));
}


jb_String HTMLTableCellElement_vAlign(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vAlign")));
}


void HTMLTableCellElement_set_vAlign(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vAlign"), em_Val_from(value));
}


jb_String HTMLTableCellElement_bgColor(const HTMLTableCellElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("bgColor")));
}


void HTMLTableCellElement_set_bgColor(HTMLTableCellElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}

