#include <webbind/PerformanceObserverCallbackOptions.h>

DEFINE_EMLITE_TYPE(PerformanceObserverCallbackOptions, em_Val);


long long PerformanceObserverCallbackOptions_droppedEntriesCount(const PerformanceObserverCallbackOptions *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("droppedEntriesCount")));
}


void PerformanceObserverCallbackOptions_set_droppedEntriesCount(PerformanceObserverCallbackOptions* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("droppedEntriesCount"), em_Val_from(value));
}


PerformanceObserverCallbackOptions PerformanceObserverCallbackOptions_new() {
    em_Val obj = em_Val_object();
    return PerformanceObserverCallbackOptions_from_val(&obj);
}

