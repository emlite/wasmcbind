#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SanitizerElementNamespace, em_Val);

jb_String SanitizerElementNamespace_name(const SanitizerElementNamespace *self);

void SanitizerElementNamespace_set_name(SanitizerElementNamespace* self, jb_String * value);

jb_String SanitizerElementNamespace_namespace_(const SanitizerElementNamespace *self);

void SanitizerElementNamespace_set_namespace_(SanitizerElementNamespace* self, jb_String * value);

SanitizerElementNamespace SanitizerElementNamespace_new();

#ifdef __cplusplus
}
#endif
