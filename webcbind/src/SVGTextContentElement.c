#include <webcbind/SVGTextContentElement.h>

#include <webcbind/SVGAnimatedLength.h>
#include <webcbind/SVGAnimatedEnumeration.h>
#include <webcbind/DOMPoint.h>
#include <webcbind/DOMRect.h>
#include <webcbind/DOMPointInit.h>

DEFINE_EMLITE_TYPE(SVGTextContentElement, SVGGraphicsElement);


SVGAnimatedLength SVGTextContentElement_textLength(const SVGTextContentElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("textLength")));
}


SVGAnimatedEnumeration SVGTextContentElement_lengthAdjust(const SVGTextContentElement *self) {
    return em_Val_as(SVGAnimatedEnumeration, em_Val_get(SVGGraphicsElement_as_val(self->inner), em_Val_from("lengthAdjust")));
}


long SVGTextContentElement_getNumberOfChars(SVGTextContentElement* self ) {
    return em_Val_as(long, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getNumberOfChars"));
}


float SVGTextContentElement_getComputedTextLength(SVGTextContentElement* self ) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getComputedTextLength"));
}


float SVGTextContentElement_getSubStringLength(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getSubStringLength", em_Val_from(charnum), em_Val_from(nchars)));
}


DOMPoint SVGTextContentElement_getStartPositionOfChar(SVGTextContentElement* self , unsigned long charnum) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getStartPositionOfChar", em_Val_from(charnum)));
}


DOMPoint SVGTextContentElement_getEndPositionOfChar(SVGTextContentElement* self , unsigned long charnum) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getEndPositionOfChar", em_Val_from(charnum)));
}


DOMRect SVGTextContentElement_getExtentOfChar(SVGTextContentElement* self , unsigned long charnum) {
    return em_Val_as(DOMRect, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getExtentOfChar", em_Val_from(charnum)));
}


float SVGTextContentElement_getRotationOfChar(SVGTextContentElement* self , unsigned long charnum) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getRotationOfChar", em_Val_from(charnum)));
}


long SVGTextContentElement_getCharNumAtPosition0(SVGTextContentElement* self ) {
    return em_Val_as(long, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getCharNumAtPosition"));
}


long SVGTextContentElement_getCharNumAtPosition1(SVGTextContentElement* self , DOMPointInit * point) {
    return em_Val_as(long, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getCharNumAtPosition", em_Val_from(point)));
}


jb_Undefined SVGTextContentElement_selectSubString(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "selectSubString", em_Val_from(charnum), em_Val_from(nchars)));
}

