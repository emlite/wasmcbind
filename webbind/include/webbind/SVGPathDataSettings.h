#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SVGPathDataSettings, em_Val);

bool SVGPathDataSettings_normalize(const SVGPathDataSettings *self);

void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value);

SVGPathDataSettings SVGPathDataSettings_new();

#ifdef __cplusplus
}
#endif
