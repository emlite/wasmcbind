#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MediaDeviceInfo.h"
#include "MediaStreamTrack.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(InputDeviceInfo, MediaDeviceInfo);

MediaTrackCapabilities InputDeviceInfo_getCapabilities(InputDeviceInfo* self );
