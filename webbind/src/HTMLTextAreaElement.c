#include <webbind/HTMLTextAreaElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLTextAreaElement, HTMLElement);


HTMLTextAreaElement HTMLTextAreaElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTextAreaElement") );
        return HTMLTextAreaElement_from_val(&vv);
      }


jb_String HTMLTextAreaElement_autocomplete(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("autocomplete")));
}


void HTMLTextAreaElement_set_autocomplete(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("autocomplete"), em_Val_from(value));
}


unsigned long HTMLTextAreaElement_cols(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cols")));
}


void HTMLTextAreaElement_set_cols(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cols"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_dirName(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("dirName")));
}


void HTMLTextAreaElement_set_dirName(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("dirName"), em_Val_from(value));
}


bool HTMLTextAreaElement_disabled(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLTextAreaElement_set_disabled(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLTextAreaElement_form(const HTMLTextAreaElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


long HTMLTextAreaElement_maxLength(const HTMLTextAreaElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("maxLength")));
}


void HTMLTextAreaElement_set_maxLength(HTMLTextAreaElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("maxLength"), em_Val_from(value));
}


long HTMLTextAreaElement_minLength(const HTMLTextAreaElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("minLength")));
}


void HTMLTextAreaElement_set_minLength(HTMLTextAreaElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("minLength"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_name(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLTextAreaElement_set_name(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_placeholder(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("placeholder")));
}


void HTMLTextAreaElement_set_placeholder(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("placeholder"), em_Val_from(value));
}


bool HTMLTextAreaElement_readOnly(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("readOnly")));
}


void HTMLTextAreaElement_set_readOnly(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("readOnly"), em_Val_from(value));
}


bool HTMLTextAreaElement_required(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("required")));
}


void HTMLTextAreaElement_set_required(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("required"), em_Val_from(value));
}


unsigned long HTMLTextAreaElement_rows(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rows")));
}


void HTMLTextAreaElement_set_rows(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rows"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_wrap(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("wrap")));
}


void HTMLTextAreaElement_set_wrap(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("wrap"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_type(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


jb_String HTMLTextAreaElement_defaultValue(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultValue")));
}


void HTMLTextAreaElement_set_defaultValue(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_value(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLTextAreaElement_set_value(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


unsigned long HTMLTextAreaElement_textLength(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("textLength")));
}


bool HTMLTextAreaElement_willValidate(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLTextAreaElement_validity(const HTMLTextAreaElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_String HTMLTextAreaElement_validationMessage(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLTextAreaElement_checkValidity(HTMLTextAreaElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLTextAreaElement_reportValidity(HTMLTextAreaElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLTextAreaElement_setCustomValidity(HTMLTextAreaElement* self , jb_String * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLTextAreaElement_labels(const HTMLTextAreaElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}


jb_Undefined HTMLTextAreaElement_select(HTMLTextAreaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "select"));
}


unsigned long HTMLTextAreaElement_selectionStart(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionStart")));
}


void HTMLTextAreaElement_set_selectionStart(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionStart"), em_Val_from(value));
}


unsigned long HTMLTextAreaElement_selectionEnd(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionEnd")));
}


void HTMLTextAreaElement_set_selectionEnd(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionEnd"), em_Val_from(value));
}


jb_String HTMLTextAreaElement_selectionDirection(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionDirection")));
}


void HTMLTextAreaElement_set_selectionDirection(HTMLTextAreaElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionDirection"), em_Val_from(value));
}


jb_Undefined HTMLTextAreaElement_setRangeText0(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLTextAreaElement_setRangeText1(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end), em_Val_from(selectionMode)));
}


jb_Undefined HTMLTextAreaElement_setSelectionRange0(HTMLTextAreaElement* self , unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLTextAreaElement_setSelectionRange1(HTMLTextAreaElement* self , unsigned long start, unsigned long end, jb_String * direction) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end), em_Val_from(direction)));
}

