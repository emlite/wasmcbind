#include <webbind/HTMLInputElement.h>
#include <webbind/HTMLFormElement.h>
#include <webbind/FileList.h>
#include <webbind/HTMLDataListElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>
#include <webbind/FileSystemEntry.h>
#include <webbind/Element.h>


DEFINE_EMLITE_TYPE(HTMLInputElement, HTMLElement);


HTMLInputElement HTMLInputElement_new() : HTMLElement(em_Val_global("HTMLInputElement").new_()) {
        return HTMLInputElement(em_Val_new(em_Val_global("HTMLInputElement", ));
      }


jb_DOMString HTMLInputElement_accept(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "accept"));
}


void HTMLInputElement_set_accept(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "accept", value);
}


bool HTMLInputElement_alpha(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "alpha"));
}


void HTMLInputElement_set_alpha(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "alpha", value);
}


jb_DOMString HTMLInputElement_alt(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "alt"));
}


void HTMLInputElement_set_alt(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "alt", value);
}


jb_DOMString HTMLInputElement_autocomplete(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "autocomplete"));
}


void HTMLInputElement_set_autocomplete(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "autocomplete", value);
}


bool HTMLInputElement_defaultChecked(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "defaultChecked"));
}


void HTMLInputElement_set_defaultChecked(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultChecked", value);
}


bool HTMLInputElement_checked(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "checked"));
}


void HTMLInputElement_set_checked(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "checked", value);
}


jb_DOMString HTMLInputElement_colorSpace(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "colorSpace"));
}


void HTMLInputElement_set_colorSpace(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "colorSpace", value);
}


jb_DOMString HTMLInputElement_dirName(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "dirName"));
}


void HTMLInputElement_set_dirName(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "dirName", value);
}


bool HTMLInputElement_disabled(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "disabled"));
}


void HTMLInputElement_set_disabled(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "disabled", value);
}


HTMLFormElement HTMLInputElement_form(const HTMLInputElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), "form"));
}


FileList HTMLInputElement_files(const HTMLInputElement *self) {
    return em_Val_as(FileList, em_Val_get(HTMLElement_as_val(self->inner), "files"));
}


void HTMLInputElement_set_files(HTMLInputElement* self, const FileList* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "files", value);
}


jb_USVString HTMLInputElement_formAction(const HTMLInputElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "formAction"));
}


void HTMLInputElement_set_formAction(HTMLInputElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formAction", value);
}


jb_DOMString HTMLInputElement_formEnctype(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formEnctype"));
}


void HTMLInputElement_set_formEnctype(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formEnctype", value);
}


jb_DOMString HTMLInputElement_formMethod(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formMethod"));
}


void HTMLInputElement_set_formMethod(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formMethod", value);
}


bool HTMLInputElement_formNoValidate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "formNoValidate"));
}


void HTMLInputElement_set_formNoValidate(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formNoValidate", value);
}


jb_DOMString HTMLInputElement_formTarget(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "formTarget"));
}


void HTMLInputElement_set_formTarget(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "formTarget", value);
}


unsigned long HTMLInputElement_height(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLInputElement_set_height(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


bool HTMLInputElement_indeterminate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "indeterminate"));
}


void HTMLInputElement_set_indeterminate(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "indeterminate", value);
}


HTMLDataListElement HTMLInputElement_list(const HTMLInputElement *self) {
    return em_Val_as(HTMLDataListElement, em_Val_get(HTMLElement_as_val(self->inner), "list"));
}


jb_DOMString HTMLInputElement_max(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "max"));
}


void HTMLInputElement_set_max(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "max", value);
}


long HTMLInputElement_maxLength(const HTMLInputElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "maxLength"));
}


void HTMLInputElement_set_maxLength(HTMLInputElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "maxLength", value);
}


jb_DOMString HTMLInputElement_min(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "min"));
}


void HTMLInputElement_set_min(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "min", value);
}


long HTMLInputElement_minLength(const HTMLInputElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "minLength"));
}


void HTMLInputElement_set_minLength(HTMLInputElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "minLength", value);
}


bool HTMLInputElement_multiple(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "multiple"));
}


void HTMLInputElement_set_multiple(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "multiple", value);
}


jb_DOMString HTMLInputElement_name(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLInputElement_set_name(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


jb_DOMString HTMLInputElement_pattern(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "pattern"));
}


void HTMLInputElement_set_pattern(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "pattern", value);
}


jb_DOMString HTMLInputElement_placeholder(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "placeholder"));
}


void HTMLInputElement_set_placeholder(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "placeholder", value);
}


bool HTMLInputElement_readOnly(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "readOnly"));
}


void HTMLInputElement_set_readOnly(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "readOnly", value);
}


