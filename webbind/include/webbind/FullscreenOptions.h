#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScreenDetailed ScreenDetailed;

/** @brief Dictionary type FullscreenOptions */
DECLARE_EMLITE_TYPE(FullscreenOptions, em_Val);

/** @brief Getter of the screen property */
ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self);

/** @brief Setter of the screen property */
void FullscreenOptions_set_screen(FullscreenOptions* self, ScreenDetailed * value);

/** @brief Constructor of the FullscreenOptions dictionary type */
FullscreenOptions FullscreenOptions_new();

#ifdef __cplusplus
}
#endif
