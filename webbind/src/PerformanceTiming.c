#include <webbind/PerformanceTiming.h>


DEFINE_EMLITE_TYPE(PerformanceTiming, em_Val);


long long PerformanceTiming_navigationStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "navigationStart"));
}


long long PerformanceTiming_unloadEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "unloadEventStart"));
}


long long PerformanceTiming_unloadEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "unloadEventEnd"));
}


long long PerformanceTiming_redirectStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "redirectStart"));
}


long long PerformanceTiming_redirectEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "redirectEnd"));
}


long long PerformanceTiming_fetchStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "fetchStart"));
}


long long PerformanceTiming_domainLookupStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domainLookupStart"));
}


long long PerformanceTiming_domainLookupEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domainLookupEnd"));
}


long long PerformanceTiming_connectStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "connectStart"));
}


long long PerformanceTiming_connectEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "connectEnd"));
}


long long PerformanceTiming_secureConnectionStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "secureConnectionStart"));
}


long long PerformanceTiming_requestStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "requestStart"));
}


long long PerformanceTiming_responseStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "responseStart"));
}


long long PerformanceTiming_responseEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "responseEnd"));
}


long long PerformanceTiming_domLoading(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domLoading"));
}


long long PerformanceTiming_domInteractive(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domInteractive"));
}


long long PerformanceTiming_domContentLoadedEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domContentLoadedEventStart"));
}


long long PerformanceTiming_domContentLoadedEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domContentLoadedEventEnd"));
}


long long PerformanceTiming_domComplete(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "domComplete"));
}


long long PerformanceTiming_loadEventStart(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "loadEventStart"));
}


long long PerformanceTiming_loadEventEnd(const PerformanceTiming *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "loadEventEnd"));
}


jb_Object PerformanceTiming_toJSON(PerformanceTiming* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

