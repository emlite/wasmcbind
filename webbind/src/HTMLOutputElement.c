#include <webbind/HTMLOutputElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLOutputElement, HTMLElement);


HTMLOutputElement HTMLOutputElement_new() : HTMLElement(em_Val_global("HTMLOutputElement").new_()) {
        return HTMLOutputElement(em_Val_new(em_Val_global("HTMLOutputElement", ));
      }


DOMTokenList HTMLOutputElement_htmlFor(const HTMLOutputElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "htmlFor"));
}


HTMLFormElement HTMLOutputElement_form(const HTMLOutputElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLOutputElement_name(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLOutputElement_set_name(HTMLOutputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLOutputElement_type(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


jb_DOMString HTMLOutputElement_defaultValue(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "defaultValue"));
}


void HTMLOutputElement_set_defaultValue(HTMLOutputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultValue", value);
}


jb_DOMString HTMLOutputElement_value(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLOutputElement_set_value(HTMLOutputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


bool HTMLOutputElement_willValidate(const HTMLOutputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLOutputElement_validity(const HTMLOutputElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLOutputElement_validationMessage(const HTMLOutputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLOutputElement_checkValidity(HTMLOutputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLOutputElement_reportValidity(HTMLOutputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLOutputElement_setCustomValidity(HTMLOutputElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLOutputElement_labels(const HTMLOutputElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}

