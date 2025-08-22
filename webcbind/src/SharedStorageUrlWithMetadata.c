#include <webcbind/SharedStorageUrlWithMetadata.h>

DEFINE_EMLITE_TYPE(SharedStorageUrlWithMetadata, em_Val);


jb_String SharedStorageUrlWithMetadata_url(const SharedStorageUrlWithMetadata *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("url")));
}


void SharedStorageUrlWithMetadata_set_url(SharedStorageUrlWithMetadata* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("url"), em_Val_from(value));
}


jb_Object SharedStorageUrlWithMetadata_reportingMetadata(const SharedStorageUrlWithMetadata *self) {
    return em_Val_as(jb_Object, em_Val_get(em_Val_as_val(self->inner), em_Val_from("reportingMetadata")));
}


void SharedStorageUrlWithMetadata_set_reportingMetadata(SharedStorageUrlWithMetadata* self, jb_Object * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("reportingMetadata"), em_Val_from(value));
}


SharedStorageUrlWithMetadata SharedStorageUrlWithMetadata_new() {
    em_Val obj = em_Val_object();
    return SharedStorageUrlWithMetadata_from_val(&obj);
}

