#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);

jb_String ElementDefinitionOptions_extends(const ElementDefinitionOptions *self);

void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, jb_String * value);

ElementDefinitionOptions ElementDefinitionOptions_new();

#ifdef __cplusplus
}
#endif
