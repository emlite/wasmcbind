#include <webbind/HTMLTableElement.h>
#include <webbind/HTMLTableCaptionElement.h>
#include <webbind/HTMLTableSectionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/HTMLTableRowElement.h>


DEFINE_EMLITE_TYPE(HTMLTableElement, HTMLElement);


HTMLTableElement HTMLTableElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableElement") );
        return HTMLTableElement_from_val(&vv);
      }


HTMLTableCaptionElement HTMLTableElement_caption(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableCaptionElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("caption")));
}


void HTMLTableElement_set_caption(HTMLTableElement* self, HTMLTableCaptionElement * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("caption"), em_Val_from(value));
}


HTMLTableCaptionElement HTMLTableElement_createCaption(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableCaptionElement, em_Val_call(HTMLElement_as_val(self->inner), "createCaption"));
}


jb_Undefined HTMLTableElement_deleteCaption(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteCaption"));
}


HTMLTableSectionElement HTMLTableElement_tHead(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableSectionElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("tHead")));
}


void HTMLTableElement_set_tHead(HTMLTableElement* self, HTMLTableSectionElement * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("tHead"), em_Val_from(value));
}


HTMLTableSectionElement HTMLTableElement_createTHead(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTHead"));
}


jb_Undefined HTMLTableElement_deleteTHead(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteTHead"));
}


HTMLTableSectionElement HTMLTableElement_tFoot(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableSectionElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("tFoot")));
}


void HTMLTableElement_set_tFoot(HTMLTableElement* self, HTMLTableSectionElement * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("tFoot"), em_Val_from(value));
}


HTMLTableSectionElement HTMLTableElement_createTFoot(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTFoot"));
}


jb_Undefined HTMLTableElement_deleteTFoot(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteTFoot"));
}


HTMLCollection HTMLTableElement_tBodies(const HTMLTableElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("tBodies")));
}


HTMLTableSectionElement HTMLTableElement_createTBody(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTBody"));
}


HTMLCollection HTMLTableElement_rows(const HTMLTableElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rows")));
}


HTMLTableRowElement HTMLTableElement_insertRow0(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow"));
}


HTMLTableRowElement HTMLTableElement_insertRow1(HTMLTableElement* self , long index) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow", em_Val_from(index)));
}


jb_Undefined HTMLTableElement_deleteRow(HTMLTableElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteRow", em_Val_from(index)));
}


jb_DOMString HTMLTableElement_align(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableElement_set_align(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_border(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("border")));
}


void HTMLTableElement_set_border(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("border"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_frame(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("frame")));
}


void HTMLTableElement_set_frame(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("frame"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_rules(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rules")));
}


void HTMLTableElement_set_rules(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rules"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_summary(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("summary")));
}


void HTMLTableElement_set_summary(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("summary"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_width(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLTableElement_set_width(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_bgColor(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("bgColor")));
}


void HTMLTableElement_set_bgColor(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("bgColor"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_cellPadding(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cellPadding")));
}


void HTMLTableElement_set_cellPadding(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cellPadding"), em_Val_from(value));
}


jb_DOMString HTMLTableElement_cellSpacing(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cellSpacing")));
}


void HTMLTableElement_set_cellSpacing(HTMLTableElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cellSpacing"), em_Val_from(value));
}

