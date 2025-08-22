#include <webcbind/PeriodicSyncEventInit.h>

DEFINE_EMLITE_TYPE(PeriodicSyncEventInit, ExtendableEventInit);


jb_String PeriodicSyncEventInit_tag(const PeriodicSyncEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("tag")));
}


void PeriodicSyncEventInit_set_tag(PeriodicSyncEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}


PeriodicSyncEventInit PeriodicSyncEventInit_new() {
    em_Val obj = em_Val_object();
    return PeriodicSyncEventInit_from_val(&obj);
}

