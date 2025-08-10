#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaSettingsRange, em_Val);

double MediaSettingsRange_max(const MediaSettingsRange *self);

void MediaSettingsRange_set_max(MediaSettingsRange* self, double value);

double MediaSettingsRange_min(const MediaSettingsRange *self);

void MediaSettingsRange_set_min(MediaSettingsRange* self, double value);

double MediaSettingsRange_step(const MediaSettingsRange *self);

void MediaSettingsRange_set_step(MediaSettingsRange* self, double value);

MediaSettingsRange MediaSettingsRange_new();

#ifdef __cplusplus
}
#endif
