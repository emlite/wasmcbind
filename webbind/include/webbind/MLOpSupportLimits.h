#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLWhereSupportLimits.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLOpSupportLimits, em_Val);

MLWhereSupportLimits MLOpSupportLimits_where(const MLOpSupportLimits *self);

void MLOpSupportLimits_set_where(MLOpSupportLimits* self, MLWhereSupportLimits * value);

MLOpSupportLimits MLOpSupportLimits_new();

#ifdef __cplusplus
}
#endif
