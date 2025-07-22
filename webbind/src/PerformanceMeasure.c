#include <webbind/PerformanceMeasure.h>


DEFINE_EMLITE_TYPE(PerformanceMeasure, PerformanceEntry);


jb_Any PerformanceMeasure_detail(const PerformanceMeasure *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("detail")));
}

