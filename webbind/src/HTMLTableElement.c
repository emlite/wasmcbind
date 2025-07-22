#include <webbind/HTMLTableElement.h>
#include <webbind/HTMLTableCaptionElement.h>
#include <webbind/HTMLTableSectionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/HTMLTableRowElement.h>


DEFINE_EMLITE_TYPE(HTMLTableElement, HTMLElement);


HTMLTableElement HTMLTableElement_new() : HTMLElement(em_Val_global("HTMLTableElement").new_()) {
        return HTMLTableElement(em_Val_new(em_Val_global("HTMLTableElement", ));
      }


HTMLTableCaptionElement HTMLTableElement_caption(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableCaptionElement, em_Val_get(HTMLElement_as_val(self->inner), "caption"));
}


void HTMLTableElement_set_caption(HTMLTableElement* self, const HTMLTableCaptionElement* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "caption", value);
}


HTMLTableCaptionElement HTMLTableElement_createCaption(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableCaptionElement, em_Val_call(HTMLElement_as_val(self->inner), "createCaption"));
}


jb_Undefined HTMLTableElement_deleteCaption(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteCaption"));
}


HTMLTableSectionElement HTMLTableElement_tHead(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableSectionElement, em_Val_get(HTMLElement_as_val(self->inner), "tHead"));
}


void HTMLTableElement_set_tHead(HTMLTableElement* self, const HTMLTableSectionElement* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "tHead", value);
}


HTMLTableSectionElement HTMLTableElement_createTHead(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTHead"));
}


jb_Undefined HTMLTableElement_deleteTHead(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteTHead"));
}


HTMLTableSectionElement HTMLTableElement_tFoot(const HTMLTableElement *self) {
    return em_Val_as(HTMLTableSectionElement, em_Val_get(HTMLElement_as_val(self->inner), "tFoot"));
}


void HTMLTableElement_set_tFoot(HTMLTableElement* self, const HTMLTableSectionElement* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "tFoot", value);
}


HTMLTableSectionElement HTMLTableElement_createTFoot(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTFoot"));
}


jb_Undefined HTMLTableElement_deleteTFoot(HTMLTableElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteTFoot"));
}


HTMLCollection HTMLTableElement_tBodies(const HTMLTableElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "tBodies"));
}


HTMLTableSectionElement HTMLTableElement_createTBody(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableSectionElement, em_Val_call(HTMLElement_as_val(self->inner), "createTBody"));
}


HTMLCollection HTMLTableElement_rows(const HTMLTableElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "rows"));
}


HTMLTableRowElement HTMLTableElement_insertRow(HTMLTableElement* self ) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow"));
}


HTMLTableRowElement HTMLTableElement_insertRow(HTMLTableElement* self , long index) {
    return em_Val_as(HTMLTableRowElement, em_Val_call(HTMLElement_as_val(self->inner), "insertRow", em_Val_from(index)));
}


jb_Undefined HTMLTableElement_deleteRow(HTMLTableElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "deleteRow", em_Val_from(index)));
}


jb_DOMString HTMLTableElement_align(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableElement_set_align(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLTableElement_border(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "border"));
}


void HTMLTableElement_set_border(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "border", value);
}


jb_DOMString HTMLTableElement_frame(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "frame"));
}


void HTMLTableElement_set_frame(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "frame", value);
}


jb_DOMString HTMLTableElement_rules(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rules"));
}


void HTMLTableElement_set_rules(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rules", value);
}


jb_DOMString HTMLTableElement_summary(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "summary"));
}


void HTMLTableElement_set_summary(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "summary", value);
}


jb_DOMString HTMLTableElement_width(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLTableElement_set_width(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLTableElement_bgColor(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "bgColor"));
}


void HTMLTableElement_set_bgColor(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "bgColor", value);
}


jb_DOMString HTMLTableElement_cellPadding(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "cellPadding"));
}


void HTMLTableElement_set_cellPadding(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cellPadding", value);
}


jb_DOMString HTMLTableElement_cellSpacing(const HTMLTableElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "cellSpacing"));
}


void HTMLTableElement_set_cellSpacing(HTMLTableElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cellSpacing", value);
}

