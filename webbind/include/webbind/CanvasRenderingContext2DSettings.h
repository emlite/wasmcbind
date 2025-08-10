#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CanvasRenderingContext2DSettings, em_Val);

bool CanvasRenderingContext2DSettings_alpha(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_alpha(CanvasRenderingContext2DSettings* self, bool value);

bool CanvasRenderingContext2DSettings_desynchronized(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_desynchronized(CanvasRenderingContext2DSettings* self, bool value);

PredefinedColorSpace CanvasRenderingContext2DSettings_colorSpace(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_colorSpace(CanvasRenderingContext2DSettings* self, PredefinedColorSpace * value);

CanvasColorType CanvasRenderingContext2DSettings_colorType(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_colorType(CanvasRenderingContext2DSettings* self, CanvasColorType * value);

bool CanvasRenderingContext2DSettings_willReadFrequently(const CanvasRenderingContext2DSettings *self);

void CanvasRenderingContext2DSettings_set_willReadFrequently(CanvasRenderingContext2DSettings* self, bool value);

CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings_new();

#ifdef __cplusplus
}
#endif
