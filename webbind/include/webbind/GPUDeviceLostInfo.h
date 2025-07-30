#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUDeviceLostInfo, em_Val);

GPUDeviceLostReason GPUDeviceLostInfo_reason(const GPUDeviceLostInfo *self);

jb_String GPUDeviceLostInfo_message(const GPUDeviceLostInfo *self);
