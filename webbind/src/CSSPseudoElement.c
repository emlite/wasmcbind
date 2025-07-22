#include <webbind/CSSPseudoElement.h>
#include <webbind/Element.h>
#include <webbind/DOMQuad.h>
#include <webbind/Document.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(CSSPseudoElement, EventTarget);


jb_CSSOMString CSSPseudoElement_type(const CSSPseudoElement *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(EventTarget_as_val(self->inner), "type"));
}


Element CSSPseudoElement_element(const CSSPseudoElement *self) {
    return em_Val_as(Element, em_Val_get(EventTarget_as_val(self->inner), "element"));
}


jb_Any CSSPseudoElement_parent(const CSSPseudoElement *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "parent"));
}


CSSPseudoElement CSSPseudoElement_pseudo(CSSPseudoElement* self , const jb_CSSOMString* type) {
    return em_Val_as(CSSPseudoElement, em_Val_call(EventTarget_as_val(self->inner), "pseudo", em_Val_from(type)));
}


jb_Sequence CSSPseudoElement_getBoxQuads(CSSPseudoElement* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getBoxQuads"));
}


jb_Sequence CSSPseudoElement_getBoxQuads(CSSPseudoElement* self , const BoxQuadOptions* options) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getBoxQuads", em_Val_from(options)));
}


DOMQuad CSSPseudoElement_convertQuadFromNode(CSSPseudoElement* self , const DOMQuadInit* quad, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from)));
}


DOMQuad CSSPseudoElement_convertQuadFromNode(CSSPseudoElement* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertQuadFromNode", em_Val_from(quad), em_Val_from(from), em_Val_from(options)));
}


DOMQuad CSSPseudoElement_convertRectFromNode(CSSPseudoElement* self , const DOMRectReadOnly* rect, const jb_Any* from) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from)));
}


DOMQuad CSSPseudoElement_convertRectFromNode(CSSPseudoElement* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMQuad, em_Val_call(EventTarget_as_val(self->inner), "convertRectFromNode", em_Val_from(rect), em_Val_from(from), em_Val_from(options)));
}


DOMPoint CSSPseudoElement_convertPointFromNode(CSSPseudoElement* self , const DOMPointInit* point, const jb_Any* from) {
    return em_Val_as(DOMPoint, em_Val_call(EventTarget_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from)));
}


DOMPoint CSSPseudoElement_convertPointFromNode(CSSPseudoElement* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options) {
    return em_Val_as(DOMPoint, em_Val_call(EventTarget_as_val(self->inner), "convertPointFromNode", em_Val_from(point), em_Val_from(from), em_Val_from(options)));
}

