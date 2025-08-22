#include <webcbind/WorkerOptions.h>

DEFINE_EMLITE_TYPE(WorkerOptions, em_Val);


jb_String WorkerOptions_name(const WorkerOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void WorkerOptions_set_name(WorkerOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


WorkerType WorkerOptions_type(const WorkerOptions *self) {
    return em_Val_as(WorkerType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void WorkerOptions_set_type(WorkerOptions* self, WorkerType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


RequestCredentials WorkerOptions_credentials(const WorkerOptions *self) {
    return em_Val_as(RequestCredentials, em_Val_get(em_Val_as_val(self->inner), em_Val_from("credentials")));
}


void WorkerOptions_set_credentials(WorkerOptions* self, RequestCredentials * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("credentials"), em_Val_from(value));
}


WorkerOptions WorkerOptions_new() {
    em_Val obj = em_Val_object();
    return WorkerOptions_from_val(&obj);
}

