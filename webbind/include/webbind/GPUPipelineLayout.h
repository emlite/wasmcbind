#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUPipelineLayout;


DECLARE_EMLITE_TYPE(GPUPipelineLayout, em_Val);

jb_USVString GPUPipelineLayout_label( const GPUPipelineLayout *self);

void GPUPipelineLayout_set_label(GPUPipelineLayout* self, const jb_USVString* value);