bool HTMLInputElement_required(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "required"));
}


void HTMLInputElement_set_required(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "required", value);
}


unsigned long HTMLInputElement_size(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "size"));
}


void HTMLInputElement_set_size(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "size", value);
}


jb_USVString HTMLInputElement_src(const HTMLInputElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLInputElement_set_src(HTMLInputElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLInputElement_step(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "step"));
}


void HTMLInputElement_set_step(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "step", value);
}


jb_DOMString HTMLInputElement_type(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLInputElement_set_type(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


jb_DOMString HTMLInputElement_defaultValue(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "defaultValue"));
}


void HTMLInputElement_set_defaultValue(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "defaultValue", value);
}


jb_DOMString HTMLInputElement_value(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "value"));
}


void HTMLInputElement_set_value(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "value", value);
}


jb_Object HTMLInputElement_valueAsDate(const HTMLInputElement *self) {
    return em_Val_as(jb_Object, em_Val_get(HTMLElement_as_val(self->inner), "valueAsDate"));
}


void HTMLInputElement_set_valueAsDate(HTMLInputElement* self, const jb_Object* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "valueAsDate", value);
}


double HTMLInputElement_valueAsNumber(const HTMLInputElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), "valueAsNumber"));
}


void HTMLInputElement_set_valueAsNumber(HTMLInputElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), "valueAsNumber", value);
}


unsigned long HTMLInputElement_width(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLInputElement_set_width(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_Undefined HTMLInputElement_stepUp(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepUp"));
}


jb_Undefined HTMLInputElement_stepUp(HTMLInputElement* self , long n) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepUp", em_Val_from(n)));
}


jb_Undefined HTMLInputElement_stepDown(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepDown"));
}


jb_Undefined HTMLInputElement_stepDown(HTMLInputElement* self , long n) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepDown", em_Val_from(n)));
}


bool HTMLInputElement_willValidate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "willValidate"));
}


ValidityState HTMLInputElement_validity(const HTMLInputElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), "validity"));
}


jb_DOMString HTMLInputElement_validationMessage(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "validationMessage"));
}


bool HTMLInputElement_checkValidity(HTMLInputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLInputElement_reportValidity(HTMLInputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLInputElement_setCustomValidity(HTMLInputElement* self , const jb_DOMString* error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLInputElement_labels(const HTMLInputElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), "labels"));
}


jb_Undefined HTMLInputElement_select(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "select"));
}


unsigned long HTMLInputElement_selectionStart(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "selectionStart"));
}


void HTMLInputElement_set_selectionStart(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionStart", value);
}


unsigned long HTMLInputElement_selectionEnd(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "selectionEnd"));
}


void HTMLInputElement_set_selectionEnd(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionEnd", value);
}


jb_DOMString HTMLInputElement_selectionDirection(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "selectionDirection"));
}


void HTMLInputElement_set_selectionDirection(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "selectionDirection", value);
}


jb_Undefined HTMLInputElement_setRangeText(HTMLInputElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLInputElement_setRangeText(HTMLInputElement* self , const jb_DOMString* replacement, unsigned long start, unsigned long end, const SelectionMode* selectionMode) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end), em_Val_from(selectionMode)));
}


jb_Undefined HTMLInputElement_setSelectionRange(HTMLInputElement* self , unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLInputElement_setSelectionRange(HTMLInputElement* self , unsigned long start, unsigned long end, const jb_DOMString* direction) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end), em_Val_from(direction)));
}


jb_Undefined HTMLInputElement_showPicker(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showPicker"));
}


bool HTMLInputElement_webkitdirectory(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "webkitdirectory"));
}


void HTMLInputElement_set_webkitdirectory(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "webkitdirectory", value);
}


jb_FrozenArray HTMLInputElement_webkitEntries(const HTMLInputElement *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(HTMLElement_as_val(self->inner), "webkitEntries"));
}


jb_DOMString HTMLInputElement_capture(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "capture"));
}


void HTMLInputElement_set_capture(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "capture", value);
}


jb_DOMString HTMLInputElement_align(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLInputElement_set_align(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLInputElement_useMap(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "useMap"));
}


void HTMLInputElement_set_useMap(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "useMap", value);
}


Element HTMLInputElement_popoverTargetElement(const HTMLInputElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), "popoverTargetElement"));
}


void HTMLInputElement_set_popoverTargetElement(HTMLInputElement* self, const Element* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "popoverTargetElement", value);
}


jb_DOMString HTMLInputElement_popoverTargetAction(const HTMLInputElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "popoverTargetAction"));
}


void HTMLInputElement_set_popoverTargetAction(HTMLInputElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "popoverTargetAction", value);
}

