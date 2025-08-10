#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaCapabilitiesInfo, em_Val);

bool MediaCapabilitiesInfo_supported(const MediaCapabilitiesInfo *self);

void MediaCapabilitiesInfo_set_supported(MediaCapabilitiesInfo* self, bool value);

bool MediaCapabilitiesInfo_smooth(const MediaCapabilitiesInfo *self);

void MediaCapabilitiesInfo_set_smooth(MediaCapabilitiesInfo* self, bool value);

bool MediaCapabilitiesInfo_powerEfficient(const MediaCapabilitiesInfo *self);

void MediaCapabilitiesInfo_set_powerEfficient(MediaCapabilitiesInfo* self, bool value);

MediaCapabilitiesInfo MediaCapabilitiesInfo_new();

#ifdef __cplusplus
}
#endif
