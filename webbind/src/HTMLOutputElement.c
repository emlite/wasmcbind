#include <webbind/HTMLOutputElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLOutputElement, HTMLElement);


HTMLOutputElement HTMLOutputElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLOutputElement") );
        return HTMLOutputElement_from_val(&vv);
      }


DOMTokenList HTMLOutputElement_htmlFor(const HTMLOutputElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("htmlFor")));
}


HTMLFormElement HTMLOutputElement_form(const HTMLOutputElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_DOMString HTMLOutputElement_name(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLOutputElement_set_name(HTMLOutputElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_DOMString HTMLOutputElement_type(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


jb_DOMString HTMLOutputElement_defaultValue(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultValue")));
}


void HTMLOutputElement_set_defaultValue(HTMLOutputElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}


jb_DOMString HTMLOutputElement_value(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLOutputElement_set_value(HTMLOutputElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


bool HTMLOutputElement_willValidate(const HTMLOutputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLOutputElement_validity(const HTMLOutputElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_DOMString HTMLOutputElement_validationMessage(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLOutputElement_checkValidity(HTMLOutputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLOutputElement_reportValidity(HTMLOutputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLOutputElement_setCustomValidity(HTMLOutputElement* self , jb_DOMString * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLOutputElement_labels(const HTMLOutputElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}

