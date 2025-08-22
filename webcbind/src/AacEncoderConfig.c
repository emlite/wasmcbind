#include <webcbind/AacEncoderConfig.h>

DEFINE_EMLITE_TYPE(AacEncoderConfig, em_Val);


AacBitstreamFormat AacEncoderConfig_format(const AacEncoderConfig *self) {
    return em_Val_as(AacBitstreamFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void AacEncoderConfig_set_format(AacEncoderConfig* self, AacBitstreamFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


AacEncoderConfig AacEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return AacEncoderConfig_from_val(&obj);
}

