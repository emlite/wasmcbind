#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstantSourceOptions */
DECLARE_EMLITE_TYPE(ConstantSourceOptions, em_Val);

/** @brief Getter of the offset property */
float ConstantSourceOptions_offset(const ConstantSourceOptions *self);

/** @brief Setter of the offset property */
void ConstantSourceOptions_set_offset(ConstantSourceOptions* self, float value);

/** @brief Constructor of the ConstantSourceOptions dictionary type */
ConstantSourceOptions ConstantSourceOptions_new();

#ifdef __cplusplus
}
#endif
