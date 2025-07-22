#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUBindGroupLayout;


DECLARE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);

jb_USVString GPUBindGroupLayout_label( const GPUBindGroupLayout *self);

void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, const jb_USVString* value);
