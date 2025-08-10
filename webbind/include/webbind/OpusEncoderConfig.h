#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OpusEncoderConfig, em_Val);

OpusBitstreamFormat OpusEncoderConfig_format(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_format(OpusEncoderConfig* self, OpusBitstreamFormat * value);

OpusSignal OpusEncoderConfig_signal(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_signal(OpusEncoderConfig* self, OpusSignal * value);

OpusApplication OpusEncoderConfig_application(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_application(OpusEncoderConfig* self, OpusApplication * value);

long long OpusEncoderConfig_frameDuration(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_frameDuration(OpusEncoderConfig* self, long long value);

unsigned long OpusEncoderConfig_complexity(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_complexity(OpusEncoderConfig* self, unsigned long value);

unsigned long OpusEncoderConfig_packetlossperc(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_packetlossperc(OpusEncoderConfig* self, unsigned long value);

bool OpusEncoderConfig_useinbandfec(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_useinbandfec(OpusEncoderConfig* self, bool value);

bool OpusEncoderConfig_usedtx(const OpusEncoderConfig *self);

void OpusEncoderConfig_set_usedtx(OpusEncoderConfig* self, bool value);

OpusEncoderConfig OpusEncoderConfig_new();

#ifdef __cplusplus
}
#endif
