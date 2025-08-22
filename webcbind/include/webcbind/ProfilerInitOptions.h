#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProfilerInitOptions */
DECLARE_EMLITE_TYPE(ProfilerInitOptions, em_Val);

/** @brief Getter of the sampleInterval property */
jb_Any ProfilerInitOptions_sampleInterval(const ProfilerInitOptions *self);

/** @brief Setter of the sampleInterval property */
void ProfilerInitOptions_set_sampleInterval(ProfilerInitOptions* self, jb_Any * value);

/** @brief Getter of the maxBufferSize property */
unsigned long ProfilerInitOptions_maxBufferSize(const ProfilerInitOptions *self);

/** @brief Setter of the maxBufferSize property */
void ProfilerInitOptions_set_maxBufferSize(ProfilerInitOptions* self, unsigned long value);

/** @brief Constructor of the ProfilerInitOptions dictionary type */
ProfilerInitOptions ProfilerInitOptions_new();

#ifdef __cplusplus
}
#endif
