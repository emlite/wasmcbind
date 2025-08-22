#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PaintRenderingContext2DSettings */
DECLARE_EMLITE_TYPE(PaintRenderingContext2DSettings, em_Val);

/** @brief Getter of the alpha property */
bool PaintRenderingContext2DSettings_alpha(const PaintRenderingContext2DSettings *self);

/** @brief Setter of the alpha property */
void PaintRenderingContext2DSettings_set_alpha(PaintRenderingContext2DSettings* self, bool value);

/** @brief Constructor of the PaintRenderingContext2DSettings dictionary type */
PaintRenderingContext2DSettings PaintRenderingContext2DSettings_new();

#ifdef __cplusplus
}
#endif
