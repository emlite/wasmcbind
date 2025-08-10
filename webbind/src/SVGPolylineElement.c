#include <webbind/SVGPolylineElement.h>

#include <webbind/SVGPointList.h>

DEFINE_EMLITE_TYPE(SVGPolylineElement, SVGGeometryElement);


SVGPointList SVGPolylineElement_points(const SVGPolylineElement *self) {
    return em_Val_as(SVGPointList, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("points")));
}


SVGPointList SVGPolylineElement_animatedPoints(const SVGPolylineElement *self) {
    return em_Val_as(SVGPointList, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("animatedPoints")));
}

