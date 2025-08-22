#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ShowPopoverOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TogglePopoverOptions */
DECLARE_EMLITE_TYPE(TogglePopoverOptions, ShowPopoverOptions);

/** @brief Getter of the force property */
bool TogglePopoverOptions_force(const TogglePopoverOptions *self);

/** @brief Setter of the force property */
void TogglePopoverOptions_set_force(TogglePopoverOptions* self, bool value);

/** @brief Constructor of the TogglePopoverOptions dictionary type */
TogglePopoverOptions TogglePopoverOptions_new();

#ifdef __cplusplus
}
#endif
