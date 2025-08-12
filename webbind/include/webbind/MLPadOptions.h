#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MLOperatorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLPadOptions */
DECLARE_EMLITE_TYPE(MLPadOptions, MLOperatorOptions);

/** @brief Getter of the mode property */
MLPaddingMode MLPadOptions_mode(const MLPadOptions *self);

/** @brief Setter of the mode property */
void MLPadOptions_set_mode(MLPadOptions* self, MLPaddingMode * value);

/** @brief Getter of the value property */
jb_Any MLPadOptions_value(const MLPadOptions *self);

/** @brief Setter of the value property */
void MLPadOptions_set_value(MLPadOptions* self, jb_Any * value);

/** @brief Constructor of the MLPadOptions dictionary type */
MLPadOptions MLPadOptions_new();

#ifdef __cplusplus
}
#endif
