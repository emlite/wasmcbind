#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaSettingsRange */
DECLARE_EMLITE_TYPE(MediaSettingsRange, em_Val);

/** @brief Getter of the max property */
double MediaSettingsRange_max(const MediaSettingsRange *self);

/** @brief Setter of the max property */
void MediaSettingsRange_set_max(MediaSettingsRange* self, double value);

/** @brief Getter of the min property */
double MediaSettingsRange_min(const MediaSettingsRange *self);

/** @brief Setter of the min property */
void MediaSettingsRange_set_min(MediaSettingsRange* self, double value);

/** @brief Getter of the step property */
double MediaSettingsRange_step(const MediaSettingsRange *self);

/** @brief Setter of the step property */
void MediaSettingsRange_set_step(MediaSettingsRange* self, double value);

/** @brief Constructor of the MediaSettingsRange dictionary type */
MediaSettingsRange MediaSettingsRange_new();

#ifdef __cplusplus
}
#endif
