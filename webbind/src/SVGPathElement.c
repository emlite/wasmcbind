#include <webbind/SVGPathElement.h>
#include <webbind/SVGAnimatedNumber.h>
#include <webbind/DOMPoint.h>
#include <webbind/SVGPathSegment.h>


DEFINE_EMLITE_TYPE(SVGPathDataSettings, em_Val);


bool SVGPathDataSettings_normalize(const SVGPathDataSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "normalize"));
}


void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "normalize", value);
}

DEFINE_EMLITE_TYPE(SVGPathElement, SVGGeometryElement);


SVGAnimatedNumber SVGPathElement_pathLength(const SVGPathElement *self) {
    return em_Val_as(SVGAnimatedNumber, em_Val_get(SVGGeometryElement_as_val(self->inner), "pathLength"));
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


jb_Sequence SVGPathElement_getPathData(SVGPathElement* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPathData"));
}


jb_Sequence SVGPathElement_getPathData(SVGPathElement* self , const SVGPathDataSettings* settings) {
    return em_Val_as(jb_Sequence, em_Val_call(SVGGeometryElement_as_val(self->inner), "getPathData", em_Val_from(settings)));
}


jb_Undefined SVGPathElement_setPathData(SVGPathElement* self , const jb_Sequence* pathData) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGeometryElement_as_val(self->inner), "setPathData", em_Val_from(pathData)));
}

