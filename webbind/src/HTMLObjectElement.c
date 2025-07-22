#include <webbind/HTMLObjectElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/Document.h>
#include <webbind/ValidityState.h>


DEFINE_EMLITE_TYPE(HTMLObjectElement, HTMLElement);


HTMLObjectElement HTMLObjectElement_new() : HTMLElement(em_Val_global("HTMLObjectElement").new_()) {
        return HTMLObjectElement(em_Val_new(em_Val_global("HTMLObjectElement", ));
      }


jb_USVString HTMLObjectElement_data(const HTMLObjectElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "data"));
}


void HTMLObjectElement_set_data(HTMLObjectElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "data", value);
}


jb_DOMString HTMLObjectElement_type(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLObjectElement_set_type(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLObjectElement_name(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLObjectElement_set_name(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


HTMLFormElement HTMLObjectElement_form(const HTMLObjectElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


jb_DOMString HTMLObjectElement_width(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLObjectElement_set_width(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLObjectElement_height(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLObjectElement_set_height(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


Document HTMLObjectElement_contentDocument(const HTMLObjectElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), "contentDocument"));
}


jb_Any HTMLObjectElement_contentWindow(const HTMLObjectElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "contentWindow"));
}


Document HTMLObjectElement_getSVGDocument(HTMLObjectElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


bool HTMLObjectElement_willValidate(const HTMLObjectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLObjectElement_validity(const HTMLObjectElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLObjectElement_validationMessage(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLObjectElement_checkValidity(HTMLObjectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLObjectElement_reportValidity(HTMLObjectElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLObjectElement_setCustomValidity(HTMLObjectElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


jb_DOMString HTMLObjectElement_align(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLObjectElement_set_align(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLObjectElement_archive(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "archive"));
}


void HTMLObjectElement_set_archive(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "archive", value);
}


jb_DOMString HTMLObjectElement_code(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "code"));
}


void HTMLObjectElement_set_code(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "code", value);
}


bool HTMLObjectElement_declare(const HTMLObjectElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "declare"));
}


void HTMLObjectElement_set_declare(HTMLObjectElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "declare", value);
}


unsigned long HTMLObjectElement_hspace(const HTMLObjectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "hspace"));
}


void HTMLObjectElement_set_hspace(HTMLObjectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "hspace", value);
}


jb_DOMString HTMLObjectElement_standby(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "standby"));
}


void HTMLObjectElement_set_standby(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "standby", value);
}


unsigned long HTMLObjectElement_vspace(const HTMLObjectElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "vspace"));
}


void HTMLObjectElement_set_vspace(HTMLObjectElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vspace", value);
}


jb_DOMString HTMLObjectElement_codeBase(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "codeBase"));
}


void HTMLObjectElement_set_codeBase(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "codeBase", value);
}


jb_DOMString HTMLObjectElement_codeType(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "codeType"));
}


void HTMLObjectElement_set_codeType(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "codeType", value);
}


jb_DOMString HTMLObjectElement_useMap(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "useMap"));
}


void HTMLObjectElement_set_useMap(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "useMap", value);
}


jb_DOMString HTMLObjectElement_border(const HTMLObjectElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "border"));
}


void HTMLObjectElement_set_border(HTMLObjectElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "border", value);
}

