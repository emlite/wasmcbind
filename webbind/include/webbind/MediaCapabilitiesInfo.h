#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaCapabilitiesInfo */
DECLARE_EMLITE_TYPE(MediaCapabilitiesInfo, em_Val);

/** @brief Getter of the supported property */
bool MediaCapabilitiesInfo_supported(const MediaCapabilitiesInfo *self);

/** @brief Setter of the supported property */
void MediaCapabilitiesInfo_set_supported(MediaCapabilitiesInfo* self, bool value);

/** @brief Getter of the smooth property */
bool MediaCapabilitiesInfo_smooth(const MediaCapabilitiesInfo *self);

/** @brief Setter of the smooth property */
void MediaCapabilitiesInfo_set_smooth(MediaCapabilitiesInfo* self, bool value);

/** @brief Getter of the powerEfficient property */
bool MediaCapabilitiesInfo_powerEfficient(const MediaCapabilitiesInfo *self);

/** @brief Setter of the powerEfficient property */
void MediaCapabilitiesInfo_set_powerEfficient(MediaCapabilitiesInfo* self, bool value);

/** @brief Constructor of the MediaCapabilitiesInfo dictionary type */
MediaCapabilitiesInfo MediaCapabilitiesInfo_new();

#ifdef __cplusplus
}
#endif
