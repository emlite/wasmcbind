#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PASignalValue */
DECLARE_EMLITE_TYPE(PASignalValue, em_Val);

/** @brief Getter of the baseValue property */
jb_String PASignalValue_baseValue(const PASignalValue *self);

/** @brief Setter of the baseValue property */
void PASignalValue_set_baseValue(PASignalValue* self, jb_String * value);

/** @brief Getter of the scale property */
double PASignalValue_scale(const PASignalValue *self);

/** @brief Setter of the scale property */
void PASignalValue_set_scale(PASignalValue* self, double value);

/** @brief Getter of the offset property */
jb_Any PASignalValue_offset(const PASignalValue *self);

/** @brief Setter of the offset property */
void PASignalValue_set_offset(PASignalValue* self, jb_Any * value);

/** @brief Constructor of the PASignalValue dictionary type */
PASignalValue PASignalValue_new();

#ifdef __cplusplus
}
#endif
