#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUTextureView, em_Val);

jb_USVString GPUTextureView_label( const GPUTextureView *self);

void GPUTextureView_set_label(GPUTextureView* self, jb_USVString * value);
