#include <webbind/ProgressEventInit.h>

DEFINE_EMLITE_TYPE(ProgressEventInit, EventInit);


bool ProgressEventInit_lengthComputable(const ProgressEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("lengthComputable")));
}


void ProgressEventInit_set_lengthComputable(ProgressEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("lengthComputable"), em_Val_from(value));
}


double ProgressEventInit_loaded(const ProgressEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("loaded")));
}


void ProgressEventInit_set_loaded(ProgressEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("loaded"), em_Val_from(value));
}


double ProgressEventInit_total(const ProgressEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("total")));
}


void ProgressEventInit_set_total(ProgressEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("total"), em_Val_from(value));
}


ProgressEventInit ProgressEventInit_new() {
    em_Val obj = em_Val_object();
    return ProgressEventInit_from_val(&obj);
}

