#include <webbind/Worklet.h>


DEFINE_EMLITE_TYPE(WorkletOptions, em_Val);


RequestCredentials WorkletOptions_credentials(const WorkletOptions *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), "credentials"));
}


void WorkletOptions_set_credentials(WorkletOptions* self, const RequestCredentials* value) {
    em_Val_set(em_Val_as_val(self->inner), "credentials", value);
}

DEFINE_EMLITE_TYPE(Worklet, em_Val);


jb_Promise Worklet_addModule(Worklet* self , const jb_USVString* moduleURL) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL)));
}


jb_Promise Worklet_addModule(Worklet* self , const jb_USVString* moduleURL, const WorkletOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "addModule", em_Val_from(moduleURL), em_Val_from(options)));
}

