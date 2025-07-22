#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUExternalTexture, em_Val);

jb_USVString GPUExternalTexture_label( const GPUExternalTexture *self);

void GPUExternalTexture_set_label(GPUExternalTexture* self, jb_USVString * value);
