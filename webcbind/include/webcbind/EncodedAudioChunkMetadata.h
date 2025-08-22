#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EncodedAudioChunkMetadata */
DECLARE_EMLITE_TYPE(EncodedAudioChunkMetadata, em_Val);

/** @brief Getter of the decoderConfig property */
AudioDecoderConfig EncodedAudioChunkMetadata_decoderConfig(const EncodedAudioChunkMetadata *self);

/** @brief Setter of the decoderConfig property */
void EncodedAudioChunkMetadata_set_decoderConfig(EncodedAudioChunkMetadata* self, AudioDecoderConfig * value);

/** @brief Constructor of the EncodedAudioChunkMetadata dictionary type */
EncodedAudioChunkMetadata EncodedAudioChunkMetadata_new();

#ifdef __cplusplus
}
#endif
