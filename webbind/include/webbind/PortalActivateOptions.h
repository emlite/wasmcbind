#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "StructuredSerializeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PortalActivateOptions, StructuredSerializeOptions);

jb_Any PortalActivateOptions_data(const PortalActivateOptions *self);

void PortalActivateOptions_set_data(PortalActivateOptions* self, jb_Any * value);

PortalActivateOptions PortalActivateOptions_new();

#ifdef __cplusplus
}
#endif
