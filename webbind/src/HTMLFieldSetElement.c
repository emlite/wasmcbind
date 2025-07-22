#include <webbind/HTMLFieldSetElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/HTMLCollection.h>
#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(HTMLFieldSetElement, HTMLElement);


HTMLFieldSetElement HTMLFieldSetElement_new() : HTMLElement(em_Val_global("HTMLFieldSetElement").new_()) {
        return HTMLFieldSetElement(em_Val_new(em_Val_global("HTMLFieldSetElement", ));
      }


bool HTMLFieldSetElement_disabled(const HTMLFieldSetElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLFieldSetElement_set_disabled(HTMLFieldSetElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLFieldSetElement_form(const HTMLFieldSetElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLFieldSetElement_name(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLFieldSetElement_set_name(HTMLFieldSetElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLFieldSetElement_type(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


HTMLCollection HTMLFieldSetElement_elements(const HTMLFieldSetElement *self) {
    return em_Val_as(HTMLCollection, em_Val_get(HTMLElement_as_val(self->inner), "elements"));
}


bool HTMLFieldSetElement_willValidate(const HTMLFieldSetElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLFieldSetElement_validity(const HTMLFieldSetElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLFieldSetElement_validationMessage(const HTMLFieldSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLFieldSetElement_checkValidity(HTMLFieldSetElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLFieldSetElement_reportValidity(HTMLFieldSetElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLFieldSetElement_setCustomValidity(HTMLFieldSetElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}

