#include <webcbind/SharedStorageModifierMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);


jb_String SharedStorageModifierMethodOptions_withLock(const SharedStorageModifierMethodOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("withLock")));
}


void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("withLock"), em_Val_from(value));
}


SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions_new() {
    em_Val obj = em_Val_object();
    return SharedStorageModifierMethodOptions_from_val(&obj);
}

