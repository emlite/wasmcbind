#include <webcbind/TextMetrics.h>

DEFINE_EMLITE_TYPE(TextMetrics, em_Val);


double TextMetrics_width(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


double TextMetrics_actualBoundingBoxLeft(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actualBoundingBoxLeft")));
}


double TextMetrics_actualBoundingBoxRight(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actualBoundingBoxRight")));
}


double TextMetrics_fontBoundingBoxAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontBoundingBoxAscent")));
}


double TextMetrics_fontBoundingBoxDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontBoundingBoxDescent")));
}


double TextMetrics_actualBoundingBoxAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actualBoundingBoxAscent")));
}


double TextMetrics_actualBoundingBoxDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("actualBoundingBoxDescent")));
}


double TextMetrics_emHeightAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emHeightAscent")));
}


double TextMetrics_emHeightDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("emHeightDescent")));
}


double TextMetrics_hangingBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hangingBaseline")));
}


double TextMetrics_alphabeticBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alphabeticBaseline")));
}


double TextMetrics_ideographicBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ideographicBaseline")));
}

