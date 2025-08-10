#include <webbind/HTMLInputElement.h>

#include <webbind/HTMLFormElement.h>
#include <webbind/FileList.h>
#include <webbind/HTMLDataListElement.h>
#include <webbind/ValidityState.h>
#include <webbind/NodeList.h>
#include <webbind/FileSystemEntry.h>
#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(HTMLInputElement, HTMLElement);


HTMLInputElement HTMLInputElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLInputElement") );
        return HTMLInputElement_from_val(&vv);
      }


jb_String HTMLInputElement_accept(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("accept")));
}


void HTMLInputElement_set_accept(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("accept"), em_Val_from(value));
}


bool HTMLInputElement_alpha(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("alpha")));
}


void HTMLInputElement_set_alpha(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


jb_String HTMLInputElement_alt(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("alt")));
}


void HTMLInputElement_set_alt(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("alt"), em_Val_from(value));
}


jb_String HTMLInputElement_autocomplete(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("autocomplete")));
}


void HTMLInputElement_set_autocomplete(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("autocomplete"), em_Val_from(value));
}


bool HTMLInputElement_defaultChecked(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultChecked")));
}


void HTMLInputElement_set_defaultChecked(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultChecked"), em_Val_from(value));
}


bool HTMLInputElement_checked(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("checked")));
}


void HTMLInputElement_set_checked(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("checked"), em_Val_from(value));
}


jb_String HTMLInputElement_colorSpace(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("colorSpace")));
}


void HTMLInputElement_set_colorSpace(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


jb_String HTMLInputElement_dirName(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("dirName")));
}


void HTMLInputElement_set_dirName(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("dirName"), em_Val_from(value));
}


bool HTMLInputElement_disabled(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("disabled")));
}


void HTMLInputElement_set_disabled(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("disabled"), em_Val_from(value));
}


HTMLFormElement HTMLInputElement_form(const HTMLInputElement *self) {
    return em_Val_as(HTMLFormElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("form")));
}


FileList HTMLInputElement_files(const HTMLInputElement *self) {
    return em_Val_as(FileList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("files")));
}


void HTMLInputElement_set_files(HTMLInputElement* self, FileList * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("files"), em_Val_from(value));
}


jb_String HTMLInputElement_formAction(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formAction")));
}


void HTMLInputElement_set_formAction(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formAction"), em_Val_from(value));
}


jb_String HTMLInputElement_formEnctype(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formEnctype")));
}


void HTMLInputElement_set_formEnctype(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formEnctype"), em_Val_from(value));
}


jb_String HTMLInputElement_formMethod(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formMethod")));
}


void HTMLInputElement_set_formMethod(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formMethod"), em_Val_from(value));
}


bool HTMLInputElement_formNoValidate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formNoValidate")));
}


void HTMLInputElement_set_formNoValidate(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formNoValidate"), em_Val_from(value));
}


jb_String HTMLInputElement_formTarget(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("formTarget")));
}


void HTMLInputElement_set_formTarget(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("formTarget"), em_Val_from(value));
}


unsigned long HTMLInputElement_height(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLInputElement_set_height(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


bool HTMLInputElement_indeterminate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("indeterminate")));
}


void HTMLInputElement_set_indeterminate(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("indeterminate"), em_Val_from(value));
}


HTMLDataListElement HTMLInputElement_list(const HTMLInputElement *self) {
    return em_Val_as(HTMLDataListElement, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("list")));
}


jb_String HTMLInputElement_max(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("max")));
}


void HTMLInputElement_set_max(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("max"), em_Val_from(value));
}


long HTMLInputElement_maxLength(const HTMLInputElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("maxLength")));
}


void HTMLInputElement_set_maxLength(HTMLInputElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("maxLength"), em_Val_from(value));
}


jb_String HTMLInputElement_min(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("min")));
}


void HTMLInputElement_set_min(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("min"), em_Val_from(value));
}


long HTMLInputElement_minLength(const HTMLInputElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("minLength")));
}


void HTMLInputElement_set_minLength(HTMLInputElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("minLength"), em_Val_from(value));
}


bool HTMLInputElement_multiple(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("multiple")));
}


void HTMLInputElement_set_multiple(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("multiple"), em_Val_from(value));
}


jb_String HTMLInputElement_name(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLInputElement_set_name(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String HTMLInputElement_pattern(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("pattern")));
}


void HTMLInputElement_set_pattern(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("pattern"), em_Val_from(value));
}


jb_String HTMLInputElement_placeholder(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("placeholder")));
}


void HTMLInputElement_set_placeholder(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("placeholder"), em_Val_from(value));
}


bool HTMLInputElement_readOnly(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("readOnly")));
}


void HTMLInputElement_set_readOnly(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("readOnly"), em_Val_from(value));
}


bool HTMLInputElement_required(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("required")));
}


void HTMLInputElement_set_required(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("required"), em_Val_from(value));
}


unsigned long HTMLInputElement_size(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("size")));
}


