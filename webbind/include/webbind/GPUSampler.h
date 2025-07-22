#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} GPUSampler;


DECLARE_EMLITE_TYPE(GPUSampler, em_Val);

jb_USVString GPUSampler_label( const GPUSampler *self);

void GPUSampler_set_label(GPUSampler* self, const jb_USVString* value);
