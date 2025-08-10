#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ProfilerFrame.h"
#include "ProfilerStack.h"
#include "ProfilerSample.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProfilerTrace, em_Val);

jb_Array ProfilerTrace_resources(const ProfilerTrace *self);

void ProfilerTrace_set_resources(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_frames(const ProfilerTrace *self);

void ProfilerTrace_set_frames(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_stacks(const ProfilerTrace *self);

void ProfilerTrace_set_stacks(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_samples(const ProfilerTrace *self);

void ProfilerTrace_set_samples(ProfilerTrace* self, jb_Array * value);

ProfilerTrace ProfilerTrace_new();

#ifdef __cplusplus
}
#endif
