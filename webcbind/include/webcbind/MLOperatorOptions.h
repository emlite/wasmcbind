#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MLOperatorOptions */
DECLARE_EMLITE_TYPE(MLOperatorOptions, em_Val);

/** @brief Getter of the label property */
jb_String MLOperatorOptions_label(const MLOperatorOptions *self);

/** @brief Setter of the label property */
void MLOperatorOptions_set_label(MLOperatorOptions* self, jb_String * value);

/** @brief Constructor of the MLOperatorOptions dictionary type */
MLOperatorOptions MLOperatorOptions_new();

#ifdef __cplusplus
}
#endif
