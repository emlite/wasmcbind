#include <webbind/FontMetrics.h>
#include <webbind/Baseline.h>
#include <webbind/Font.h>


DEFINE_EMLITE_TYPE(FontMetrics, em_Val);


double FontMetrics_width(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "width"));
}


jb_FrozenArray FontMetrics_advances(const FontMetrics *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "advances"));
}


double FontMetrics_boundingBoxLeft(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "boundingBoxLeft"));
}


double FontMetrics_boundingBoxRight(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "boundingBoxRight"));
}


double FontMetrics_height(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "height"));
}


double FontMetrics_emHeightAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "emHeightAscent"));
}


double FontMetrics_emHeightDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "emHeightDescent"));
}


double FontMetrics_boundingBoxAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "boundingBoxAscent"));
}


double FontMetrics_boundingBoxDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "boundingBoxDescent"));
}


double FontMetrics_fontBoundingBoxAscent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fontBoundingBoxAscent"));
}


double FontMetrics_fontBoundingBoxDescent(const FontMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fontBoundingBoxDescent"));
}


Baseline FontMetrics_dominantBaseline(const FontMetrics *self) {
    return em_Val_as(Baseline, em_Val_get(em_Val_as_val(self->inner), "dominantBaseline"));
}


jb_FrozenArray FontMetrics_baselines(const FontMetrics *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "baselines"));
}


jb_FrozenArray FontMetrics_fonts(const FontMetrics *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "fonts"));
}

