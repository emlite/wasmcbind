#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ShowPopoverOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(TogglePopoverOptions, ShowPopoverOptions);

bool TogglePopoverOptions_force(const TogglePopoverOptions *self);

void TogglePopoverOptions_set_force(TogglePopoverOptions* self, bool value);

TogglePopoverOptions TogglePopoverOptions_new();

#ifdef __cplusplus
}
#endif
