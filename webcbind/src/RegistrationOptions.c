#include <webcbind/RegistrationOptions.h>

DEFINE_EMLITE_TYPE(RegistrationOptions, em_Val);


jb_String RegistrationOptions_scope(const RegistrationOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scope")));
}


void RegistrationOptions_set_scope(RegistrationOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scope"), em_Val_from(value));
}


WorkerType RegistrationOptions_type(const RegistrationOptions *self) {
    return em_Val_as(WorkerType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RegistrationOptions_set_type(RegistrationOptions* self, WorkerType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


ServiceWorkerUpdateViaCache RegistrationOptions_updateViaCache(const RegistrationOptions *self) {
    return em_Val_as(ServiceWorkerUpdateViaCache, em_Val_get(em_Val_as_val(self->inner), em_Val_from("updateViaCache")));
}


void RegistrationOptions_set_updateViaCache(RegistrationOptions* self, ServiceWorkerUpdateViaCache * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("updateViaCache"), em_Val_from(value));
}


RegistrationOptions RegistrationOptions_new() {
    em_Val obj = em_Val_object();
    return RegistrationOptions_from_val(&obj);
}

