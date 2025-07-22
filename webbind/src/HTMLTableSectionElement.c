#include <webbind/HTMLTableSectionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/HTMLTableRowElement.h>


DEFINE_EMLITE_TYPE(HTMLTableSectionElement, HTMLElement);


HTMLTableSectionElement HTMLTableSectionElement_new() : HTMLElement(em_Val_global("HTMLTableSectionElement").new_()) {
        return HTMLTableSectionElement(em_Val_new(em_Val_global("HTMLTableSectionElement", ));
      }


HTMLCollection HTMLTableSectionElement_rows(const HTMLTableSectionElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "rows"));
}


HTMLTableRowElement HTMLTableSectionElement_insertRow(HTMLTableSectionElement* self ) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow"));
}


HTMLTableRowElement HTMLTableSectionElement_insertRow(HTMLTableSectionElement* self , long index) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow", em_Val_from(index)));
}


jb_Undefined HTMLTableSectionElement_deleteRow(HTMLTableSectionElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteRow", em_Val_from(index)));
}


jb_DOMString HTMLTableSectionElement_align(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableSectionElement_set_align(HTMLTableSectionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLTableSectionElement_ch(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "ch"));
}


void HTMLTableSectionElement_set_ch(HTMLTableSectionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ch", value);
}


jb_DOMString HTMLTableSectionElement_chOff(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "chOff"));
}


void HTMLTableSectionElement_set_chOff(HTMLTableSectionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "chOff", value);
}


jb_DOMString HTMLTableSectionElement_vAlign(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "vAlign"));
}


void HTMLTableSectionElement_set_vAlign(HTMLTableSectionElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vAlign", value);
}

