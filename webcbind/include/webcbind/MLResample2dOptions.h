#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLResample2dOptions */
DECLARE_EMLITE_TYPE(MLResample2dOptions, MLOperatorOptions);

/** @brief Getter of the mode property */
MLInterpolationMode MLResample2dOptions_mode(const MLResample2dOptions *self);

/** @brief Setter of the mode property */
void MLResample2dOptions_set_mode(MLResample2dOptions* self, MLInterpolationMode * value);

/** @brief Getter of the scales property */
jb_Array MLResample2dOptions_scales(const MLResample2dOptions *self);

/** @brief Setter of the scales property */
void MLResample2dOptions_set_scales(MLResample2dOptions* self, jb_Array * value);

/** @brief Getter of the sizes property */
jb_Array MLResample2dOptions_sizes(const MLResample2dOptions *self);

/** @brief Setter of the sizes property */
void MLResample2dOptions_set_sizes(MLResample2dOptions* self, jb_Array * value);

/** @brief Getter of the axes property */
jb_Array MLResample2dOptions_axes(const MLResample2dOptions *self);

/** @brief Setter of the axes property */
void MLResample2dOptions_set_axes(MLResample2dOptions* self, jb_Array * value);

/** @brief Constructor of the MLResample2dOptions dictionary type */
MLResample2dOptions MLResample2dOptions_new();

#ifdef __cplusplus
}
#endif
