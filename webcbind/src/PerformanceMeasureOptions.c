#include <webcbind/PerformanceMeasureOptions.h>

DEFINE_EMLITE_TYPE(PerformanceMeasureOptions, em_Val);


jb_Any PerformanceMeasureOptions_detail(const PerformanceMeasureOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detail")));
}


void PerformanceMeasureOptions_set_detail(PerformanceMeasureOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("detail"), em_Val_from(value));
}


jb_Any PerformanceMeasureOptions_start(const PerformanceMeasureOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("start")));
}


void PerformanceMeasureOptions_set_start(PerformanceMeasureOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("start"), em_Val_from(value));
}


jb_Any PerformanceMeasureOptions_duration(const PerformanceMeasureOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void PerformanceMeasureOptions_set_duration(PerformanceMeasureOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


jb_Any PerformanceMeasureOptions_end(const PerformanceMeasureOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("end")));
}


void PerformanceMeasureOptions_set_end(PerformanceMeasureOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("end"), em_Val_from(value));
}


PerformanceMeasureOptions PerformanceMeasureOptions_new() {
    em_Val obj = em_Val_object();
    return PerformanceMeasureOptions_from_val(&obj);
}

