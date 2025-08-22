#include <webcbind/HTMLTableRowElement.h>

#include <webcbind/HTMLCollection.h>
#include <webcbind/HTMLTableCellElement.h>

DEFINE_EMLITE_TYPE(HTMLTableRowElement, HTMLElement);


HTMLTableRowElement HTMLTableRowElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableRowElement") );
        return HTMLTableRowElement_from_val(&vv);
      }


long HTMLTableRowElement_rowIndex(const HTMLTableRowElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rowIndex")));
}


long HTMLTableRowElement_sectionRowIndex(const HTMLTableRowElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sectionRowIndex")));
}


HTMLCollection HTMLTableRowElement_cells(const HTMLTableRowElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cells")));
}


HTMLTableCellElement HTMLTableRowElement_insertCell0(HTMLTableRowElement* self ) {
    return em_Val_as(HTMLTableCellElement, em_Val_call(HTMLElement_as_val(self->inner), "insertCell"));
}


HTMLTableCellElement HTMLTableRowElement_insertCell1(HTMLTableRowElement* self , long index) {
    return em_Val_as(HTMLTableCellElement, em_Val_call(HTMLElement_as_val(self->inner), "insertCell", em_Val_from(index)));
}


jb_Undefined HTMLTableRowElement_deleteCell(HTMLTableRowElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteCell", em_Val_from(index)));
}


jb_String HTMLTableRowElement_align(const HTMLTableRowElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableRowElement_set_align(HTMLTableRowElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_String HTMLTableRowElement_ch(const HTMLTableRowElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ch")));
}


void HTMLTableRowElement_set_ch(HTMLTableRowElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ch"), em_Val_from(value));
}


jb_String HTMLTableRowElement_chOff(const HTMLTableRowElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("chOff")));
}


void HTMLTableRowElement_set_chOff(HTMLTableRowElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("chOff"), em_Val_from(value));
}


jb_String HTMLTableRowElement_vAlign(const HTMLTableRowElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vAlign")));
}


void HTMLTableRowElement_set_vAlign(HTMLTableRowElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vAlign"), em_Val_from(value));
}


jb_String HTMLTableRowElement_bgColor(const HTMLTableRowElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("bgColor")));
}


void HTMLTableRowElement_set_bgColor(HTMLTableRowElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}

