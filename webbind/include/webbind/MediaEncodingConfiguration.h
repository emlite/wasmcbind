#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaEncodingConfiguration, MediaConfiguration);

MediaEncodingType MediaEncodingConfiguration_type(const MediaEncodingConfiguration *self);

void MediaEncodingConfiguration_set_type(MediaEncodingConfiguration* self, MediaEncodingType * value);

MediaEncodingConfiguration MediaEncodingConfiguration_new();

#ifdef __cplusplus
}
#endif
