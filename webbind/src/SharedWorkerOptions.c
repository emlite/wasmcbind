#include <webbind/SharedWorkerOptions.h>

DEFINE_EMLITE_TYPE(SharedWorkerOptions, WorkerOptions);


SameSiteCookiesType SharedWorkerOptions_sameSiteCookies(const SharedWorkerOptions *self) {
    return em_Val_as(SameSiteCookiesType, em_Val_get(WorkerOptions_as_val(self->inner), em_Val_from("sameSiteCookies")));
}


void SharedWorkerOptions_set_sameSiteCookies(SharedWorkerOptions* self, SameSiteCookiesType * value) {
    em_Val_set(WorkerOptions_as_val(self->inner), em_Val_from("sameSiteCookies"), em_Val_from(value));
}


SharedWorkerOptions SharedWorkerOptions_new() {
    em_Val obj = em_Val_object();
    return SharedWorkerOptions_from_val(&obj);
}

