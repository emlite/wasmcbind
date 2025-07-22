#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUBindGroupLayout GPUBindGroupLayout;


typedef struct {
  em_Val inner;
} GPUComputePipeline;


DECLARE_EMLITE_TYPE(GPUComputePipeline, em_Val);

jb_USVString GPUComputePipeline_label( const GPUComputePipeline *self);

void GPUComputePipeline_set_label(GPUComputePipeline* self, const jb_USVString* value);

GPUBindGroupLayout GPUComputePipeline_getBindGroupLayout(GPUComputePipeline* self , unsigned long index);
