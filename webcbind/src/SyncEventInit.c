#include <webcbind/SyncEventInit.h>

DEFINE_EMLITE_TYPE(SyncEventInit, ExtendableEventInit);


jb_String SyncEventInit_tag(const SyncEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("tag")));
}


void SyncEventInit_set_tag(SyncEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("tag"), em_Val_from(value));
}


bool SyncEventInit_lastChance(const SyncEventInit *self) {
    return em_Val_as(bool, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("lastChance")));
}


void SyncEventInit_set_lastChance(SyncEventInit* self, bool value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("lastChance"), em_Val_from(value));
}


SyncEventInit SyncEventInit_new() {
    em_Val obj = em_Val_object();
    return SyncEventInit_from_val(&obj);
}

