#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);

jb_USVString GPUBindGroupLayout_label(const GPUBindGroupLayout *self);

void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, jb_USVString * value);
