#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaConfiguration.h"
#include "MediaCapabilitiesKeySystemConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaDecodingConfiguration, MediaConfiguration);

MediaDecodingType MediaDecodingConfiguration_type(const MediaDecodingConfiguration *self);

void MediaDecodingConfiguration_set_type(MediaDecodingConfiguration* self, MediaDecodingType * value);

MediaCapabilitiesKeySystemConfiguration MediaDecodingConfiguration_keySystemConfiguration(const MediaDecodingConfiguration *self);

void MediaDecodingConfiguration_set_keySystemConfiguration(MediaDecodingConfiguration* self, MediaCapabilitiesKeySystemConfiguration * value);

MediaDecodingConfiguration MediaDecodingConfiguration_new();

#ifdef __cplusplus
}
#endif
