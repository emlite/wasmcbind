#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

DECLARE_EMLITE_TYPE(ElementCreationOptions, em_Val);

CustomElementRegistry ElementCreationOptions_customElementRegistry(const ElementCreationOptions *self);

void ElementCreationOptions_set_customElementRegistry(ElementCreationOptions* self, CustomElementRegistry * value);

jb_String ElementCreationOptions_is(const ElementCreationOptions *self);

void ElementCreationOptions_set_is(ElementCreationOptions* self, jb_String * value);

ElementCreationOptions ElementCreationOptions_new();

#ifdef __cplusplus
}
#endif
