#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoDecoderConfig.h"
#include "SvcOutputMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EncodedVideoChunkMetadata, em_Val);

VideoDecoderConfig EncodedVideoChunkMetadata_decoderConfig(const EncodedVideoChunkMetadata *self);

void EncodedVideoChunkMetadata_set_decoderConfig(EncodedVideoChunkMetadata* self, VideoDecoderConfig * value);

SvcOutputMetadata EncodedVideoChunkMetadata_svc(const EncodedVideoChunkMetadata *self);

void EncodedVideoChunkMetadata_set_svc(EncodedVideoChunkMetadata* self, SvcOutputMetadata * value);

jb_Any EncodedVideoChunkMetadata_alphaSideData(const EncodedVideoChunkMetadata *self);

void EncodedVideoChunkMetadata_set_alphaSideData(EncodedVideoChunkMetadata* self, jb_Any * value);

EncodedVideoChunkMetadata EncodedVideoChunkMetadata_new();

#ifdef __cplusplus
}
#endif
