#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SanitizerAttributeNamespace */
DECLARE_EMLITE_TYPE(SanitizerAttributeNamespace, em_Val);

/** @brief Getter of the name property */
jb_String SanitizerAttributeNamespace_name(const SanitizerAttributeNamespace *self);

/** @brief Setter of the name property */
void SanitizerAttributeNamespace_set_name(SanitizerAttributeNamespace* self, jb_String * value);

/** @brief Getter of the namespace property */
jb_String SanitizerAttributeNamespace_namespace_(const SanitizerAttributeNamespace *self);

/** @brief Setter of the namespace property */
void SanitizerAttributeNamespace_set_namespace_(SanitizerAttributeNamespace* self, jb_String * value);

/** @brief Constructor of the SanitizerAttributeNamespace dictionary type */
SanitizerAttributeNamespace SanitizerAttributeNamespace_new();

#ifdef __cplusplus
}
#endif
