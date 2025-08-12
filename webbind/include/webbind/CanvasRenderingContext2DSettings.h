#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CanvasRenderingContext2DSettings */
DECLARE_EMLITE_TYPE(CanvasRenderingContext2DSettings, em_Val);

/** @brief Getter of the alpha property */
bool CanvasRenderingContext2DSettings_alpha(const CanvasRenderingContext2DSettings *self);

/** @brief Setter of the alpha property */
void CanvasRenderingContext2DSettings_set_alpha(CanvasRenderingContext2DSettings* self, bool value);

/** @brief Getter of the desynchronized property */
bool CanvasRenderingContext2DSettings_desynchronized(const CanvasRenderingContext2DSettings *self);

/** @brief Setter of the desynchronized property */
void CanvasRenderingContext2DSettings_set_desynchronized(CanvasRenderingContext2DSettings* self, bool value);

/** @brief Getter of the colorSpace property */
PredefinedColorSpace CanvasRenderingContext2DSettings_colorSpace(const CanvasRenderingContext2DSettings *self);

/** @brief Setter of the colorSpace property */
void CanvasRenderingContext2DSettings_set_colorSpace(CanvasRenderingContext2DSettings* self, PredefinedColorSpace * value);

/** @brief Getter of the colorType property */
CanvasColorType CanvasRenderingContext2DSettings_colorType(const CanvasRenderingContext2DSettings *self);

/** @brief Setter of the colorType property */
void CanvasRenderingContext2DSettings_set_colorType(CanvasRenderingContext2DSettings* self, CanvasColorType * value);

/** @brief Getter of the willReadFrequently property */
bool CanvasRenderingContext2DSettings_willReadFrequently(const CanvasRenderingContext2DSettings *self);

/** @brief Setter of the willReadFrequently property */
void CanvasRenderingContext2DSettings_set_willReadFrequently(CanvasRenderingContext2DSettings* self, bool value);

/** @brief Constructor of the CanvasRenderingContext2DSettings dictionary type */
CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings_new();

#ifdef __cplusplus
}
#endif
