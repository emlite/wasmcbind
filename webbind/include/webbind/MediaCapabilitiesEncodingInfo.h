#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaCapabilitiesInfo.h"
#include "MediaEncodingConfiguration.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaCapabilitiesEncodingInfo */
DECLARE_EMLITE_TYPE(MediaCapabilitiesEncodingInfo, MediaCapabilitiesInfo);

/** @brief Getter of the configuration property */
MediaEncodingConfiguration MediaCapabilitiesEncodingInfo_configuration(const MediaCapabilitiesEncodingInfo *self);

/** @brief Setter of the configuration property */
void MediaCapabilitiesEncodingInfo_set_configuration(MediaCapabilitiesEncodingInfo* self, MediaEncodingConfiguration * value);

/** @brief Constructor of the MediaCapabilitiesEncodingInfo dictionary type */
MediaCapabilitiesEncodingInfo MediaCapabilitiesEncodingInfo_new();

#ifdef __cplusplus
}
#endif
