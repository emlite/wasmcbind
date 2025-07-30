#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUSampler, em_Val);

jb_String GPUSampler_label(const GPUSampler *self);

void GPUSampler_set_label(GPUSampler* self, jb_String * value);
