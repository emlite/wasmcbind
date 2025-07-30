#include <webbind/Worklet.h>


DEFINE_EMLITE_TYPE(WorkletOptions, em_Val);


RequestCredentials WorkletOptions_credentials(const WorkletOptions *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentials")));
}


void WorkletOptions_set_credentials(WorkletOptions* self, RequestCredentials * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentials"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Worklet, em_Val);


jb_Promise Worklet_addModule0(Worklet* self , jb_String * moduleURL) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL)));
}


jb_Promise Worklet_addModule1(Worklet* self , jb_String * moduleURL, WorkletOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL), em_Val_from(options)));
}

