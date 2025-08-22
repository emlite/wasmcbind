#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FunctionParameter */
DECLARE_EMLITE_TYPE(FunctionParameter, em_Val);

/** @brief Getter of the name property */
jb_String FunctionParameter_name(const FunctionParameter *self);

/** @brief Setter of the name property */
void FunctionParameter_set_name(FunctionParameter* self, jb_String * value);

/** @brief Getter of the type property */
jb_String FunctionParameter_type(const FunctionParameter *self);

/** @brief Setter of the type property */
void FunctionParameter_set_type(FunctionParameter* self, jb_String * value);

/** @brief Getter of the defaultValue property */
jb_String FunctionParameter_defaultValue(const FunctionParameter *self);

/** @brief Setter of the defaultValue property */
void FunctionParameter_set_defaultValue(FunctionParameter* self, jb_String * value);

/** @brief Constructor of the FunctionParameter dictionary type */
FunctionParameter FunctionParameter_new();

#ifdef __cplusplus
}
#endif