void HTMLInputElement_set_size(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


jb_String HTMLInputElement_src(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLInputElement_set_src(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLInputElement_step(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("step")));
}


void HTMLInputElement_set_step(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("step"), em_Val_from(value));
}


jb_String HTMLInputElement_type(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLInputElement_set_type(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String HTMLInputElement_defaultValue(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("defaultValue")));
}


void HTMLInputElement_set_defaultValue(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("defaultValue"), em_Val_from(value));
}


jb_String HTMLInputElement_value(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLInputElement_set_value(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_Object HTMLInputElement_valueAsDate(const HTMLInputElement *self) {
    return em_Val_as(jb_Object, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("valueAsDate")));
}


void HTMLInputElement_set_valueAsDate(HTMLInputElement* self, jb_Object * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("valueAsDate"), em_Val_from(value));
}


double HTMLInputElement_valueAsNumber(const HTMLInputElement *self) {
    return em_Val_as(double, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("valueAsNumber")));
}


void HTMLInputElement_set_valueAsNumber(HTMLInputElement* self, double value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("valueAsNumber"), em_Val_from(value));
}


unsigned long HTMLInputElement_width(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLInputElement_set_width(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_Undefined HTMLInputElement_stepUp0(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepUp"));
}


jb_Undefined HTMLInputElement_stepUp1(HTMLInputElement* self , long n) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepUp", em_Val_from(n)));
}


jb_Undefined HTMLInputElement_stepDown0(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepDown"));
}


jb_Undefined HTMLInputElement_stepDown1(HTMLInputElement* self , long n) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "stepDown", em_Val_from(n)));
}


bool HTMLInputElement_willValidate(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("willValidate")));
}


ValidityState HTMLInputElement_validity(const HTMLInputElement *self) {
    return em_Val_as(ValidityState, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validity")));
}


jb_String HTMLInputElement_validationMessage(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("validationMessage")));
}


bool HTMLInputElement_checkValidity(HTMLInputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "checkValidity"));
}


bool HTMLInputElement_reportValidity(HTMLInputElement* self ) {
    return em_Val_as(bool, em_Val_call(HTMLElement_as_val(self->inner), "reportValidity"));
}


jb_Undefined HTMLInputElement_setCustomValidity(HTMLInputElement* self , jb_String * error) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setCustomValidity", em_Val_from(error)));
}


NodeList HTMLInputElement_labels(const HTMLInputElement *self) {
    return em_Val_as(NodeList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("labels")));
}


jb_Undefined HTMLInputElement_select(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "select"));
}


unsigned long HTMLInputElement_selectionStart(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionStart")));
}


void HTMLInputElement_set_selectionStart(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionStart"), em_Val_from(value));
}


unsigned long HTMLInputElement_selectionEnd(const HTMLInputElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionEnd")));
}


void HTMLInputElement_set_selectionEnd(HTMLInputElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionEnd"), em_Val_from(value));
}


jb_String HTMLInputElement_selectionDirection(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("selectionDirection")));
}


void HTMLInputElement_set_selectionDirection(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("selectionDirection"), em_Val_from(value));
}


jb_Undefined HTMLInputElement_setRangeText0(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLInputElement_setRangeText1(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setRangeText", em_Val_from(replacement), em_Val_from(start), em_Val_from(end), em_Val_from(selectionMode)));
}


jb_Undefined HTMLInputElement_setSelectionRange0(HTMLInputElement* self , unsigned long start, unsigned long end) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined HTMLInputElement_setSelectionRange1(HTMLInputElement* self , unsigned long start, unsigned long end, jb_String * direction) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "setSelectionRange", em_Val_from(start), em_Val_from(end), em_Val_from(direction)));
}


jb_Undefined HTMLInputElement_showPicker(HTMLInputElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "showPicker"));
}


bool HTMLInputElement_webkitdirectory(const HTMLInputElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("webkitdirectory")));
}


void HTMLInputElement_set_webkitdirectory(HTMLInputElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("webkitdirectory"), em_Val_from(value));
}


jb_Array HTMLInputElement_webkitEntries(const HTMLInputElement *self) {
    return em_Val_as(jb_Array, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("webkitEntries")));
}


jb_String HTMLInputElement_capture(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("capture")));
}


void HTMLInputElement_set_capture(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("capture"), em_Val_from(value));
}


jb_String HTMLInputElement_align(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLInputElement_set_align(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_String HTMLInputElement_useMap(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("useMap")));
}


void HTMLInputElement_set_useMap(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("useMap"), em_Val_from(value));
}


Element HTMLInputElement_popoverTargetElement(const HTMLInputElement *self) {
    return em_Val_as(Element, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetElement")));
}


void HTMLInputElement_set_popoverTargetElement(HTMLInputElement* self, Element * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetElement"), em_Val_from(value));
}


jb_String HTMLInputElement_popoverTargetAction(const HTMLInputElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetAction")));
}


void HTMLInputElement_set_popoverTargetAction(HTMLInputElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("popoverTargetAction"), em_Val_from(value));
}

