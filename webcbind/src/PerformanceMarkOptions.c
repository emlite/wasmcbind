#include <webcbind/PerformanceMarkOptions.h>

DEFINE_EMLITE_TYPE(PerformanceMarkOptions, em_Val);


jb_Any PerformanceMarkOptions_detail(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detail")));
}


void PerformanceMarkOptions_set_detail(PerformanceMarkOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("detail"), em_Val_from(value));
}


jb_Any PerformanceMarkOptions_startTime(const PerformanceMarkOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("startTime")));
}


void PerformanceMarkOptions_set_startTime(PerformanceMarkOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("startTime"), em_Val_from(value));
}


PerformanceMarkOptions PerformanceMarkOptions_new() {
    em_Val obj = em_Val_object();
    return PerformanceMarkOptions_from_val(&obj);
}

