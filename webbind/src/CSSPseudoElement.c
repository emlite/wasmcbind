#include <webbind/CSSPseudoElement.h>
#include <webbind/Element.h>
#include <webbind/DOMQuad.h>
#include <webbind/Document.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(CSSPseudoElement, EventTarget);


jb_CSSOMString CSSPseudoElement_type(const CSSPseudoElement *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("type")));
}


Element CSSPseudoElement_element(const CSSPseudoElement *self) {
    return em_Val_as(Element, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("element")));
}


jb_Any CSSPseudoElement_parent(const CSSPseudoElement *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("parent")));
}


CSSPseudoElement CSSPseudoElement_pseudo(CSSPseudoElement* self , jb_CSSOMString * type) {
    return em_Val_as(CSSPseudoElement, em_Val_call(EventTarget_as_val(self->inner), "pseudo", em_Val_from(type)));
}


jb_Sequence CSSPseudoElement_getBoxQuads0(CSSPseudoElement* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence CSSPseudoElement_getBoxQuads1(CSSPseudoElement* self , BoxQuadOptions * options) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad CSSPseudoElement_convertQuadFromNode0(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad CSSPseudoElement_convertQuadFromNode1(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad CSSPseudoElement_convertRectFromNode0(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad CSSPseudoElement_convertRectFromNode1(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint CSSPseudoElement_convertPointFromNode0(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from) {
    return em_Val_as(DOMPoint, em_Val_call(EventTarget_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint CSSPseudoElement_convertPointFromNode1(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options) {
    return em_Val_as(DOMPoint, em_Val_call(EventTarget_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}

