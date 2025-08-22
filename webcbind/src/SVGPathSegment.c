#include <webcbind/SVGPathSegment.h>

DEFINE_EMLITE_TYPE(SVGPathSegment, em_Val);


jb_String SVGPathSegment_type(const SVGPathSegment *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void SVGPathSegment_set_type(SVGPathSegment* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Array SVGPathSegment_values(const SVGPathSegment *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("values")));
}


void SVGPathSegment_set_values(SVGPathSegment* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("values"), em_Val_from(value));
}

