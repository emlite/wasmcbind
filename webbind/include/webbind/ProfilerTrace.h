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

/** @brief Dictionary type ProfilerTrace */
DECLARE_EMLITE_TYPE(ProfilerTrace, em_Val);

/** @brief Getter of the resources property */
jb_Array ProfilerTrace_resources(const ProfilerTrace *self);

/** @brief Setter of the resources property */
void ProfilerTrace_set_resources(ProfilerTrace* self, jb_Array * value);

/** @brief Getter of the frames property */
jb_Array ProfilerTrace_frames(const ProfilerTrace *self);

/** @brief Setter of the frames property */
void ProfilerTrace_set_frames(ProfilerTrace* self, jb_Array * value);

/** @brief Getter of the stacks property */
jb_Array ProfilerTrace_stacks(const ProfilerTrace *self);

/** @brief Setter of the stacks property */
void ProfilerTrace_set_stacks(ProfilerTrace* self, jb_Array * value);

/** @brief Getter of the samples property */
jb_Array ProfilerTrace_samples(const ProfilerTrace *self);

/** @brief Setter of the samples property */
void ProfilerTrace_set_samples(ProfilerTrace* self, jb_Array * value);

/** @brief Constructor of the ProfilerTrace dictionary type */
ProfilerTrace ProfilerTrace_new();

#ifdef __cplusplus
}
#endif
