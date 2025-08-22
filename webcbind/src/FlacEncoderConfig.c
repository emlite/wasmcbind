#include <webcbind/FlacEncoderConfig.h>

DEFINE_EMLITE_TYPE(FlacEncoderConfig, em_Val);


unsigned long FlacEncoderConfig_blockSize(const FlacEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("blockSize")));
}


void FlacEncoderConfig_set_blockSize(FlacEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("blockSize"), em_Val_from(value));
}


unsigned long FlacEncoderConfig_compressLevel(const FlacEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("compressLevel")));
}


void FlacEncoderConfig_set_compressLevel(FlacEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("compressLevel"), em_Val_from(value));
}


FlacEncoderConfig FlacEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return FlacEncoderConfig_from_val(&obj);
}

