#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProfilerSample, em_Val);

jb_Any ProfilerSample_timestamp(const ProfilerSample *self);

void ProfilerSample_set_timestamp(ProfilerSample* self, jb_Any * value);

long long ProfilerSample_stackId(const ProfilerSample *self);

void ProfilerSample_set_stackId(ProfilerSample* self, long long value);

ProfilerSample ProfilerSample_new();

#ifdef __cplusplus
}
#endif
