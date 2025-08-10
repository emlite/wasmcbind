#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaSettingsRange.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PhotoCapabilities, em_Val);

RedEyeReduction PhotoCapabilities_redEyeReduction(const PhotoCapabilities *self);

void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, RedEyeReduction * value);

MediaSettingsRange PhotoCapabilities_imageHeight(const PhotoCapabilities *self);

void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, MediaSettingsRange * value);

MediaSettingsRange PhotoCapabilities_imageWidth(const PhotoCapabilities *self);

void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, MediaSettingsRange * value);

jb_Array PhotoCapabilities_fillLightMode(const PhotoCapabilities *self);

void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, jb_Array * value);

PhotoCapabilities PhotoCapabilities_new();

#ifdef __cplusplus
}
#endif
