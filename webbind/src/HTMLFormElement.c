#include <webbind/HTMLFormElement.h>

#include <webbind/DOMTokenList.h>
#include <webbind/HTMLFormControlsCollection.h>

DEFINE_EMLITE_TYPE(HTMLFormElement, HTMLElement);


HTMLFormElement HTMLFormElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFormElement") );
        return HTMLFormElement_from_val(&vv);
      }


jb_String HTMLFormElement_acceptCharset(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("acceptCharset")));
}


void HTMLFormElement_set_acceptCharset(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("acceptCharset"), em_Val_from(value));
}


jb_String HTMLFormElement_action(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("action")));
}


void HTMLFormElement_set_action(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("action"), em_Val_from(value));
}


jb_String HTMLFormElement_autocomplete(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("autocomplete")));
}


void HTMLFormElement_set_autocomplete(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("autocomplete"), em_Val_from(value));
}


jb_String HTMLFormElement_enctype(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("enctype")));
}


void HTMLFormElement_set_enctype(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("enctype"), em_Val_from(value));
}


jb_String HTMLFormElement_encoding(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("encoding")));
}


void HTMLFormElement_set_encoding(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("encoding"), em_Val_from(value));
}


jb_String HTMLFormElement_method(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("method")));
}


void HTMLFormElement_set_method(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("method"), em_Val_from(value));
}


jb_String HTMLFormElement_name(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLFormElement_set_name(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


bool HTMLFormElement_noValidate(const HTMLFormElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("noValidate")));
}


void HTMLFormElement_set_noValidate(HTMLFormElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("noValidate"), em_Val_from(value));
}


jb_String HTMLFormElement_target(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("target")));
}


void HTMLFormElement_set_target(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("target"), em_Val_from(value));
}


jb_String HTMLFormElement_rel(const HTMLFormElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rel")));
}


void HTMLFormElement_set_rel(HTMLFormElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rel"), em_Val_from(value));
}


DOMTokenList HTMLFormElement_relList(const HTMLFormElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("relList")));
}


HTMLFormControlsCollection HTMLFormElement_elements(const HTMLFormElement *self) {
    return em_Val_as(HTMLFormControlsCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("elements")));
}


unsigned long HTMLFormElement_length(const HTMLFormElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("length")));
}


jb_Undefined HTMLFormElement_submit(HTMLFormElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "submit"));
}


jb_Undefined HTMLFormElement_requestSubmit0(HTMLFormElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "requestSubmit"));
}


jb_Undefined HTMLFormElement_requestSubmit1(HTMLFormElement* self , HTMLElement * submitter) {
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

