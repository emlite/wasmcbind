#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PortalActivateEventInit */
DECLARE_EMLITE_TYPE(PortalActivateEventInit, EventInit);

/** @brief Getter of the data property */
jb_Any PortalActivateEventInit_data(const PortalActivateEventInit *self);

/** @brief Setter of the data property */
void PortalActivateEventInit_set_data(PortalActivateEventInit* self, jb_Any * value);

/** @brief Constructor of the PortalActivateEventInit dictionary type */
PortalActivateEventInit PortalActivateEventInit_new();

#ifdef __cplusplus
}
#endif
