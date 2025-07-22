#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUTextureView;


DECLARE_EMLITE_TYPE(GPUTextureView, em_Val);

jb_USVString GPUTextureView_label( const GPUTextureView *self);

void GPUTextureView_set_label(GPUTextureView* self, const jb_USVString* value);
