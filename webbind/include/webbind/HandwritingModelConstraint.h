#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HandwritingModelConstraint */
DECLARE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);

/** @brief Getter of the languages property */
jb_Array HandwritingModelConstraint_languages(const HandwritingModelConstraint *self);

/** @brief Setter of the languages property */
void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, jb_Array * value);

/** @brief Constructor of the HandwritingModelConstraint dictionary type */
HandwritingModelConstraint HandwritingModelConstraint_new();

#ifdef __cplusplus
}
#endif
