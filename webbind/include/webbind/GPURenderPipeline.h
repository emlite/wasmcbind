#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUBindGroupLayout GPUBindGroupLayout;


DECLARE_EMLITE_TYPE(GPURenderPipeline, em_Val);

jb_String GPURenderPipeline_label(const GPURenderPipeline *self);

void GPURenderPipeline_set_label(GPURenderPipeline* self, jb_String * value);

GPUBindGroupLayout GPURenderPipeline_getBindGroupLayout(GPURenderPipeline* self , unsigned long index);
