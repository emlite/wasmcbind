#include <webbind/HevcEncoderConfig.h>

DEFINE_EMLITE_TYPE(HevcEncoderConfig, em_Val);


HevcBitstreamFormat HevcEncoderConfig_format(const HevcEncoderConfig *self) {
    return em_Val_as(HevcBitstreamFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void HevcEncoderConfig_set_format(HevcEncoderConfig* self, HevcBitstreamFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


HevcEncoderConfig HevcEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return HevcEncoderConfig_from_val(&obj);
}

