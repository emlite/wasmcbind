#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUBindGroup;


DECLARE_EMLITE_TYPE(GPUBindGroup, em_Val);

jb_USVString GPUBindGroup_label( const GPUBindGroup *self);

void GPUBindGroup_set_label(GPUBindGroup* self, const jb_USVString* value);
