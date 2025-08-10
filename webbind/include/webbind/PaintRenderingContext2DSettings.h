#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PaintRenderingContext2DSettings, em_Val);

bool PaintRenderingContext2DSettings_alpha(const PaintRenderingContext2DSettings *self);

void PaintRenderingContext2DSettings_set_alpha(PaintRenderingContext2DSettings* self, bool value);

PaintRenderingContext2DSettings PaintRenderingContext2DSettings_new();

#ifdef __cplusplus
}
#endif
