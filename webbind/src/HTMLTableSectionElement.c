#include <webbind/HTMLTableSectionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/HTMLTableRowElement.h>


DEFINE_EMLITE_TYPE(HTMLTableSectionElement, HTMLElement);


HTMLTableSectionElement HTMLTableSectionElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableSectionElement") );
        return HTMLTableSectionElement_from_val(&vv);
      }


HTMLCollection HTMLTableSectionElement_rows(const HTMLTableSectionElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rows")));
}


HTMLTableRowElement HTMLTableSectionElement_insertRow0(HTMLTableSectionElement* self ) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow"));
}


HTMLTableRowElement HTMLTableSectionElement_insertRow1(HTMLTableSectionElement* self , long index) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow", em_Val_from(index)));
}


jb_Undefined HTMLTableSectionElement_deleteRow(HTMLTableSectionElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteRow", em_Val_from(index)));
}


jb_DOMString HTMLTableSectionElement_align(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableSectionElement_set_align(HTMLTableSectionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLTableSectionElement_ch(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ch")));
}


void HTMLTableSectionElement_set_ch(HTMLTableSectionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ch"), em_Val_from(value));
}


jb_DOMString HTMLTableSectionElement_chOff(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("chOff")));
}


void HTMLTableSectionElement_set_chOff(HTMLTableSectionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("chOff"), em_Val_from(value));
}


jb_DOMString HTMLTableSectionElement_vAlign(const HTMLTableSectionElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vAlign")));
}


void HTMLTableSectionElement_set_vAlign(HTMLTableSectionElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vAlign"), em_Val_from(value));
}

