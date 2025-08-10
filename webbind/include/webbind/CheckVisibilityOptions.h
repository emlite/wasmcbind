#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);

bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value);

CheckVisibilityOptions CheckVisibilityOptions_new();

#ifdef __cplusplus
}
#endif
