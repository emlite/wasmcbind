#include <webcbind/HTMLButtonElement.h>

#include <webcbind/Element.h>
#include <webcbind/HTMLFormElement.h>
#include <webcbind/ValidityState.h>
#include <webcbind/NodeList.h>

DEFINE_EMLITE_TYPE(HTMLButtonElement, HTMLElement);


HTMLButtonElement HTMLButtonElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLButtonElement") );
        return HTMLButtonElement_from_val(&vv);
      }


jb_String HTMLButtonElement_command(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("command")));
}


void HTMLButtonElement_set_command(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("command"), em_Val_from(value));
}


Element HTMLButtonElement_commandForElement(const HTMLButtonElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("commandForElement")));
}


void HTMLButtonElement_set_commandForElement(HTMLButtonElement* self, Element * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("commandForElement"), em_Val_from(value));
}


bool HTMLButtonElement_disabled(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLButtonElement_set_disabled(HTMLButtonElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLButtonElement_form(const HTMLButtonElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


jb_String HTMLButtonElement_formAction(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formAction")));
}


void HTMLButtonElement_set_formAction(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formAction"), em_Val_from(value));
}


jb_String HTMLButtonElement_formEnctype(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formEnctype")));
}


void HTMLButtonElement_set_formEnctype(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formEnctype"), em_Val_from(value));
}


jb_String HTMLButtonElement_formMethod(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formMethod")));
}


void HTMLButtonElement_set_formMethod(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formMethod"), em_Val_from(value));
}


bool HTMLButtonElement_formNoValidate(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formNoValidate")));
}


void HTMLButtonElement_set_formNoValidate(HTMLButtonElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formNoValidate"), em_Val_from(value));
}


jb_String HTMLButtonElement_formTarget(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formTarget")));
}


void HTMLButtonElement_set_formTarget(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formTarget"), em_Val_from(value));
}


jb_String HTMLButtonElement_name(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLButtonElement_set_name(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLButtonElement_type(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLButtonElement_set_type(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLButtonElement_value(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLButtonElement_set_value(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


bool HTMLButtonElement_willValidate(const HTMLButtonElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLButtonElement_validity(const HTMLButtonElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_String HTMLButtonElement_validationMessage(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLButtonElement_checkValidity(HTMLButtonElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLButtonElement_reportValidity(HTMLButtonElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLButtonElement_setCustomValidity(HTMLButtonElement* self , jb_String * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLButtonElement_labels(const HTMLButtonElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}


Element HTMLButtonElement_popoverTargetElement(const HTMLButtonElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetElement")));
}


void HTMLButtonElement_set_popoverTargetElement(HTMLButtonElement* self, Element * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetElement"), em_Val_from(value));
}


jb_String HTMLButtonElement_popoverTargetAction(const HTMLButtonElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetAction")));
}


void HTMLButtonElement_set_popoverTargetAction(HTMLButtonElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetAction"), em_Val_from(value));
}

