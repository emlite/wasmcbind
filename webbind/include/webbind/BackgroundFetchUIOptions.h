#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ImageResource.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);

jb_Array BackgroundFetchUIOptions_icons(const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, jb_Array * value);

jb_String BackgroundFetchUIOptions_title(const BackgroundFetchUIOptions *self);

void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, jb_String * value);

BackgroundFetchUIOptions BackgroundFetchUIOptions_new();

#ifdef __cplusplus
}
#endif
