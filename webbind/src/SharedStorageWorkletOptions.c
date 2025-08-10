#include <webbind/SharedStorageWorkletOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageWorkletOptions, WorkletOptions);


jb_String SharedStorageWorkletOptions_dataOrigin(const SharedStorageWorkletOptions *self) {
    return em_Val_as(jb_String, em_Val_get(WorkletOptions_as_val(self->inner), em_Val_from("dataOrigin")));
}


void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, jb_String * value) {
    em_Val_set(WorkletOptions_as_val(self->inner), em_Val_from("dataOrigin"), em_Val_from(value));
}


SharedStorageWorkletOptions SharedStorageWorkletOptions_new() {
    em_Val obj = em_Val_object();
    return SharedStorageWorkletOptions_from_val(&obj);
}

