#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProfilerSample */
DECLARE_EMLITE_TYPE(ProfilerSample, em_Val);

/** @brief Getter of the timestamp property */
jb_Any ProfilerSample_timestamp(const ProfilerSample *self);

/** @brief Setter of the timestamp property */
void ProfilerSample_set_timestamp(ProfilerSample* self, jb_Any * value);

/** @brief Getter of the stackId property */
long long ProfilerSample_stackId(const ProfilerSample *self);

/** @brief Setter of the stackId property */
void ProfilerSample_set_stackId(ProfilerSample* self, long long value);

/** @brief Constructor of the ProfilerSample dictionary type */
ProfilerSample ProfilerSample_new();

#ifdef __cplusplus
}
#endif
