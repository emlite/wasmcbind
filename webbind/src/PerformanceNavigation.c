#include <webbind/PerformanceNavigation.h>


DEFINE_EMLITE_TYPE(PerformanceNavigation, em_Val);


unsigned short PerformanceNavigation_type(const PerformanceNavigation *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "type"));
}


unsigned short PerformanceNavigation_redirectCount(const PerformanceNavigation *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "redirectCount"));
}


jb_Object PerformanceNavigation_toJSON(PerformanceNavigation* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

