#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SanitizerElementNamespace */
DECLARE_EMLITE_TYPE(SanitizerElementNamespace, em_Val);

/** @brief Getter of the name property */
jb_String SanitizerElementNamespace_name(const SanitizerElementNamespace *self);

/** @brief Setter of the name property */
void SanitizerElementNamespace_set_name(SanitizerElementNamespace* self, jb_String * value);

/** @brief Getter of the namespace property */
jb_String SanitizerElementNamespace_namespace_(const SanitizerElementNamespace *self);

/** @brief Setter of the namespace property */
void SanitizerElementNamespace_set_namespace_(SanitizerElementNamespace* self, jb_String * value);

/** @brief Constructor of the SanitizerElementNamespace dictionary type */
SanitizerElementNamespace SanitizerElementNamespace_new();

#ifdef __cplusplus
}
#endif
