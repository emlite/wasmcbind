#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "UIEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EventTarget EventTarget;

/** @brief Dictionary type NavigationEventInit */
DECLARE_EMLITE_TYPE(NavigationEventInit, UIEventInit);

/** @brief Getter of the dir property */
SpatialNavigationDirection NavigationEventInit_dir(const NavigationEventInit *self);

/** @brief Setter of the dir property */
void NavigationEventInit_set_dir(NavigationEventInit* self, SpatialNavigationDirection * value);

/** @brief Getter of the relatedTarget property */
EventTarget NavigationEventInit_relatedTarget(const NavigationEventInit *self);

/** @brief Setter of the relatedTarget property */
void NavigationEventInit_set_relatedTarget(NavigationEventInit* self, EventTarget * value);

/** @brief Constructor of the NavigationEventInit dictionary type */
NavigationEventInit NavigationEventInit_new();

#ifdef __cplusplus
}
#endif
