#include <webbind/FontFaceVariationAxis.h>


DEFINE_EMLITE_TYPE(FontFaceVariationAxis, em_Val);


jb_DOMString FontFaceVariationAxis_name(const FontFaceVariationAxis *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "name"));
}


jb_DOMString FontFaceVariationAxis_axisTag(const FontFaceVariationAxis *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "axisTag"));
}


double FontFaceVariationAxis_minimumValue(const FontFaceVariationAxis *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "minimumValue"));
}


double FontFaceVariationAxis_maximumValue(const FontFaceVariationAxis *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "maximumValue"));
}


double FontFaceVariationAxis_defaultValue(const FontFaceVariationAxis *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "defaultValue"));
}

