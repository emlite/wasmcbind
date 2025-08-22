#include <webcbind/SvcOutputMetadata.h>

DEFINE_EMLITE_TYPE(SvcOutputMetadata, em_Val);


unsigned long SvcOutputMetadata_temporalLayerId(const SvcOutputMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("temporalLayerId")));
}


void SvcOutputMetadata_set_temporalLayerId(SvcOutputMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("temporalLayerId"), em_Val_from(value));
}


SvcOutputMetadata SvcOutputMetadata_new() {
    em_Val obj = em_Val_object();
    return SvcOutputMetadata_from_val(&obj);
}

