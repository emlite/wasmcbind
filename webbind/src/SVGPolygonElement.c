#include <webbind/SVGPolygonElement.h>
#include <webbind/SVGPointList.h>


DEFINE_EMLITE_TYPE(SVGPolygonElement, SVGGeometryElement);


SVGPointList SVGPolygonElement_points(const SVGPolygonElement *self) {
    return em_Val_as(SVGPointList, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("points")));
}


SVGPointList SVGPolygonElement_animatedPoints(const SVGPolygonElement *self) {
    return em_Val_as(SVGPointList, em_Val_get(SVGGeometryElement_as_val(self->inner), em_Val_from("animatedPoints")));
}

