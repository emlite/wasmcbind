#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProfilerStack, em_Val);

long long ProfilerStack_parentId(const ProfilerStack *self);

void ProfilerStack_set_parentId(ProfilerStack* self, long long value);

long long ProfilerStack_frameId(const ProfilerStack *self);

void ProfilerStack_set_frameId(ProfilerStack* self, long long value);

ProfilerStack ProfilerStack_new();

#ifdef __cplusplus
}
#endif
