#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCStats */
DECLARE_EMLITE_TYPE(RTCStats, em_Val);

/** @brief Getter of the timestamp property */
jb_Any RTCStats_timestamp(const RTCStats *self);

/** @brief Setter of the timestamp property */
void RTCStats_set_timestamp(RTCStats* self, jb_Any * value);

/** @brief Getter of the type property */
RTCStatsType RTCStats_type(const RTCStats *self);

/** @brief Setter of the type property */
void RTCStats_set_type(RTCStats* self, RTCStatsType * value);

/** @brief Getter of the id property */
jb_String RTCStats_id(const RTCStats *self);

/** @brief Setter of the id property */
void RTCStats_set_id(RTCStats* self, jb_String * value);

/** @brief Constructor of the RTCStats dictionary type */
RTCStats RTCStats_new();

#ifdef __cplusplus
}
#endif
