#include <webbind/QuotaExceededError.h>

#include <webbind/QuotaExceededErrorOptions.h>

DEFINE_EMLITE_TYPE(QuotaExceededError, DOMException);


QuotaExceededError QuotaExceededError_new0() {
        em_Val vv = em_Val_new(em_Val_global("QuotaExceededError") );
        return QuotaExceededError_from_val(&vv);
      }


QuotaExceededError QuotaExceededError_new1(jb_String * message) {
        em_Val vv = em_Val_new(em_Val_global("QuotaExceededError") , em_Val_from(message));
        return QuotaExceededError_from_val(&vv);
      }


QuotaExceededError QuotaExceededError_new2(jb_String * message, QuotaExceededErrorOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("QuotaExceededError") , em_Val_from(message), em_Val_from(options));
        return QuotaExceededError_from_val(&vv);
      }


double QuotaExceededError_quota(const QuotaExceededError *self) {
    return em_Val_as(double, em_Val_get(DOMException_as_val(self->inner), em_Val_from("quota")));
}


double QuotaExceededError_requested(const QuotaExceededError *self) {
    return em_Val_as(double, em_Val_get(DOMException_as_val(self->inner), em_Val_from("requested")));
}

