#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUPipelineLayout, em_Val);

jb_String GPUPipelineLayout_label(const GPUPipelineLayout *self);

void GPUPipelineLayout_set_label(GPUPipelineLayout* self, jb_String * value);
