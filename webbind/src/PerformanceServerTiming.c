#include <webbind/PerformanceServerTiming.h>


DEFINE_EMLITE_TYPE(PerformanceServerTiming, em_Val);


jb_DOMString PerformanceServerTiming_name(const PerformanceServerTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


jb_Any PerformanceServerTiming_duration(const PerformanceServerTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


jb_DOMString PerformanceServerTiming_description(const PerformanceServerTiming *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


jb_Object PerformanceServerTiming_toJSON(PerformanceServerTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

