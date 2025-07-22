#include <webbind/HTMLSelectElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/HTMLOptionsCollection.h>
#include <webbind/HTMLOptionElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLSelectElement, HTMLElement);


HTMLSelectElement HTMLSelectElement_new() : HTMLElement(em_Val_global("HTMLSelectElement").new_()) {
        return HTMLSelectElement(em_Val_new(em_Val_global("HTMLSelectElement", ));
      }


jb_DOMString HTMLSelectElement_autocomplete(const HTMLSelectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "autocomplete"));
}


void HTMLSelectElement_set_autocomplete(HTMLSelectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "autocomplete", value);
}


bool HTMLSelectElement_disabled(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLSelectElement_set_disabled(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLSelectElement_form(const HTMLSelectElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


bool HTMLSelectElement_multiple(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "multiple"));
}


void HTMLSelectElement_set_multiple(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "multiple", value);
}


jb_DOMString HTMLSelectElement_name(const HTMLSelectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLSelectElement_set_name(HTMLSelectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


bool HTMLSelectElement_required(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "required"));
}


void HTMLSelectElement_set_required(HTMLSelectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "required", value);
}


unsigned long HTMLSelectElement_size(const HTMLSelectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "size"));
}


void HTMLSelectElement_set_size(HTMLSelectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "size", value);
}


jb_DOMString HTMLSelectElement_type(const HTMLSelectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


HTMLOptionsCollection HTMLSelectElement_options(const HTMLSelectElement *self) {
    return em_Val_as(HTMLOptionsCollection, em_Val_get(HTMLElement_as_val(self->inner), "options"));
}


unsigned long HTMLSelectElement_length(const HTMLSelectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "length"));
}


void HTMLSelectElement_set_length(HTMLSelectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "length", value);
}


HTMLOptionElement HTMLSelectElement_item(HTMLSelectElement* self , unsigned long index) {
    return em_Val_as(HTMLOptionElement, em_Val_call(HTMLElement_as_val(self->inner), "item", em_Val_from(index)));
}


HTMLOptionElement HTMLSelectElement_namedItem(HTMLSelectElement* self , const jb_DOMString* name) {
    return em_Val_as(HTMLOptionElement, em_Val_call(HTMLElement_as_val(self->inner), "namedItem", em_Val_from(name)));
}


jb_Undefined HTMLSelectElement_add(HTMLSelectElement* self , const jb_Any* element) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "add", em_Val_from(element)));
}


jb_Undefined HTMLSelectElement_add(HTMLSelectElement* self , const jb_Any* element, const jb_Any* before) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "add", em_Val_from(element), em_Val_from(before)));
}


jb_Undefined HTMLSelectElement_remove(HTMLSelectElement* self , long index) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "remove", em_Val_from(index)));
}


HTMLCollection HTMLSelectElement_selectedOptions(const HTMLSelectElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "selectedOptions"));
}


long HTMLSelectElement_selectedIndex(const HTMLSelectElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "selectedIndex"));
}


void HTMLSelectElement_set_selectedIndex(HTMLSelectElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectedIndex", value);
}


jb_DOMString HTMLSelectElement_value(const HTMLSelectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLSelectElement_set_value(HTMLSelectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


bool HTMLSelectElement_willValidate(const HTMLSelectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLSelectElement_validity(const HTMLSelectElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLSelectElement_validationMessage(const HTMLSelectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLSelectElement_checkValidity(HTMLSelectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLSelectElement_reportValidity(HTMLSelectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLSelectElement_setCustomValidity(HTMLSelectElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


jb_Undefined HTMLSelectElement_showPicker(HTMLSelectElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showPicker"));
}


NodeList HTMLSelectElement_labels(const HTMLSelectElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}

