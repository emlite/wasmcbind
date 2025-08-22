#include <webcbind/SVGPathElement.h>

#include <webcbind/SVGAnimatedNumber.h>
#include <webcbind/DOMPoint.h>
#include <webcbind/SVGPathSegment.h>
#include <webcbind/SVGPathDataSettings.h>

DEFINE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);


SVGAnimatedNumber SVGPathElement_pathLength(const SVGPathElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("pathLength")));
}


float SVGPathElement_getTotalLength(SVGPathElement* self ) {
    return em_Val_as(float, em_Val_call(SVGGeometryElement_as_val(self->inner), "getTotalLength"));
}


DOMPoint SVGPathElement_getPointAtLength(SVGPathElement* self , float distance) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPointAtLength", em_Val_from(distance)));
}


SVGPathSegment SVGPathElement_getPathSegmentAtLength(SVGPathElement* self , float distance) {
    return em_Val_as(SVGPathSegment, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPathSegmentAtLength", em_Val_from(distance)));
}


jb_Array SVGPathElement_getPathData0(SVGPathElement* self ) {
    return em_Val_as(jb_Array, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPathData"));
}


jb_Array SVGPathElement_getPathData1(SVGPathElement* self , SVGPathDataSettings * settings) {
    return em_Val_as(jb_Array, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPathData", em_Val_from(settings)));
}


jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , jb_Array * pathData) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGeometryElement_as_val(self->inner), "setPathData", em_Val_from(pathData)));
}

