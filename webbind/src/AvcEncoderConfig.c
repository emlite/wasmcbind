#include <webbind/AvcEncoderConfig.h>

DEFINE_EMLITE_TYPE(AvcEncoderConfig, em_Val);


AvcBitstreamFormat AvcEncoderConfig_format(const AvcEncoderConfig *self) {
    return em_Val_as(AvcBitstreamFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void AvcEncoderConfig_set_format(AvcEncoderConfig* self, AvcBitstreamFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


AvcEncoderConfig AvcEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return AvcEncoderConfig_from_val(&obj);
}

