#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ScreenDetailed ScreenDetailed;

DECLARE_EMLITE_TYPE(FullscreenOptions, em_Val);

ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self);

void FullscreenOptions_set_screen(FullscreenOptions* self, ScreenDetailed * value);

FullscreenOptions FullscreenOptions_new();

#ifdef __cplusplus
}
#endif
