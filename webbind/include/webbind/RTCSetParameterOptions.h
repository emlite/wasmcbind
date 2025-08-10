#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);

RTCSetParameterOptions RTCSetParameterOptions_new();

#ifdef __cplusplus
}
#endif
