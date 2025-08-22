#include <webcbind/PaintSize.h>

DEFINE_EMLITE_TYPE(PaintSize, em_Val);


double PaintSize_width(const PaintSize *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


double PaintSize_height(const PaintSize *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}

