#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaCapabilitiesInfo.h"
#include "MediaEncodingConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaCapabilitiesEncodingInfo, MediaCapabilitiesInfo);

MediaEncodingConfiguration MediaCapabilitiesEncodingInfo_configuration(const MediaCapabilitiesEncodingInfo *self);

void MediaCapabilitiesEncodingInfo_set_configuration(MediaCapabilitiesEncodingInfo* self, MediaEncodingConfiguration * value);

MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo_new();

#ifdef __cplusplus
}
#endif
