#include <webbind/HTMLTableRowElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/HTMLTableCellElement.h>


DEFINE_EMLITE_TYPE(HTMLTableRowElement, HTMLElement);


HTMLTableRowElement HTMLTableRowElement_new() : HTMLElement(em_Val_global("HTMLTableRowElement").new_()) {
        return HTMLTableRowElement(em_Val_new(em_Val_global("HTMLTableRowElement", ));
      }


long HTMLTableRowElement_rowIndex(const HTMLTableRowElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "rowIndex"));
}


long HTMLTableRowElement_sectionRowIndex(const HTMLTableRowElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "sectionRowIndex"));
}


HTMLCollection HTMLTableRowElement_cells(const HTMLTableRowElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "cells"));
}


HTMLTableCellElement HTMLTableRowElement_insertCell(HTMLTableRowElement* self ) {
    return em_Val_as(HTMLTableCellElement, em_Val_call(HTMLElement_as_val(self->inner), "insertCell"));
}


HTMLTableCellElement HTMLTableRowElement_insertCell(HTMLTableRowElement* self , long index) {
    return em_Val_as(HTMLTableCellElement, em_Val_call(HTMLElement_as_val(self->inner), "insertCell", em_Val_from(index)));
}


jb_Undefined HTMLTableRowElement_deleteCell(HTMLTableRowElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteCell", em_Val_from(index)));
}


jb_DOMString HTMLTableRowElement_align(const HTMLTableRowElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableRowElement_set_align(HTMLTableRowElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLTableRowElement_ch(const HTMLTableRowElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "ch"));
}


void HTMLTableRowElement_set_ch(HTMLTableRowElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ch", value);
}


jb_DOMString HTMLTableRowElement_chOff(const HTMLTableRowElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "chOff"));
}


void HTMLTableRowElement_set_chOff(HTMLTableRowElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "chOff", value);
}


jb_DOMString HTMLTableRowElement_vAlign(const HTMLTableRowElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "vAlign"));
}


void HTMLTableRowElement_set_vAlign(HTMLTableRowElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vAlign", value);
}


jb_DOMString HTMLTableRowElement_bgColor(const HTMLTableRowElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "bgColor"));
}


void HTMLTableRowElement_set_bgColor(HTMLTableRowElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "bgColor", value);
}

