#include <webbind/MLTriangularOptions.h>

DEFINE_EMLITE_TYPE(MLTriangularOptions, MLOperatorOptions);


bool MLTriangularOptions_upper(const MLTriangularOptions *self) {
    return em_Val_as(bool, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("upper")));
}


void MLTriangularOptions_set_upper(MLTriangularOptions* self, bool value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("upper"), em_Val_from(value));
}


long MLTriangularOptions_diagonal(const MLTriangularOptions *self) {
    return em_Val_as(long, em_Val_get(MLOperatorOptions_as_val(self->inner), em_Val_from("diagonal")));
}


void MLTriangularOptions_set_diagonal(MLTriangularOptions* self, long value) {
    em_Val_set(MLOperatorOptions_as_val(self->inner), em_Val_from("diagonal"), em_Val_from(value));
}


MLTriangularOptions MLTriangularOptions_new() {
    em_Val obj = em_Val_object();
    return MLTriangularOptions_from_val(&obj);
}

