#include <webbind/HTMLElement.h>
#include <webbind/ElementInternals.h>
#include <webbind/EditContext.h>
#include <webbind/CSSStyleDeclaration.h>
#include <webbind/DOMStringMap.h>
#include <webbind/SVGElement.h>


DEFINE_EMLITE_TYPE(ShowPopoverOptions, em_Val);


HTMLElement ShowPopoverOptions_source(const ShowPopoverOptions *self) {
    return em_Val_as(HTMLElement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("source")));
}


void ShowPopoverOptions_set_source(ShowPopoverOptions* self, HTMLElement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(HTMLElement, Element);


HTMLElement HTMLElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLElement") );
        return HTMLElement_from_val(&vv);
      }


jb_DOMString HTMLElement_title(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("title")));
}


void HTMLElement_set_title(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("title"), em_Val_from(value));
}


jb_DOMString HTMLElement_lang(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("lang")));
}


void HTMLElement_set_lang(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


bool HTMLElement_translate(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("translate")));
}


void HTMLElement_set_translate(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("translate"), em_Val_from(value));
}


jb_DOMString HTMLElement_dir(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("dir")));
}


void HTMLElement_set_dir(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("dir"), em_Val_from(value));
}


jb_Any HTMLElement_hidden(const HTMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), em_Val_from("hidden")));
}


void HTMLElement_set_hidden(HTMLElement* self, jb_Any * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("hidden"), em_Val_from(value));
}


bool HTMLElement_inert(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("inert")));
}


void HTMLElement_set_inert(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("inert"), em_Val_from(value));
}


jb_Undefined HTMLElement_click(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "click"));
}


jb_DOMString HTMLElement_accessKey(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("accessKey")));
}


void HTMLElement_set_accessKey(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("accessKey"), em_Val_from(value));
}


jb_DOMString HTMLElement_accessKeyLabel(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("accessKeyLabel")));
}


bool HTMLElement_draggable(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("draggable")));
}


void HTMLElement_set_draggable(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("draggable"), em_Val_from(value));
}


bool HTMLElement_spellcheck(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("spellcheck")));
}


void HTMLElement_set_spellcheck(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("spellcheck"), em_Val_from(value));
}


jb_DOMString HTMLElement_writingSuggestions(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("writingSuggestions")));
}


void HTMLElement_set_writingSuggestions(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("writingSuggestions"), em_Val_from(value));
}


jb_DOMString HTMLElement_autocapitalize(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("autocapitalize")));
}


void HTMLElement_set_autocapitalize(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("autocapitalize"), em_Val_from(value));
}


bool HTMLElement_autocorrect(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("autocorrect")));
}


void HTMLElement_set_autocorrect(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("autocorrect"), em_Val_from(value));
}


jb_DOMString HTMLElement_innerText(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("innerText")));
}


void HTMLElement_set_innerText(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("innerText"), em_Val_from(value));
}


jb_DOMString HTMLElement_outerText(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("outerText")));
}


void HTMLElement_set_outerText(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("outerText"), em_Val_from(value));
}


ElementInternals HTMLElement_attachInternals(HTMLElement* self ) {
    return em_Val_as(ElementInternals, em_Val_call(Element_as_val(self->inner), "attachInternals"));
}


jb_Undefined HTMLElement_showPopover0(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "showPopover"));
}


jb_Undefined HTMLElement_showPopover1(HTMLElement* self , ShowPopoverOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "showPopover", em_Val_from(options)));
}


jb_Undefined HTMLElement_hidePopover(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "hidePopover"));
}


bool HTMLElement_togglePopover0(HTMLElement* self ) {
    return em_Val_as(bool, em_Val_call(Element_as_val(self->inner), "togglePopover"));
}


bool HTMLElement_togglePopover1(HTMLElement* self , jb_Any * options) {
    return em_Val_as(bool, em_Val_call(Element_as_val(self->inner), "togglePopover", em_Val_from(options)));
}


jb_DOMString HTMLElement_popover(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("popover")));
}


void HTMLElement_set_popover(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("popover"), em_Val_from(value));
}


Element HTMLElement_scrollParent(const HTMLElement *self) {
    return em_Val_as(Element, em_Val_get(Element_as_val(self->inner), em_Val_from("scrollParent")));
}


Element HTMLElement_offsetParent(const HTMLElement *self) {
    return em_Val_as(Element, em_Val_get(Element_as_val(self->inner), em_Val_from("offsetParent")));
}


long HTMLElement_offsetTop(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("offsetTop")));
}


long HTMLElement_offsetLeft(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("offsetLeft")));
}


long HTMLElement_offsetWidth(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("offsetWidth")));
}


long HTMLElement_offsetHeight(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("offsetHeight")));
}


EditContext HTMLElement_editContext(const HTMLElement *self) {
    return em_Val_as(EditContext, em_Val_get(Element_as_val(self->inner), em_Val_from("editContext")));
}


void HTMLElement_set_editContext(HTMLElement* self, EditContext * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("editContext"), em_Val_from(value));
}


CSSStyleProperties HTMLElement_style(const HTMLElement *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(Element_as_val(self->inner), em_Val_from("style")));
}


jb_Any HTMLElement_onbeforexrselect(const HTMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), em_Val_from("onbeforexrselect")));
}


void HTMLElement_set_onbeforexrselect(HTMLElement* self, jb_Any * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("onbeforexrselect"), em_Val_from(value));
}


jb_DOMString HTMLElement_virtualKeyboardPolicy(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("virtualKeyboardPolicy")));
}


void HTMLElement_set_virtualKeyboardPolicy(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("virtualKeyboardPolicy"), em_Val_from(value));
}


DOMStringMap HTMLElement_dataset(const HTMLElement *self) {
    return em_Val_as(DOMStringMap, em_Val_get(Element_as_val(self->inner), em_Val_from("dataset")));
}


jb_DOMString HTMLElement_nonce(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("nonce")));
}


void HTMLElement_set_nonce(HTMLElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("nonce"), em_Val_from(value));
}


bool HTMLElement_autofocus(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("autofocus")));
}


void HTMLElement_set_autofocus(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("autofocus"), em_Val_from(value));
}


long HTMLElement_tabIndex(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("tabIndex")));
}


void HTMLElement_set_tabIndex(HTMLElement* self, long value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("tabIndex"), em_Val_from(value));
}


jb_Undefined HTMLElement_focus0(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus"));
}


jb_Undefined HTMLElement_focus1(HTMLElement* self , FocusOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus", em_Val_from(options)));
}


jb_Undefined HTMLElement_blur(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "blur"));
}

