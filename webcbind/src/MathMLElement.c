#include <webcbind/MathMLElement.h>

#include <webcbind/CSSStyleProperties.h>
#include <webcbind/DOMStringMap.h>
#include <webcbind/FocusOptions.h>

DEFINE_EMLITE_TYPE(MathMLElement, Element);


CSSStyleProperties MathMLElement_style(const MathMLElement *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(Element_as_val(self->inner), em_Val_from("style")));
}


jb_Any MathMLElement_onbeforexrselect(const MathMLElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), em_Val_from("onbeforexrselect")));
}


void MathMLElement_set_onbeforexrselect(MathMLElement* self, jb_Any * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("onbeforexrselect"), em_Val_from(value));
}


DOMStringMap MathMLElement_dataset(const MathMLElement *self) {
    return em_Val_as(DOMStringMap, em_Val_get(Element_as_val(self->inner), em_Val_from("dataset")));
}


jb_String MathMLElement_nonce(const MathMLElement *self) {
    return em_Val_as(jb_String, em_Val_get(Element_as_val(self->inner), em_Val_from("nonce")));
}


void MathMLElement_set_nonce(MathMLElement* self, jb_String * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("nonce"), em_Val_from(value));
}


bool MathMLElement_autofocus(const MathMLElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("autofocus")));
}


void MathMLElement_set_autofocus(MathMLElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("autofocus"), em_Val_from(value));
}


long MathMLElement_tabIndex(const MathMLElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("tabIndex")));
}


void MathMLElement_set_tabIndex(MathMLElement* self, long value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("tabIndex"), em_Val_from(value));
}


jb_Undefined MathMLElement_focus0(MathMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus"));
}


jb_Undefined MathMLElement_focus1(MathMLElement* self , FocusOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus", em_Val_from(options)));
}


jb_Undefined MathMLElement_blur(MathMLElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "blur"));
}

