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

/** @brief Dictionary type MediaCapabilitiesDecodingInfo */
DECLARE_EMLITE_TYPE(MediaCapabilitiesDecodingInfo, MediaCapabilitiesInfo);

/** @brief Getter of the keySystemAccess property */
MediaKeySystemAccess MediaCapabilitiesDecodingInfo_keySystemAccess(const MediaCapabilitiesDecodingInfo *self);

/** @brief Setter of the keySystemAccess property */
void MediaCapabilitiesDecodingInfo_set_keySystemAccess(MediaCapabilitiesDecodingInfo* self, MediaKeySystemAccess * value);

/** @brief Getter of the configuration property */
MediaDecodingConfiguration MediaCapabilitiesDecodingInfo_configuration(const MediaCapabilitiesDecodingInfo *self);

/** @brief Setter of the configuration property */
void MediaCapabilitiesDecodingInfo_set_configuration(MediaCapabilitiesDecodingInfo* self, MediaDecodingConfiguration * value);

/** @brief Constructor of the MediaCapabilitiesDecodingInfo dictionary type */
MediaCapabilitiesDecodingInfo MediaCapabilitiesDecodingInfo_new();

#ifdef __cplusplus
}
#endif
