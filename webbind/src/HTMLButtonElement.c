#include <webbind/HTMLButtonElement.h>
#include <webbind/Element.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLButtonElement, HTMLElement);


HTMLButtonElement HTMLButtonElement_new() : HTMLElement(em_Val_global("HTMLButtonElement").new_()) {
        return HTMLButtonElement(em_Val_new(em_Val_global("HTMLButtonElement", ));
      }


jb_DOMString HTMLButtonElement_command(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "command"));
}


void HTMLButtonElement_set_command(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "command", value);
}


Element HTMLButtonElement_commandForElement(const HTMLButtonElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), "commandForElement"));
}


void HTMLButtonElement_set_commandForElement(HTMLButtonElement* self, const Element* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "commandForElement", value);
}


bool HTMLButtonElement_disabled(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLButtonElement_set_disabled(HTMLButtonElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLButtonElement_form(const HTMLButtonElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_USVString HTMLButtonElement_formAction(const HTMLButtonElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "formAction"));
}


void HTMLButtonElement_set_formAction(HTMLButtonElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formAction", value);
}


jb_DOMString HTMLButtonElement_formEnctype(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formEnctype"));
}


void HTMLButtonElement_set_formEnctype(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formEnctype", value);
}


jb_DOMString HTMLButtonElement_formMethod(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formMethod"));
}


void HTMLButtonElement_set_formMethod(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formMethod", value);
}


bool HTMLButtonElement_formNoValidate(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "formNoValidate"));
}


void HTMLButtonElement_set_formNoValidate(HTMLButtonElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formNoValidate", value);
}


jb_DOMString HTMLButtonElement_formTarget(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formTarget"));
}


void HTMLButtonElement_set_formTarget(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formTarget", value);
}


jb_DOMString HTMLButtonElement_name(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLButtonElement_set_name(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLButtonElement_type(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLButtonElement_set_type(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLButtonElement_value(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLButtonElement_set_value(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


bool HTMLButtonElement_willValidate(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLButtonElement_validity(const HTMLButtonElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLButtonElement_validationMessage(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLButtonElement_checkValidity(HTMLButtonElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLButtonElement_reportValidity(HTMLButtonElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLButtonElement_setCustomValidity(HTMLButtonElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLButtonElement_labels(const HTMLButtonElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}


Element HTMLButtonElement_popoverTargetElement(const HTMLButtonElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), "popoverTargetElement"));
}


void HTMLButtonElement_set_popoverTargetElement(HTMLButtonElement* self, const Element* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "popoverTargetElement", value);
}


jb_DOMString HTMLButtonElement_popoverTargetAction(const HTMLButtonElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "popoverTargetAction"));
}


void HTMLButtonElement_set_popoverTargetAction(HTMLButtonElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "popoverTargetAction", value);
}

