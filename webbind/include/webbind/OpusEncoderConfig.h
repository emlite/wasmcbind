#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OpusEncoderConfig */
DECLARE_EMLITE_TYPE(OpusEncoderConfig, em_Val);

/** @brief Getter of the format property */
OpusBitstreamFormat OpusEncoderConfig_format(const OpusEncoderConfig *self);

/** @brief Setter of the format property */
void OpusEncoderConfig_set_format(OpusEncoderConfig* self, OpusBitstreamFormat * value);

/** @brief Getter of the signal property */
OpusSignal OpusEncoderConfig_signal(const OpusEncoderConfig *self);

/** @brief Setter of the signal property */
void OpusEncoderConfig_set_signal(OpusEncoderConfig* self, OpusSignal * value);

/** @brief Getter of the application property */
OpusApplication OpusEncoderConfig_application(const OpusEncoderConfig *self);

/** @brief Setter of the application property */
void OpusEncoderConfig_set_application(OpusEncoderConfig* self, OpusApplication * value);

/** @brief Getter of the frameDuration property */
long long OpusEncoderConfig_frameDuration(const OpusEncoderConfig *self);

/** @brief Setter of the frameDuration property */
void OpusEncoderConfig_set_frameDuration(OpusEncoderConfig* self, long long value);

/** @brief Getter of the complexity property */
unsigned long OpusEncoderConfig_complexity(const OpusEncoderConfig *self);

/** @brief Setter of the complexity property */
void OpusEncoderConfig_set_complexity(OpusEncoderConfig* self, unsigned long value);

/** @brief Getter of the packetlossperc property */
unsigned long OpusEncoderConfig_packetlossperc(const OpusEncoderConfig *self);

/** @brief Setter of the packetlossperc property */
void OpusEncoderConfig_set_packetlossperc(OpusEncoderConfig* self, unsigned long value);

/** @brief Getter of the useinbandfec property */
bool OpusEncoderConfig_useinbandfec(const OpusEncoderConfig *self);

/** @brief Setter of the useinbandfec property */
void OpusEncoderConfig_set_useinbandfec(OpusEncoderConfig* self, bool value);

/** @brief Getter of the usedtx property */
bool OpusEncoderConfig_usedtx(const OpusEncoderConfig *self);

/** @brief Setter of the usedtx property */
void OpusEncoderConfig_set_usedtx(OpusEncoderConfig* self, bool value);

/** @brief Constructor of the OpusEncoderConfig dictionary type */
OpusEncoderConfig OpusEncoderConfig_new();

#ifdef __cplusplus
}
#endif
