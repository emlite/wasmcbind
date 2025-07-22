#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUExternalTexture;


DECLARE_EMLITE_TYPE(GPUExternalTexture, em_Val);

jb_USVString GPUExternalTexture_label( const GPUExternalTexture *self);

void GPUExternalTexture_set_label(GPUExternalTexture* self, const jb_USVString* value);
