#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ProfilerFrame */
DECLARE_EMLITE_TYPE(ProfilerFrame, em_Val);

/** @brief Getter of the name property */
jb_String ProfilerFrame_name(const ProfilerFrame *self);

/** @brief Setter of the name property */
void ProfilerFrame_set_name(ProfilerFrame* self, jb_String * value);

/** @brief Getter of the resourceId property */
long long ProfilerFrame_resourceId(const ProfilerFrame *self);

/** @brief Setter of the resourceId property */
void ProfilerFrame_set_resourceId(ProfilerFrame* self, long long value);

/** @brief Getter of the line property */
long long ProfilerFrame_line(const ProfilerFrame *self);

/** @brief Setter of the line property */
void ProfilerFrame_set_line(ProfilerFrame* self, long long value);

/** @brief Getter of the column property */
long long ProfilerFrame_column(const ProfilerFrame *self);

/** @brief Setter of the column property */
void ProfilerFrame_set_column(ProfilerFrame* self, long long value);

/** @brief Constructor of the ProfilerFrame dictionary type */
ProfilerFrame ProfilerFrame_new();

#ifdef __cplusplus
}
#endif
