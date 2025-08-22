#include <webcbind/SVGPreserveAspectRatio.h>

DEFINE_EMLITE_TYPE(SVGPreserveAspectRatio, em_Val);


unsigned short SVGPreserveAspectRatio_align(const SVGPreserveAspectRatio *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("align")));
}


void SVGPreserveAspectRatio_set_align(SVGPreserveAspectRatio* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


unsigned short SVGPreserveAspectRatio_meetOrSlice(const SVGPreserveAspectRatio *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("meetOrSlice")));
}


void SVGPreserveAspectRatio_set_meetOrSlice(SVGPreserveAspectRatio* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("meetOrSlice"), em_Val_from(value));
}

