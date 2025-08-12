#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SVGPathDataSettings */
DECLARE_EMLITE_TYPE(SVGPathDataSettings, em_Val);

/** @brief Getter of the normalize property */
bool SVGPathDataSettings_normalize(const SVGPathDataSettings *self);

/** @brief Setter of the normalize property */
void SVGPathDataSettings_set_normalize(SVGPathDataSettings* self, bool value);

/** @brief Constructor of the SVGPathDataSettings dictionary type */
SVGPathDataSettings SVGPathDataSettings_new();

#ifdef __cplusplus
}
#endif
