#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PropertyDefinition, em_Val);

jb_String PropertyDefinition_name(const PropertyDefinition *self);

void PropertyDefinition_set_name(PropertyDefinition* self, jb_String * value);

jb_String PropertyDefinition_syntax(const PropertyDefinition *self);

void PropertyDefinition_set_syntax(PropertyDefinition* self, jb_String * value);

bool PropertyDefinition_inherits(const PropertyDefinition *self);

void PropertyDefinition_set_inherits(PropertyDefinition* self, bool value);

jb_String PropertyDefinition_initialValue(const PropertyDefinition *self);

void PropertyDefinition_set_initialValue(PropertyDefinition* self, jb_String * value);

PropertyDefinition PropertyDefinition_new();

#ifdef __cplusplus
}
#endif
