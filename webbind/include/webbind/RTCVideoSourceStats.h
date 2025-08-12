#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCMediaSourceStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCVideoSourceStats */
DECLARE_EMLITE_TYPE(RTCVideoSourceStats, RTCMediaSourceStats);

/** @brief Getter of the width property */
unsigned long RTCVideoSourceStats_width(const RTCVideoSourceStats *self);

/** @brief Setter of the width property */
void RTCVideoSourceStats_set_width(RTCVideoSourceStats* self, unsigned long value);

/** @brief Getter of the height property */
unsigned long RTCVideoSourceStats_height(const RTCVideoSourceStats *self);

/** @brief Setter of the height property */
void RTCVideoSourceStats_set_height(RTCVideoSourceStats* self, unsigned long value);

/** @brief Getter of the frames property */
unsigned long RTCVideoSourceStats_frames(const RTCVideoSourceStats *self);

/** @brief Setter of the frames property */
void RTCVideoSourceStats_set_frames(RTCVideoSourceStats* self, unsigned long value);

/** @brief Getter of the framesPerSecond property */
double RTCVideoSourceStats_framesPerSecond(const RTCVideoSourceStats *self);

/** @brief Setter of the framesPerSecond property */
void RTCVideoSourceStats_set_framesPerSecond(RTCVideoSourceStats* self, double value);

/** @brief Constructor of the RTCVideoSourceStats dictionary type */
RTCVideoSourceStats RTCVideoSourceStats_new();

#ifdef __cplusplus
}
#endif
