#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProfilerFrame, em_Val);

jb_String ProfilerFrame_name(const ProfilerFrame *self);

void ProfilerFrame_set_name(ProfilerFrame* self, jb_String * value);

long long ProfilerFrame_resourceId(const ProfilerFrame *self);

void ProfilerFrame_set_resourceId(ProfilerFrame* self, long long value);

long long ProfilerFrame_line(const ProfilerFrame *self);

void ProfilerFrame_set_line(ProfilerFrame* self, long long value);

long long ProfilerFrame_column(const ProfilerFrame *self);

void ProfilerFrame_set_column(ProfilerFrame* self, long long value);

ProfilerFrame ProfilerFrame_new();

#ifdef __cplusplus
}
#endif
