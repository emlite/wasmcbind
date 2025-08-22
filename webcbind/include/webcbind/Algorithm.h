#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type Algorithm */
DECLARE_EMLITE_TYPE(Algorithm, em_Val);

/** @brief Getter of the name property */
jb_String Algorithm_name(const Algorithm *self);

/** @brief Setter of the name property */
void Algorithm_set_name(Algorithm* self, jb_String * value);

/** @brief Constructor of the Algorithm dictionary type */
Algorithm Algorithm_new();

#ifdef __cplusplus
}
#endif
