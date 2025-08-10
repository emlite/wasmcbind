#include <webbind/SharedStorageSetMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageSetMethodOptions, SharedStorageModifierMethodOptions);


bool SharedStorageSetMethodOptions_ignoreIfPresent(const SharedStorageSetMethodOptions *self) {
    return em_Val_as(bool, em_Val_get(SharedStorageModifierMethodOptions_as_val(self->inner), em_Val_from("ignoreIfPresent")));
}


void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value) {
    em_Val_set(SharedStorageModifierMethodOptions_as_val(self->inner), em_Val_from("ignoreIfPresent"), em_Val_from(value));
}


SharedStorageSetMethodOptions SharedStorageSetMethodOptions_new() {
    em_Val obj = em_Val_object();
    return SharedStorageSetMethodOptions_from_val(&obj);
}

