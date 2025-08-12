#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCMediaSourceStats */
DECLARE_EMLITE_TYPE(RTCMediaSourceStats, RTCStats);

/** @brief Getter of the trackIdentifier property */
jb_String RTCMediaSourceStats_trackIdentifier(const RTCMediaSourceStats *self);

/** @brief Setter of the trackIdentifier property */
void RTCMediaSourceStats_set_trackIdentifier(RTCMediaSourceStats* self, jb_String * value);

/** @brief Getter of the kind property */
jb_String RTCMediaSourceStats_kind(const RTCMediaSourceStats *self);

/** @brief Setter of the kind property */
void RTCMediaSourceStats_set_kind(RTCMediaSourceStats* self, jb_String * value);

/** @brief Constructor of the RTCMediaSourceStats dictionary type */
RTCMediaSourceStats RTCMediaSourceStats_new();

#ifdef __cplusplus
}
#endif
