#include <webbind/PerformanceNavigationTiming.h>
#include <webbind/NotRestoredReasons.h>


DEFINE_EMLITE_TYPE(PerformanceNavigationTiming, PerformanceResourceTiming);


jb_Any PerformanceNavigationTiming_unloadEventStart(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "unloadEventStart"));
}


jb_Any PerformanceNavigationTiming_unloadEventEnd(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "unloadEventEnd"));
}


jb_Any PerformanceNavigationTiming_domInteractive(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "domInteractive"));
}


jb_Any PerformanceNavigationTiming_domContentLoadedEventStart(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "domContentLoadedEventStart"));
}


jb_Any PerformanceNavigationTiming_domContentLoadedEventEnd(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "domContentLoadedEventEnd"));
}


jb_Any PerformanceNavigationTiming_domComplete(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "domComplete"));
}


jb_Any PerformanceNavigationTiming_loadEventStart(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "loadEventStart"));
}


jb_Any PerformanceNavigationTiming_loadEventEnd(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "loadEventEnd"));
}


NavigationTimingType PerformanceNavigationTiming_type(const PerformanceNavigationTiming *self) {
    return em_Val_as(NavigationTimingType, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "type"));
}


unsigned short PerformanceNavigationTiming_redirectCount(const PerformanceNavigationTiming *self) {
    return em_Val_as(unsigned short, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "redirectCount"));
}


jb_Any PerformanceNavigationTiming_criticalCHRestart(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "criticalCHRestart"));
}


NotRestoredReasons PerformanceNavigationTiming_notRestoredReasons(const PerformanceNavigationTiming *self) {
    return em_Val_as(NotRestoredReasons, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "notRestoredReasons"));
}


jb_Object PerformanceNavigationTiming_toJSON(PerformanceNavigationTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(PerformanceResourceTiming_as_val(self->inner), "toJSON"));
}


jb_Any PerformanceNavigationTiming_activationStart(const PerformanceNavigationTiming *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceResourceTiming_as_val(self->inner), "activationStart"));
}

