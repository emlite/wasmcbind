#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProfilerStack */
DECLARE_EMLITE_TYPE(ProfilerStack, em_Val);

/** @brief Getter of the parentId property */
long long ProfilerStack_parentId(const ProfilerStack *self);

/** @brief Setter of the parentId property */
void ProfilerStack_set_parentId(ProfilerStack* self, long long value);

/** @brief Getter of the frameId property */
long long ProfilerStack_frameId(const ProfilerStack *self);

/** @brief Setter of the frameId property */
void ProfilerStack_set_frameId(ProfilerStack* self, long long value);

/** @brief Constructor of the ProfilerStack dictionary type */
ProfilerStack ProfilerStack_new();

#ifdef __cplusplus
}
#endif
