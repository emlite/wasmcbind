#include <webcbind/OpusEncoderConfig.h>

DEFINE_EMLITE_TYPE(OpusEncoderConfig, em_Val);


OpusBitstreamFormat OpusEncoderConfig_format(const OpusEncoderConfig *self) {
    return em_Val_as(OpusBitstreamFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void OpusEncoderConfig_set_format(OpusEncoderConfig* self, OpusBitstreamFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


OpusSignal OpusEncoderConfig_signal(const OpusEncoderConfig *self) {
    return em_Val_as(OpusSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void OpusEncoderConfig_set_signal(OpusEncoderConfig* self, OpusSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


OpusApplication OpusEncoderConfig_application(const OpusEncoderConfig *self) {
    return em_Val_as(OpusApplication, em_Val_get(em_Val_as_val(self->inner), em_Val_from("application")));
}


void OpusEncoderConfig_set_application(OpusEncoderConfig* self, OpusApplication * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("application"), em_Val_from(value));
}


long long OpusEncoderConfig_frameDuration(const OpusEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameDuration")));
}


void OpusEncoderConfig_set_frameDuration(OpusEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameDuration"), em_Val_from(value));
}


unsigned long OpusEncoderConfig_complexity(const OpusEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("complexity")));
}


void OpusEncoderConfig_set_complexity(OpusEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("complexity"), em_Val_from(value));
}


unsigned long OpusEncoderConfig_packetlossperc(const OpusEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("packetlossperc")));
}


void OpusEncoderConfig_set_packetlossperc(OpusEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("packetlossperc"), em_Val_from(value));
}


bool OpusEncoderConfig_useinbandfec(const OpusEncoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("useinbandfec")));
}


void OpusEncoderConfig_set_useinbandfec(OpusEncoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("useinbandfec"), em_Val_from(value));
}


bool OpusEncoderConfig_usedtx(const OpusEncoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usedtx")));
}


void OpusEncoderConfig_set_usedtx(OpusEncoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usedtx"), em_Val_from(value));
}


OpusEncoderConfig OpusEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return OpusEncoderConfig_from_val(&obj);
}

