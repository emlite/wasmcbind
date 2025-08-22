#include <webcbind/FontMetrics.h>

#include <webcbind/Baseline.h>
#include <webcbind/Font.h>

DEFINE_EMLITE_TYPE(FontMetrics, em_Val);


double FontMetrics_width(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


jb_Array FontMetrics_advances(const FontMetrics *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("advances")));
}


double FontMetrics_boundingBoxLeft(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBoxLeft")));
}


double FontMetrics_boundingBoxRight(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBoxRight")));
}


double FontMetrics_height(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


double FontMetrics_emHeightAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emHeightAscent")));
}


double FontMetrics_emHeightDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emHeightDescent")));
}


double FontMetrics_boundingBoxAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBoxAscent")));
}


double FontMetrics_boundingBoxDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("boundingBoxDescent")));
}


double FontMetrics_fontBoundingBoxAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontBoundingBoxAscent")));
}


double FontMetrics_fontBoundingBoxDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontBoundingBoxDescent")));
}


Baseline FontMetrics_dominantBaseline(const FontMetrics *self) {
    return em_Val_as(Baseline, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dominantBaseline")));
}


jb_Array FontMetrics_baselines(const FontMetrics *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("baselines")));
}


jb_Array FontMetrics_fonts(const FontMetrics *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fonts")));
}

