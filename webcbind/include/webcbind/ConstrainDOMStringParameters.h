#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ConstrainDOMStringParameters */
DECLARE_EMLITE_TYPE(ConstrainDOMStringParameters, em_Val);

/** @brief Getter of the exact property */
jb_Any ConstrainDOMStringParameters_exact(const ConstrainDOMStringParameters *self);

/** @brief Setter of the exact property */
void ConstrainDOMStringParameters_set_exact(ConstrainDOMStringParameters* self, jb_Any * value);

/** @brief Getter of the ideal property */
jb_Any ConstrainDOMStringParameters_ideal(const ConstrainDOMStringParameters *self);

/** @brief Setter of the ideal property */
void ConstrainDOMStringParameters_set_ideal(ConstrainDOMStringParameters* self, jb_Any * value);

/** @brief Constructor of the ConstrainDOMStringParameters dictionary type */
ConstrainDOMStringParameters ConstrainDOMStringParameters_new();

#ifdef __cplusplus
}
#endif
