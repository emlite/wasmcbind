#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PhotoSettings, em_Val);

FillLightMode PhotoSettings_fillLightMode(const PhotoSettings *self);

void PhotoSettings_set_fillLightMode(PhotoSettings* self, FillLightMode * value);

double PhotoSettings_imageHeight(const PhotoSettings *self);

void PhotoSettings_set_imageHeight(PhotoSettings* self, double value);

double PhotoSettings_imageWidth(const PhotoSettings *self);

void PhotoSettings_set_imageWidth(PhotoSettings* self, double value);

bool PhotoSettings_redEyeReduction(const PhotoSettings *self);

void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value);

PhotoSettings PhotoSettings_new();

#ifdef __cplusplus
}
#endif
