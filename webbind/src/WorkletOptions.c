#include <webbind/WorkletOptions.h>

DEFINE_EMLITE_TYPE(WorkletOptions, em_Val);


RequestCredentials WorkletOptions_credentials(const WorkletOptions *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentials")));
}


void WorkletOptions_set_credentials(WorkletOptions* self, RequestCredentials * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentials"), em_Val_from(value));
}


WorkletOptions WorkletOptions_new() {
    em_Val obj = em_Val_object();
    return WorkletOptions_from_val(&obj);
}

