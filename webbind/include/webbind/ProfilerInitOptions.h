#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProfilerInitOptions, em_Val);

jb_Any ProfilerInitOptions_sampleInterval(const ProfilerInitOptions *self);

void ProfilerInitOptions_set_sampleInterval(ProfilerInitOptions* self, jb_Any * value);

unsigned long ProfilerInitOptions_maxBufferSize(const ProfilerInitOptions *self);

void ProfilerInitOptions_set_maxBufferSize(ProfilerInitOptions* self, unsigned long value);

ProfilerInitOptions ProfilerInitOptions_new();

#ifdef __cplusplus
}
#endif
