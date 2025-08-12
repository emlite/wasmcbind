#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "StructuredSerializeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PortalActivateOptions */
DECLARE_EMLITE_TYPE(PortalActivateOptions, StructuredSerializeOptions);

/** @brief Getter of the data property */
jb_Any PortalActivateOptions_data(const PortalActivateOptions *self);

/** @brief Setter of the data property */
void PortalActivateOptions_set_data(PortalActivateOptions* self, jb_Any * value);

/** @brief Constructor of the PortalActivateOptions dictionary type */
PortalActivateOptions PortalActivateOptions_new();

#ifdef __cplusplus
}
#endif
