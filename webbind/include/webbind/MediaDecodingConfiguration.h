#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaConfiguration.h"
#include "MediaCapabilitiesKeySystemConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaDecodingConfiguration */
DECLARE_EMLITE_TYPE(MediaDecodingConfiguration, MediaConfiguration);

/** @brief Getter of the type property */
MediaDecodingType MediaDecodingConfiguration_type(const MediaDecodingConfiguration *self);

/** @brief Setter of the type property */
void MediaDecodingConfiguration_set_type(MediaDecodingConfiguration* self, MediaDecodingType * value);

/** @brief Getter of the keySystemConfiguration property */
MediaCapabilitiesKeySystemConfiguration MediaDecodingConfiguration_keySystemConfiguration(const MediaDecodingConfiguration *self);

/** @brief Setter of the keySystemConfiguration property */
void MediaDecodingConfiguration_set_keySystemConfiguration(MediaDecodingConfiguration* self, MediaCapabilitiesKeySystemConfiguration * value);

/** @brief Constructor of the MediaDecodingConfiguration dictionary type */
MediaDecodingConfiguration MediaDecodingConfiguration_new();

#ifdef __cplusplus
}
#endif
