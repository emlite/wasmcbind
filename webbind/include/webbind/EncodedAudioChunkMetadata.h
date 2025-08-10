#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EncodedAudioChunkMetadata, em_Val);

AudioDecoderConfig EncodedAudioChunkMetadata_decoderConfig(const EncodedAudioChunkMetadata *self);

void EncodedAudioChunkMetadata_set_decoderConfig(EncodedAudioChunkMetadata* self, AudioDecoderConfig * value);

EncodedAudioChunkMetadata EncodedAudioChunkMetadata_new();

#ifdef __cplusplus
}
#endif
