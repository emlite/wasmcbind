#include <webbind/TextMetrics.h>


DEFINE_EMLITE_TYPE(TextMetrics, em_Val);


double TextMetrics_width(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "width"));
}


double TextMetrics_actualBoundingBoxLeft(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "actualBoundingBoxLeft"));
}


double TextMetrics_actualBoundingBoxRight(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "actualBoundingBoxRight"));
}


double TextMetrics_fontBoundingBoxAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fontBoundingBoxAscent"));
}


double TextMetrics_fontBoundingBoxDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "fontBoundingBoxDescent"));
}


double TextMetrics_actualBoundingBoxAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "actualBoundingBoxAscent"));
}


double TextMetrics_actualBoundingBoxDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "actualBoundingBoxDescent"));
}


double TextMetrics_emHeightAscent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "emHeightAscent"));
}


double TextMetrics_emHeightDescent(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "emHeightDescent"));
}


double TextMetrics_hangingBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "hangingBaseline"));
}


double TextMetrics_alphabeticBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "alphabeticBaseline"));
}


double TextMetrics_ideographicBaseline(const TextMetrics *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "ideographicBaseline"));
}

