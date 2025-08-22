#include <webcbind/PerformanceTiming.h>

DEFINE_EMLITE_TYPE(PerformanceTiming, em_Val);


long long PerformanceTiming_navigationStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("navigationStart")));
}


long long PerformanceTiming_unloadEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unloadEventStart")));
}


long long PerformanceTiming_unloadEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("unloadEventEnd")));
}


long long PerformanceTiming_redirectStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("redirectStart")));
}


long long PerformanceTiming_redirectEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("redirectEnd")));
}


long long PerformanceTiming_fetchStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fetchStart")));
}


long long PerformanceTiming_domainLookupStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domainLookupStart")));
}


long long PerformanceTiming_domainLookupEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domainLookupEnd")));
}


long long PerformanceTiming_connectStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connectStart")));
}


long long PerformanceTiming_connectEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connectEnd")));
}


long long PerformanceTiming_secureConnectionStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("secureConnectionStart")));
}


long long PerformanceTiming_requestStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requestStart")));
}


long long PerformanceTiming_responseStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("responseStart")));
}


long long PerformanceTiming_responseEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("responseEnd")));
}


long long PerformanceTiming_domLoading(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domLoading")));
}


long long PerformanceTiming_domInteractive(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domInteractive")));
}


long long PerformanceTiming_domContentLoadedEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domContentLoadedEventStart")));
}


long long PerformanceTiming_domContentLoadedEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domContentLoadedEventEnd")));
}


long long PerformanceTiming_domComplete(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("domComplete")));
}


long long PerformanceTiming_loadEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loadEventStart")));
}


long long PerformanceTiming_loadEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loadEventEnd")));
}


jb_Object PerformanceTiming_toJSON(PerformanceTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

