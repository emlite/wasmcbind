#include <webbind/HTMLFieldSetElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(HTMLFieldSetElement, HTMLElement);


HTMLFieldSetElement HTMLFieldSetElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFieldSetElement") );
        return HTMLFieldSetElement_from_val(&vv);
      }


bool HTMLFieldSetElement_disabled(const HTMLFieldSetElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLFieldSetElement_set_disabled(HTMLFieldSetElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLFieldSetElement_form(const HTMLFieldSetElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_DOMString HTMLFieldSetElement_name(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLFieldSetElement_set_name(HTMLFieldSetElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_DOMString HTMLFieldSetElement_type(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


HTMLCollection HTMLFieldSetElement_elements(const HTMLFieldSetElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("elements")));
}


bool HTMLFieldSetElement_willValidate(const HTMLFieldSetElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLFieldSetElement_validity(const HTMLFieldSetElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_DOMString HTMLFieldSetElement_validationMessage(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLFieldSetElement_checkValidity(HTMLFieldSetElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLFieldSetElement_reportValidity(HTMLFieldSetElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLFieldSetElement_setCustomValidity(HTMLFieldSetElement* self , jb_DOMString * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}

