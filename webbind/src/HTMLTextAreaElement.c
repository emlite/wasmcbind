#include <webbind/HTMLTextAreaElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>


DEFINE_EMLITE_TYPE(HTMLTextAreaElement, HTMLElement);


HTMLTextAreaElement HTMLTextAreaElement_new() : HTMLElement(em_Val_global("HTMLTextAreaElement").new_()) {
        return HTMLTextAreaElement(em_Val_new(em_Val_global("HTMLTextAreaElement", ));
      }


jb_DOMString HTMLTextAreaElement_autocomplete(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "autocomplete"));
}


void HTMLTextAreaElement_set_autocomplete(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "autocomplete", value);
}


unsigned long HTMLTextAreaElement_cols(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "cols"));
}


void HTMLTextAreaElement_set_cols(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cols", value);
}


jb_DOMString HTMLTextAreaElement_dirName(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "dirName"));
}


void HTMLTextAreaElement_set_dirName(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "dirName", value);
}


bool HTMLTextAreaElement_disabled(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLTextAreaElement_set_disabled(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLTextAreaElement_form(const HTMLTextAreaElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


long HTMLTextAreaElement_maxLength(const HTMLTextAreaElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "maxLength"));
}


void HTMLTextAreaElement_set_maxLength(HTMLTextAreaElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "maxLength", value);
}


long HTMLTextAreaElement_minLength(const HTMLTextAreaElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "minLength"));
}


void HTMLTextAreaElement_set_minLength(HTMLTextAreaElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "minLength", value);
}


jb_DOMString HTMLTextAreaElement_name(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLTextAreaElement_set_name(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLTextAreaElement_placeholder(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "placeholder"));
}


void HTMLTextAreaElement_set_placeholder(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "placeholder", value);
}


bool HTMLTextAreaElement_readOnly(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "readOnly"));
}


void HTMLTextAreaElement_set_readOnly(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "readOnly", value);
}


bool HTMLTextAreaElement_required(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "required"));
}


void HTMLTextAreaElement_set_required(HTMLTextAreaElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "required", value);
}


unsigned long HTMLTextAreaElement_rows(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "rows"));
}


void HTMLTextAreaElement_set_rows(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rows", value);
}


jb_DOMString HTMLTextAreaElement_wrap(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "wrap"));
}


void HTMLTextAreaElement_set_wrap(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "wrap", value);
}


jb_DOMString HTMLTextAreaElement_type(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


jb_DOMString HTMLTextAreaElement_defaultValue(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "defaultValue"));
}


void HTMLTextAreaElement_set_defaultValue(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultValue", value);
}


jb_DOMString HTMLTextAreaElement_value(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLTextAreaElement_set_value(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


unsigned long HTMLTextAreaElement_textLength(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "textLength"));
}


bool HTMLTextAreaElement_willValidate(const HTMLTextAreaElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLTextAreaElement_validity(const HTMLTextAreaElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLTextAreaElement_validationMessage(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLTextAreaElement_checkValidity(HTMLTextAreaElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLTextAreaElement_reportValidity(HTMLTextAreaElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLTextAreaElement_setCustomValidity(HTMLTextAreaElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLTextAreaElement_labels(const HTMLTextAreaElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}


jb_Undefined HTMLTextAreaElement_select(HTMLTextAreaElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "select"));
}


unsigned long HTMLTextAreaElement_selectionStart(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "selectionStart"));
}


void HTMLTextAreaElement_set_selectionStart(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionStart", value);
}


unsigned long HTMLTextAreaElement_selectionEnd(const HTMLTextAreaElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "selectionEnd"));
}


void HTMLTextAreaElement_set_selectionEnd(HTMLTextAreaElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionEnd", value);
}


jb_DOMString HTMLTextAreaElement_selectionDirection(const HTMLTextAreaElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "selectionDirection"));
}


void HTMLTextAreaElement_set_selectionDirection(HTMLTextAreaElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionDirection", value);
}


jb_Undefined HTMLTextAreaElement_setRangeText(HTMLTextAreaElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLTextAreaElement_setRangeText(HTMLTextAreaElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end, const SelectionMode* selectionMode) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end), em_Val_from(selectionMode)));
}


jb_Undefined HTMLTextAreaElement_setSelectionRange(HTMLTextAreaElement* self , unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLTextAreaElement_setSelectionRange(HTMLTextAreaElement* self , unsigned long start, unsigned long end, const jb_DOMString* direction) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end), em_Val_from(direction)));
}

