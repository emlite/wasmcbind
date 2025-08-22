#include <webcbind/SharedStorageWorklet.h>

#include <webcbind/SharedStorageUrlWithMetadata.h>
#include <webcbind/SharedStorageRunOperationMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageWorklet, Worklet);


jb_Promise SharedStorageWorklet_selectURL0(SharedStorageWorklet* self , jb_String * name, jb_Array * urls) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls)));
}


jb_Promise SharedStorageWorklet_selectURL1(SharedStorageWorklet* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "selectURL", em_Val_from(name), em_Val_from(urls), em_Val_from(options)));
}


jb_Promise SharedStorageWorklet_run0(SharedStorageWorklet* self , jb_String * name) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "run", em_Val_from(name)));
}


jb_Promise SharedStorageWorklet_run1(SharedStorageWorklet* self , jb_String * name, SharedStorageRunOperationMethodOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(Worklet_as_val(self->inner), "run", em_Val_from(name), em_Val_from(options)));
}

