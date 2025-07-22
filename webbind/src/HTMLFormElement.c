#include <webbind/HTMLFormElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/HTMLFormControlsCollection.h>


DEFINE_EMLITE_TYPE(HTMLFormElement, HTMLElement);


HTMLFormElement HTMLFormElement_new() : HTMLElement(em_Val_global("HTMLFormElement").new_()) {
        return HTMLFormElement(em_Val_new(em_Val_global("HTMLFormElement", ));
      }


jb_DOMString HTMLFormElement_acceptCharset(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "acceptCharset"));
}


void HTMLFormElement_set_acceptCharset(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "acceptCharset", value);
}


jb_USVString HTMLFormElement_action(const HTMLFormElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "action"));
}


void HTMLFormElement_set_action(HTMLFormElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "action", value);
}


jb_DOMString HTMLFormElement_autocomplete(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "autocomplete"));
}


void HTMLFormElement_set_autocomplete(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "autocomplete", value);
}


jb_DOMString HTMLFormElement_enctype(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "enctype"));
}


void HTMLFormElement_set_enctype(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "enctype", value);
}


jb_DOMString HTMLFormElement_encoding(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "encoding"));
}


void HTMLFormElement_set_encoding(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "encoding", value);
}


jb_DOMString HTMLFormElement_method(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "method"));
}


void HTMLFormElement_set_method(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "method", value);
}


jb_DOMString HTMLFormElement_name(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLFormElement_set_name(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


bool HTMLFormElement_noValidate(const HTMLFormElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "noValidate"));
}


void HTMLFormElement_set_noValidate(HTMLFormElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "noValidate", value);
}


jb_DOMString HTMLFormElement_target(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "target"));
}


void HTMLFormElement_set_target(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "target", value);
}


jb_DOMString HTMLFormElement_rel(const HTMLFormElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rel"));
}


void HTMLFormElement_set_rel(HTMLFormElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rel", value);
}


DOMTokenList HTMLFormElement_relList(const HTMLFormElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "relList"));
}


HTMLFormControlsCollection HTMLFormElement_elements(const HTMLFormElement *self) {
    return em_Val_as(HTMLFormControlsCollection, em_Val_get(HTMLElement_as_val(self->inner), "elements"));
}


unsigned long HTMLFormElement_length(const HTMLFormElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "length"));
}


jb_Undefined HTMLFormElement_submit(HTMLFormElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "submit"));
}


jb_Undefined HTMLFormElement_requestSubmit(HTMLFormElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestSubmit"));
}


jb_Undefined HTMLFormElement_requestSubmit(HTMLFormElement* self , const HTMLElement* submitter) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestSubmit", em_Val_from(submitter)));
}


jb_Undefined HTMLFormElement_reset(HTMLFormElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "reset"));
}


bool HTMLFormElement_checkValidity(HTMLFormElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLFormElement_reportValidity(HTMLFormElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}

