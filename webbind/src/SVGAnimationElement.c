#include <webbind/SVGAnimationElement.h>

#include <webbind/SVGStringList.h>

DEFINE_EMLITE_TYPE(SVGAnimationElement, SVGElement);


SVGElement SVGAnimationElement_targetElement(const SVGAnimationElement *self) {
    return em_Val_as(SVGElement, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("targetElement")));
}


jb_Any SVGAnimationElement_onbegin(const SVGAnimationElement *self) {
    return em_Val_as(jb_Any, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("onbegin")));
}


void SVGAnimationElement_set_onbegin(SVGAnimationElement* self, jb_Any * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("onbegin"), em_Val_from(value));
}


jb_Any SVGAnimationElement_onend(const SVGAnimationElement *self) {
    return em_Val_as(jb_Any, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("onend")));
}


void SVGAnimationElement_set_onend(SVGAnimationElement* self, jb_Any * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("onend"), em_Val_from(value));
}


jb_Any SVGAnimationElement_onrepeat(const SVGAnimationElement *self) {
    return em_Val_as(jb_Any, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("onrepeat")));
}


void SVGAnimationElement_set_onrepeat(SVGAnimationElement* self, jb_Any * value) {
    em_Val_set(SVGElement_as_val(self->inner), em_Val_from("onrepeat"), em_Val_from(value));
}


float SVGAnimationElement_getStartTime(SVGAnimationElement* self ) {
    return em_Val_as(float, em_Val_call(SVGElement_as_val(self->inner), "getStartTime"));
}


float SVGAnimationElement_getCurrentTime(SVGAnimationElement* self ) {
    return em_Val_as(float, em_Val_call(SVGElement_as_val(self->inner), "getCurrentTime"));
}


float SVGAnimationElement_getSimpleDuration(SVGAnimationElement* self ) {
    return em_Val_as(float, em_Val_call(SVGElement_as_val(self->inner), "getSimpleDuration"));
}


jb_Undefined SVGAnimationElement_beginElement(SVGAnimationElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "beginElement"));
}


jb_Undefined SVGAnimationElement_beginElementAt(SVGAnimationElement* self , float offset) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "beginElementAt", em_Val_from(offset)));
}


jb_Undefined SVGAnimationElement_endElement(SVGAnimationElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "endElement"));
}


jb_Undefined SVGAnimationElement_endElementAt(SVGAnimationElement* self , float offset) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGElement_as_val(self->inner), "endElementAt", em_Val_from(offset)));
}


SVGStringList SVGAnimationElement_requiredExtensions(const SVGAnimationElement *self) {
    return em_Val_as(SVGStringList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("requiredExtensions")));
}


SVGStringList SVGAnimationElement_systemLanguage(const SVGAnimationElement *self) {
    return em_Val_as(SVGStringList, em_Val_get(SVGElement_as_val(self->inner), em_Val_from("systemLanguage")));
}

