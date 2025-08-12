#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ImageResource.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BackgroundFetchUIOptions */
DECLARE_EMLITE_TYPE(BackgroundFetchUIOptions, em_Val);

/** @brief Getter of the icons property */
jb_Array BackgroundFetchUIOptions_icons(const BackgroundFetchUIOptions *self);

/** @brief Setter of the icons property */
void BackgroundFetchUIOptions_set_icons(BackgroundFetchUIOptions* self, jb_Array * value);

/** @brief Getter of the title property */
jb_String BackgroundFetchUIOptions_title(const BackgroundFetchUIOptions *self);

/** @brief Setter of the title property */
void BackgroundFetchUIOptions_set_title(BackgroundFetchUIOptions* self, jb_String * value);

/** @brief Constructor of the BackgroundFetchUIOptions dictionary type */
BackgroundFetchUIOptions BackgroundFetchUIOptions_new();

#ifdef __cplusplus
}
#endif
