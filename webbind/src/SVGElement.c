#include <webbind/SVGElement.h>
#include <webbind/SVGAnimatedString.h>
#include <webbind/SVGSVGElement.h>
#include <webbind/SVGUseElement.h>
#include <webbind/DOMStringMap.h>
#include <webbind/CSSStyleDeclaration.h>
#include <webbind/CSSStyleProperties.h>


DEFINE_EMLITE_TYPE(FocusOptions, em_Val);


bool FocusOptions_preventScroll(const FocusOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preventScroll")));
}


void FocusOptions_set_preventScroll(FocusOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preventScroll"), em_Val_from(value));
}


bool FocusOptions_focusVisible(const FocusOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("focusVisible")));
}


void FocusOptions_set_focusVisible(FocusOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("focusVisible"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(SVGElement, Element);


SVGAnimatedString SVGElement_className(const SVGElement *self) {
    return em_Val_as(SVGAnimatedString, em_Val_get(Element_as_val(self->inner), em_Val_from("className")));
}


SVGSVGElement SVGElement_ownerSVGElement(const SVGElement *self) {
    return em_Val_as(SVGSVGElement, em_Val_get(Element_as_val(self->inner), em_Val_from("ownerSVGElement")));
}


SVGElement SVGElement_viewportElement(const SVGElement *self) {
    return em_Val_as(SVGElement, em_Val_get(Element_as_val(self->inner), em_Val_from("viewportElement")));
}


jb_Any SVGElement_onbeforexrselect(const SVGElement *self) {
    return em_Val_as(jb_Any, em_Val_get(Element_as_val(self->inner), em_Val_from("onbeforexrselect")));
}


void SVGElement_set_onbeforexrselect(SVGElement* self, jb_Any * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("onbeforexrselect"), em_Val_from(value));
}


SVGElement SVGElement_correspondingElement(const SVGElement *self) {
    return em_Val_as(SVGElement, em_Val_get(Element_as_val(self->inner), em_Val_from("correspondingElement")));
}


SVGUseElement SVGElement_correspondingUseElement(const SVGElement *self) {
    return em_Val_as(SVGUseElement, em_Val_get(Element_as_val(self->inner), em_Val_from("correspondingUseElement")));
}


DOMStringMap SVGElement_dataset(const SVGElement *self) {
    return em_Val_as(DOMStringMap, em_Val_get(Element_as_val(self->inner), em_Val_from("dataset")));
}


jb_DOMString SVGElement_nonce(const SVGElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(Element_as_val(self->inner), em_Val_from("nonce")));
}


void SVGElement_set_nonce(SVGElement* self, jb_DOMString * value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("nonce"), em_Val_from(value));
}


bool SVGElement_autofocus(const SVGElement *self) {
    return em_Val_as(bool, em_Val_get(Element_as_val(self->inner), em_Val_from("autofocus")));
}


void SVGElement_set_autofocus(SVGElement* self, bool value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("autofocus"), em_Val_from(value));
}


long SVGElement_tabIndex(const SVGElement *self) {
    return em_Val_as(long, em_Val_get(Element_as_val(self->inner), em_Val_from("tabIndex")));
}


void SVGElement_set_tabIndex(SVGElement* self, long value) {
    em_Val_set(Element_as_val(self->inner), em_Val_from("tabIndex"), em_Val_from(value));
}


jb_Undefined SVGElement_focus0(SVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus"));
}


jb_Undefined SVGElement_focus1(SVGElement* self , FocusOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "focus", em_Val_from(options)));
}


jb_Undefined SVGElement_blur(SVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(Element_as_val(self->inner), "blur"));
}


CSSStyleProperties SVGElement_style(const SVGElement *self) {
    return em_Val_as(CSSStyleProperties, em_Val_get(Element_as_val(self->inner), em_Val_from("style")));
}

