#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRDepthInformation.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(XRCPUDepthInformation, XRDepthInformation);

jb_ArrayBuffer XRCPUDepthInformation_data(const XRCPUDepthInformation *self);

float XRCPUDepthInformation_getDepthInMeters(XRCPUDepthInformation* self , float x, float y);
