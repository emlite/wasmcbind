#include <webcbind/SVGBoundingBoxOptions.h>

DEFINE_EMLITE_TYPE(SVGBoundingBoxOptions, em_Val);


bool SVGBoundingBoxOptions_fill(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fill")));
}


void SVGBoundingBoxOptions_set_fill(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fill"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_stroke(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("stroke")));
}


void SVGBoundingBoxOptions_set_stroke(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("stroke"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_markers(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("markers")));
}


void SVGBoundingBoxOptions_set_markers(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("markers"), em_Val_from(value));
}


bool SVGBoundingBoxOptions_clipped(const SVGBoundingBoxOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("clipped")));
}


void SVGBoundingBoxOptions_set_clipped(SVGBoundingBoxOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("clipped"), em_Val_from(value));
}


SVGBoundingBoxOptions SVGBoundingBoxOptions_new() {
    em_Val obj = em_Val_object();
    return SVGBoundingBoxOptions_from_val(&obj);
}

