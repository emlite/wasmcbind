#include <webbind/HTMLSelectElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/HTMLOptionsCollection.h>
#include <webbind/HTMLOptionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLSelectElement, HTMLElement);


HTMLSelectElement HTMLSelectElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLSelectElement") );
        return HTMLSelectElement_from_val(&vv);
      }


jb_String HTMLSelectElement_autocomplete(const HTMLSelectElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("autocomplete")));
}


void HTMLSelectElement_set_autocomplete(HTMLSelectElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("autocomplete"), em_Val_from(value));
}


bool HTMLSelectElement_disabled(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLSelectElement_set_disabled(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLSelectElement_form(const HTMLSelectElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


bool HTMLSelectElement_multiple(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("multiple")));
}


void HTMLSelectElement_set_multiple(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}


jb_String HTMLSelectElement_name(const HTMLSelectElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLSelectElement_set_name(HTMLSelectElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


bool HTMLSelectElement_required(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("required")));
}


void HTMLSelectElement_set_required(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("required"), em_Val_from(value));
}


unsigned long HTMLSelectElement_size(const HTMLSelectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("size")));
}


void HTMLSelectElement_set_size(HTMLSelectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_String HTMLSelectElement_type(const HTMLSelectElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


HTMLOptionsCollection HTMLSelectElement_options(const HTMLSelectElement *self) {
    return em_Val_as(HTMLOptionsCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("options")));
}


unsigned long HTMLSelectElement_length(const HTMLSelectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("length")));
}


void HTMLSelectElement_set_length(HTMLSelectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


HTMLOptionElement HTMLSelectElement_item(HTMLSelectElement* self , unsigned long index) {
    return em_Val_as(HTMLOptionElement, em_Val_call(HTMLElement_as_val(self->inner), "item", em_Val_from(index)));
}


HTMLOptionElement HTMLSelectElement_namedItem(HTMLSelectElement* self , jb_String * name) {
    return em_Val_as(HTMLOptionElement, em_Val_call(HTMLElement_as_val(self->inner), "namedItem", em_Val_from(name)));
}


jb_Undefined HTMLSelectElement_add0(HTMLSelectElement* self , jb_Any * element) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "add", em_Val_from(element)));
}


jb_Undefined HTMLSelectElement_add1(HTMLSelectElement* self , jb_Any * element, jb_Any * before) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "add", em_Val_from(element), em_Val_from(before)));
}


jb_Undefined HTMLSelectElement_remove(HTMLSelectElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "remove", em_Val_from(index)));
}


HTMLCollection HTMLSelectElement_selectedOptions(const HTMLSelectElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectedOptions")));
}


long HTMLSelectElement_selectedIndex(const HTMLSelectElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectedIndex")));
}


void HTMLSelectElement_set_selectedIndex(HTMLSelectElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectedIndex"), em_Val_from(value));
}


jb_String HTMLSelectElement_value(const HTMLSelectElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLSelectElement_set_value(HTMLSelectElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


bool HTMLSelectElement_willValidate(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLSelectElement_validity(const HTMLSelectElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_String HTMLSelectElement_validationMessage(const HTMLSelectElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLSelectElement_checkValidity(HTMLSelectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLSelectElement_reportValidity(HTMLSelectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLSelectElement_setCustomValidity(HTMLSelectElement* self , jb_String * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


jb_Undefined HTMLSelectElement_showPicker(HTMLSelectElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showPicker"));
}


NodeList HTMLSelectElement_labels(const HTMLSelectElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}

