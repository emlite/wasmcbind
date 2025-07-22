#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUCommandBuffer;


DECLARE_EMLITE_TYPE(GPUCommandBuffer, em_Val);

jb_USVString GPUCommandBuffer_label( const GPUCommandBuffer *self);

void GPUCommandBuffer_set_label(GPUCommandBuffer* self, const jb_USVString* value);
