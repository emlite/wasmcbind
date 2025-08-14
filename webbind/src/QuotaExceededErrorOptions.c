#include <webbind/QuotaExceededErrorOptions.h>

DEFINE_EMLITE_TYPE(QuotaExceededErrorOptions, em_Val);


double QuotaExceededErrorOptions_quota(const QuotaExceededErrorOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quota")));
}


void QuotaExceededErrorOptions_set_quota(QuotaExceededErrorOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quota"), em_Val_from(value));
}


double QuotaExceededErrorOptions_requested(const QuotaExceededErrorOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("requested")));
}


void QuotaExceededErrorOptions_set_requested(QuotaExceededErrorOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("requested"), em_Val_from(value));
}


QuotaExceededErrorOptions QuotaExceededErrorOptions_new() {
    em_Val obj = em_Val_object();
    return QuotaExceededErrorOptions_from_val(&obj);
}

