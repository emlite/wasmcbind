#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(GPURenderBundle, em_Val);

jb_USVString GPURenderBundle_label( const GPURenderBundle *self);

void GPURenderBundle_set_label(GPURenderBundle* self, jb_USVString * value);
