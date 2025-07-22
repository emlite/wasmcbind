#include <webbind/HTMLTableCellElement.h>


DEFINE_EMLITE_TYPE(HTMLTableCellElement, HTMLElement);


HTMLTableCellElement HTMLTableCellElement_new() : HTMLElement(em_Val_global("HTMLTableCellElement").new_()) {
        return HTMLTableCellElement(em_Val_new(em_Val_global("HTMLTableCellElement", ));
      }


unsigned long HTMLTableCellElement_colSpan(const HTMLTableCellElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "colSpan"));
}


void HTMLTableCellElement_set_colSpan(HTMLTableCellElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "colSpan", value);
}


unsigned long HTMLTableCellElement_rowSpan(const HTMLTableCellElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "rowSpan"));
}


void HTMLTableCellElement_set_rowSpan(HTMLTableCellElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rowSpan", value);
}


jb_DOMString HTMLTableCellElement_headers(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "headers"));
}


void HTMLTableCellElement_set_headers(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "headers", value);
}


long HTMLTableCellElement_cellIndex(const HTMLTableCellElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "cellIndex"));
}


jb_DOMString HTMLTableCellElement_scope(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "scope"));
}


void HTMLTableCellElement_set_scope(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scope", value);
}


jb_DOMString HTMLTableCellElement_abbr(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "abbr"));
}


void HTMLTableCellElement_set_abbr(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "abbr", value);
}


jb_DOMString HTMLTableCellElement_align(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableCellElement_set_align(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLTableCellElement_axis(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "axis"));
}


void HTMLTableCellElement_set_axis(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "axis", value);
}


jb_DOMString HTMLTableCellElement_height(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLTableCellElement_set_height(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


jb_DOMString HTMLTableCellElement_width(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLTableCellElement_set_width(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLTableCellElement_ch(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "ch"));
}


void HTMLTableCellElement_set_ch(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ch", value);
}


jb_DOMString HTMLTableCellElement_chOff(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "chOff"));
}


void HTMLTableCellElement_set_chOff(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "chOff", value);
}


bool HTMLTableCellElement_noWrap(const HTMLTableCellElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noWrap"));
}


void HTMLTableCellElement_set_noWrap(HTMLTableCellElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noWrap", value);
}


jb_DOMString HTMLTableCellElement_vAlign(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "vAlign"));
}


void HTMLTableCellElement_set_vAlign(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vAlign", value);
}


jb_DOMString HTMLTableCellElement_bgColor(const HTMLTableCellElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "bgColor"));
}


void HTMLTableCellElement_set_bgColor(HTMLTableCellElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "bgColor", value);
}

