#include <webbind/HTMLObjectElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/Document.h>
#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(HTMLObjectElement, HTMLElement);


HTMLObjectElement HTMLObjectElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLObjectElement") );
        return HTMLObjectElement_from_val(&vv);
      }


jb_USVString HTMLObjectElement_data(const HTMLObjectElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("data")));
}


void HTMLObjectElement_set_data(HTMLObjectElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_type(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLObjectElement_set_type(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_name(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLObjectElement_set_name(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


HTMLFormElement HTMLObjectElement_form(const HTMLObjectElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_DOMString HTMLObjectElement_width(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLObjectElement_set_width(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_height(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLObjectElement_set_height(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


Document HTMLObjectElement_contentDocument(const HTMLObjectElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentDocument")));
}


jb_Any HTMLObjectElement_contentWindow(const HTMLObjectElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentWindow")));
}


Document HTMLObjectElement_getSVGDocument(HTMLObjectElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


bool HTMLObjectElement_willValidate(const HTMLObjectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLObjectElement_validity(const HTMLObjectElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_DOMString HTMLObjectElement_validationMessage(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLObjectElement_checkValidity(HTMLObjectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLObjectElement_reportValidity(HTMLObjectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLObjectElement_setCustomValidity(HTMLObjectElement* self , jb_DOMString * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


jb_DOMString HTMLObjectElement_align(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLObjectElement_set_align(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_archive(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("archive")));
}


void HTMLObjectElement_set_archive(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("archive"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_code(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("code")));
}


void HTMLObjectElement_set_code(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("code"), em_Val_from(value));
}


bool HTMLObjectElement_declare(const HTMLObjectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("declare")));
}


void HTMLObjectElement_set_declare(HTMLObjectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("declare"), em_Val_from(value));
}


unsigned long HTMLObjectElement_hspace(const HTMLObjectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("hspace")));
}


void HTMLObjectElement_set_hspace(HTMLObjectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("hspace"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_standby(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("standby")));
}


void HTMLObjectElement_set_standby(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("standby"), em_Val_from(value));
}


unsigned long HTMLObjectElement_vspace(const HTMLObjectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vspace")));
}


void HTMLObjectElement_set_vspace(HTMLObjectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vspace"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_codeBase(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("codeBase")));
}


void HTMLObjectElement_set_codeBase(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("codeBase"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_codeType(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("codeType")));
}


void HTMLObjectElement_set_codeType(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("codeType"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_useMap(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("useMap")));
}


void HTMLObjectElement_set_useMap(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("useMap"), em_Val_from(value));
}


jb_DOMString HTMLObjectElement_border(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("border")));
}


void HTMLObjectElement_set_border(HTMLObjectElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("border"), em_Val_from(value));
}

