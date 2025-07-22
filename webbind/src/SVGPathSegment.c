#include <webbind/SVGPathSegment.h>


DEFINE_EMLITE_TYPE(SVGPathSegment, em_Val);


jb_DOMString SVGPathSegment_type(const SVGPathSegment *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void SVGPathSegment_set_type(SVGPathSegment* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_FrozenArray SVGPathSegment_values(const SVGPathSegment *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "values"));
}


void SVGPathSegment_set_values(SVGPathSegment* self, const jb_FrozenArray* value) {
    em_Val_set(em_Val_as_val(self->inner), "values", value);
}

