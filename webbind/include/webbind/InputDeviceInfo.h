#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaDeviceInfo.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaTrackCapabilities MediaTrackCapabilities;

DECLARE_EMLITE_TYPE(InputDeviceInfo, MediaDeviceInfo);

MediaTrackCapabilities InputDeviceInfo_getCapabilities(InputDeviceInfo* self );

#ifdef __cplusplus
}
#endif
