#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCEncodedFrameMetadata.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCEncodedVideoFrameMetadata */
DECLARE_EMLITE_TYPE(RTCEncodedVideoFrameMetadata, RTCEncodedFrameMetadata);

/** @brief Getter of the frameId property */
long long RTCEncodedVideoFrameMetadata_frameId(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the frameId property */
void RTCEncodedVideoFrameMetadata_set_frameId(RTCEncodedVideoFrameMetadata* self, long long value);

/** @brief Getter of the dependencies property */
jb_Array RTCEncodedVideoFrameMetadata_dependencies(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the dependencies property */
void RTCEncodedVideoFrameMetadata_set_dependencies(RTCEncodedVideoFrameMetadata* self, jb_Array * value);

/** @brief Getter of the width property */
unsigned short RTCEncodedVideoFrameMetadata_width(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the width property */
void RTCEncodedVideoFrameMetadata_set_width(RTCEncodedVideoFrameMetadata* self, unsigned short value);

/** @brief Getter of the height property */
unsigned short RTCEncodedVideoFrameMetadata_height(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the height property */
void RTCEncodedVideoFrameMetadata_set_height(RTCEncodedVideoFrameMetadata* self, unsigned short value);

/** @brief Getter of the spatialIndex property */
unsigned long RTCEncodedVideoFrameMetadata_spatialIndex(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the spatialIndex property */
void RTCEncodedVideoFrameMetadata_set_spatialIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value);

/** @brief Getter of the temporalIndex property */
unsigned long RTCEncodedVideoFrameMetadata_temporalIndex(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the temporalIndex property */
void RTCEncodedVideoFrameMetadata_set_temporalIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value);

/** @brief Getter of the timestamp property */
long long RTCEncodedVideoFrameMetadata_timestamp(const RTCEncodedVideoFrameMetadata *self);

/** @brief Setter of the timestamp property */
void RTCEncodedVideoFrameMetadata_set_timestamp(RTCEncodedVideoFrameMetadata* self, long long value);

/** @brief Constructor of the RTCEncodedVideoFrameMetadata dictionary type */
RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata_new();

#ifdef __cplusplus
}
#endif
