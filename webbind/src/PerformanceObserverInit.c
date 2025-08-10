#include <webbind/PerformanceObserverInit.h>

DEFINE_EMLITE_TYPE(PerformanceObserverInit, em_Val);


jb_Array PerformanceObserverInit_entryTypes(const PerformanceObserverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("entryTypes")));
}


void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("entryTypes"), em_Val_from(value));
}


jb_String PerformanceObserverInit_type(const PerformanceObserverInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void PerformanceObserverInit_set_type(PerformanceObserverInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


bool PerformanceObserverInit_buffered(const PerformanceObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffered")));
}


void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffered"), em_Val_from(value));
}


PerformanceObserverInit PerformanceObserverInit_new() {
    em_Val obj = em_Val_object();
    return PerformanceObserverInit_from_val(&obj);
}

