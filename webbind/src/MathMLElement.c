#include <webbind/MathMLElement.h>
#include <webbind/CSSStyleDeclaration.h>
#include <webbind/DOMStringMap.h>
#include <webbind/SVGElement.h>


DEFINE_EMLITE_TYPE(MathMLElement, Element);


CSSStyleProperties MathMLElement_style(const MathMLElement *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(Element_as_val(self->inner), "style"));
}


jb_Any MathMLElement_onbeforexrselect(const MathMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), "onbeforexrselect"));
}


void MathMLElement_set_onbeforexrselect(MathMLElement* self, const jb_Any* value) {
    em_Val_set(Element_as_val(self->inner), "onbeforexrselect", value);
}


DOMStringMap MathMLElement_dataset(const MathMLElement *self) {
    return em_Val_as(DOMStringMap, em_Val_get(Element_as_val(self->inner), "dataset"));
}


jb_DOMString MathMLElement_nonce(const MathMLElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), "nonce"));
}


void MathMLElement_set_nonce(MathMLElement* self, const jb_DOMString* value) {
    em_Val_set(Element_as_val(self->inner), "nonce", value);
}


bool MathMLElement_autofocus(const MathMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), "autofocus"));
}


void MathMLElement_set_autofocus(MathMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), "autofocus", value);
}


long MathMLElement_tabIndex(const MathMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), "tabIndex"));
}


void MathMLElement_set_tabIndex(MathMLElement* self, long value) {
    em_Val_set(Element_as_val(self->inner), "tabIndex", value);
}


jb_Undefined MathMLElement_focus(MathMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus"));
}


jb_Undefined MathMLElement_focus(MathMLElement* self , const FocusOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus", em_Val_from(options)));
}


jb_Undefined MathMLElement_blur(MathMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "blur"));
}

