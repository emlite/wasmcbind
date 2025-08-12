#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainBooleanParameters */
DECLARE_EMLITE_TYPE(ConstrainBooleanParameters, em_Val);

/** @brief Getter of the exact property */
bool ConstrainBooleanParameters_exact(const ConstrainBooleanParameters *self);

/** @brief Setter of the exact property */
void ConstrainBooleanParameters_set_exact(ConstrainBooleanParameters* self, bool value);

/** @brief Getter of the ideal property */
bool ConstrainBooleanParameters_ideal(const ConstrainBooleanParameters *self);

/** @brief Setter of the ideal property */
void ConstrainBooleanParameters_set_ideal(ConstrainBooleanParameters* self, bool value);

/** @brief Constructor of the ConstrainBooleanParameters dictionary type */
ConstrainBooleanParameters ConstrainBooleanParameters_new();

#ifdef __cplusplus
}
#endif
