#include <webbind/HTMLElement.h>
#include <webbind/ElementInternals.h>
#include <webbind/EditContext.h>
#include <webbind/CSSStyleDeclaration.h>
#include <webbind/DOMStringMap.h>
#include <webbind/SVGElement.h>


DEFINE_EMLITE_TYPE(ShowPopoverOptions, em_Val);


HTMLElement ShowPopoverOptions_source(const ShowPopoverOptions *self) {
    return em_Val_as(HTMLElement, em_Val_get(em_Val_as_val(self->inner), "source"));
}


void ShowPopoverOptions_set_source(ShowPopoverOptions* self, const HTMLElement* value) {
    em_Val_set(em_Val_as_val(self->inner), "source", value);
}

DEFINE_EMLITE_TYPE(HTMLElement, Element);


HTMLElement HTMLElement_new() : Element(em_Val_global("HTMLElement").new_()) {
        return HTMLElement(em_Val_new(em_Val_global("HTMLElement", ));
      }


jb_DOMString HTMLElement_title(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "title"));
}


void HTMLElement_set_title(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "title", value);
}


jb_DOMString HTMLElement_lang(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "lang"));
}


void HTMLElement_set_lang(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "lang", value);
}


bool HTMLElement_translate(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "translate"));
}


void HTMLElement_set_translate(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "translate", value);
}


jb_DOMString HTMLElement_dir(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "dir"));
}


void HTMLElement_set_dir(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "dir", value);
}


jb_Any HTMLElement_hidden(const HTMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), "hidden"));
}


void HTMLElement_set_hidden(HTMLElement* self, const jb_Any* value) {
    em_Val_set(Element_as_val(self->inner), "hidden", value);
}


bool HTMLElement_inert(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "inert"));
}


void HTMLElement_set_inert(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "inert", value);
}


jb_Undefined HTMLElement_click(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "click"));
}


jb_DOMString HTMLElement_accessKey(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "accessKey"));
}


void HTMLElement_set_accessKey(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "accessKey", value);
}


jb_DOMString HTMLElement_accessKeyLabel(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "accessKeyLabel"));
}


bool HTMLElement_draggable(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "draggable"));
}


void HTMLElement_set_draggable(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "draggable", value);
}


bool HTMLElement_spellcheck(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "spellcheck"));
}


void HTMLElement_set_spellcheck(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "spellcheck", value);
}


jb_DOMString HTMLElement_writingSuggestions(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "writingSuggestions"));
}


void HTMLElement_set_writingSuggestions(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "writingSuggestions", value);
}


jb_DOMString HTMLElement_autocapitalize(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "autocapitalize"));
}


void HTMLElement_set_autocapitalize(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "autocapitalize", value);
}


bool HTMLElement_autocorrect(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "autocorrect"));
}


void HTMLElement_set_autocorrect(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "autocorrect", value);
}


jb_DOMString HTMLElement_innerText(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "innerText"));
}


void HTMLElement_set_innerText(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "innerText", value);
}


jb_DOMString HTMLElement_outerText(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "outerText"));
}


void HTMLElement_set_outerText(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "outerText", value);
}


ElementInternals HTMLElement_attachInternals(HTMLElement* self ) {
    return em_Val_as(ElementInternals, em_Val_call(Element_as_val(self->inner), "attachInternals"));
}


jb_Undefined HTMLElement_showPopover(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "showPopover"));
}


jb_Undefined HTMLElement_showPopover(HTMLElement* self , const ShowPopoverOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "showPopover", em_Val_from(options)));
}


jb_Undefined HTMLElement_hidePopover(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "hidePopover"));
}


bool HTMLElement_togglePopover(HTMLElement* self ) {
    return em_Val_as(bool, em_Val_call(Element_as_val(self->inner), "togglePopover"));
}


bool HTMLElement_togglePopover(HTMLElement* self , const jb_Any* options) {
    return em_Val_as(bool, em_Val_call(Element_as_val(self->inner), "togglePopover", em_Val_from(options)));
}


jb_DOMString HTMLElement_popover(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "popover"));
}


void HTMLElement_set_popover(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "popover", value);
}


Element HTMLElement_scrollParent(const HTMLElement *self) {
    return em_Val_as(Element, em_Val_get(Element_as_val(self->inner), "scrollParent"));
}


Element HTMLElement_offsetParent(const HTMLElement *self) {
    return em_Val_as(Element, em_Val_get(Element_as_val(self->inner), "offsetParent"));
}


long HTMLElement_offsetTop(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "offsetTop"));
}


long HTMLElement_offsetLeft(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "offsetLeft"));
}


long HTMLElement_offsetWidth(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "offsetWidth"));
}


long HTMLElement_offsetHeight(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "offsetHeight"));
}


EditContext HTMLElement_editContext(const HTMLElement *self) {
    return em_Val_as(EditContext, em_Val_get(Element_as_val(self->inner), "editContext"));
}


void HTMLElement_set_editContext(HTMLElement* self, const EditContext* value) {
    em_Val_set(Element_as_val(self->inner), "editContext", value);
}


CSSStyleProperties HTMLElement_style(const HTMLElement *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(Element_as_val(self->inner), "style"));
}


jb_Any HTMLElement_onbeforexrselect(const HTMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), "onbeforexrselect"));
}


void HTMLElement_set_onbeforexrselect(HTMLElement* self, const jb_Any* value) {
    em_Val_set(Element_as_val(self->inner), "onbeforexrselect", value);
}


jb_DOMString HTMLElement_virtualKeyboardPolicy(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "virtualKeyboardPolicy"));
}


void HTMLElement_set_virtualKeyboardPolicy(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "virtualKeyboardPolicy", value);
}


DOMStringMap HTMLElement_dataset(const HTMLElement *self) {
    return em_Val_as(DOMStringMap, em_Val_get(Element_as_val(self->inner), "dataset"));
}


jb_DOMString HTMLElement_nonce(const HTMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "nonce"));
}


void HTMLElement_set_nonce(HTMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "nonce", value);
}


bool HTMLElement_autofocus(const HTMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "autofocus"));
}


void HTMLElement_set_autofocus(HTMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "autofocus", value);
}


long HTMLElement_tabIndex(const HTMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "tabIndex"));
}


void HTMLElement_set_tabIndex(HTMLElement* self, long value) {
    em_Val_set(Element_as_val(self->inner), "tabIndex", value);
}


jb_Undefined HTMLElement_focus(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus"));
}


jb_Undefined HTMLElement_focus(HTMLElement* self , const FocusOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus", em_Val_from(options)));
}


jb_Undefined HTMLElement_blur(HTMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "blur"));
}

