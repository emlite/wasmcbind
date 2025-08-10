#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SanitizerAttributeNamespace, em_Val);

jb_String SanitizerAttributeNamespace_name(const SanitizerAttributeNamespace *self);

void SanitizerAttributeNamespace_set_name(SanitizerAttributeNamespace* self, jb_String * value);

jb_String SanitizerAttributeNamespace_namespace_(const SanitizerAttributeNamespace *self);

void SanitizerAttributeNamespace_set_namespace_(SanitizerAttributeNamespace* self, jb_String * value);

SanitizerAttributeNamespace SanitizerAttributeNamespace_new();

#ifdef __cplusplus
}
#endif
