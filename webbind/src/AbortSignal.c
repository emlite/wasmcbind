#include <webbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(AbortSignal, EventTarget);


AbortSignal AbortSignal_abort0(AbortSignal* self ) {
    return em_Val_as(AbortSignal, em_Val_call(em_Val_global("abortsignal"), "abort"));
}


AbortSignal AbortSignal_abort1(AbortSignal* self , jb_Any * reason) {
    return em_Val_as(AbortSignal, em_Val_call(em_Val_global("abortsignal"), "abort", em_Val_from(reason)));
}


AbortSignal AbortSignal_timeout(AbortSignal* self , long long milliseconds) {
    return em_Val_as(AbortSignal, em_Val_call(em_Val_global("abortsignal"), "timeout", em_Val_from(milliseconds)));
}


AbortSignal AbortSignal_any(AbortSignal* self , jb_Array * signals) {
    return em_Val_as(AbortSignal, em_Val_call(em_Val_global("abortsignal"), "any", em_Val_from(signals)));
}


bool AbortSignal_aborted(const AbortSignal *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("aborted")));
}


jb_Any AbortSignal_reason(const AbortSignal *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("reason")));
}


jb_Undefined AbortSignal_throwIfAborted(AbortSignal* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "throwIfAborted"));
}


jb_Any AbortSignal_onabort(const AbortSignal *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onabort")));
}


void AbortSignal_set_onabort(AbortSignal* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onabort"), em_Val_from(value));
}

