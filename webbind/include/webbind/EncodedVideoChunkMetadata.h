#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "VideoDecoderConfig.h"
#include "SvcOutputMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EncodedVideoChunkMetadata */
DECLARE_EMLITE_TYPE(EncodedVideoChunkMetadata, em_Val);

/** @brief Getter of the decoderConfig property */
VideoDecoderConfig EncodedVideoChunkMetadata_decoderConfig(const EncodedVideoChunkMetadata *self);

/** @brief Setter of the decoderConfig property */
void EncodedVideoChunkMetadata_set_decoderConfig(EncodedVideoChunkMetadata* self, VideoDecoderConfig * value);

/** @brief Getter of the svc property */
SvcOutputMetadata EncodedVideoChunkMetadata_svc(const EncodedVideoChunkMetadata *self);

/** @brief Setter of the svc property */
void EncodedVideoChunkMetadata_set_svc(EncodedVideoChunkMetadata* self, SvcOutputMetadata * value);

/** @brief Getter of the alphaSideData property */
jb_Any EncodedVideoChunkMetadata_alphaSideData(const EncodedVideoChunkMetadata *self);

/** @brief Setter of the alphaSideData property */
void EncodedVideoChunkMetadata_set_alphaSideData(EncodedVideoChunkMetadata* self, jb_Any * value);

/** @brief Constructor of the EncodedVideoChunkMetadata dictionary type */
EncodedVideoChunkMetadata EncodedVideoChunkMetadata_new();

#ifdef __cplusplus
}
#endif
