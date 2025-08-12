#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainBooleanOrDOMStringParameters */
DECLARE_EMLITE_TYPE(ConstrainBooleanOrDOMStringParameters, em_Val);

/** @brief Getter of the exact property */
jb_Any ConstrainBooleanOrDOMStringParameters_exact(const ConstrainBooleanOrDOMStringParameters *self);

/** @brief Setter of the exact property */
void ConstrainBooleanOrDOMStringParameters_set_exact(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value);

/** @brief Getter of the ideal property */
jb_Any ConstrainBooleanOrDOMStringParameters_ideal(const ConstrainBooleanOrDOMStringParameters *self);

/** @brief Setter of the ideal property */
void ConstrainBooleanOrDOMStringParameters_set_ideal(ConstrainBooleanOrDOMStringParameters* self, jb_Any * value);

/** @brief Constructor of the ConstrainBooleanOrDOMStringParameters dictionary type */
ConstrainBooleanOrDOMStringParameters ConstrainBooleanOrDOMStringParameters_new();

#ifdef __cplusplus
}
#endif
