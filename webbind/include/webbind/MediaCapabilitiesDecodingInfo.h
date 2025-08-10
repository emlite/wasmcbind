#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaCapabilitiesInfo.h"
#include "MediaDecodingConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeySystemAccess MediaKeySystemAccess;

DECLARE_EMLITE_TYPE(MediaCapabilitiesDecodingInfo, MediaCapabilitiesInfo);

MediaKeySystemAccess MediaCapabilitiesDecodingInfo_keySystemAccess(const MediaCapabilitiesDecodingInfo *self);

void MediaCapabilitiesDecodingInfo_set_keySystemAccess(MediaCapabilitiesDecodingInfo* self, MediaKeySystemAccess * value);

MediaDecodingConfiguration MediaCapabilitiesDecodingInfo_configuration(const MediaCapabilitiesDecodingInfo *self);

void MediaCapabilitiesDecodingInfo_set_configuration(MediaCapabilitiesDecodingInfo* self, MediaDecodingConfiguration * value);

MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo_new();

#ifdef __cplusplus
}
#endif
