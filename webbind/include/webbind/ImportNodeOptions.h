#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

DECLARE_EMLITE_TYPE(ImportNodeOptions, em_Val);

CustomElementRegistry ImportNodeOptions_customElementRegistry(const ImportNodeOptions *self);

void ImportNodeOptions_set_customElementRegistry(ImportNodeOptions* self, CustomElementRegistry * value);

bool ImportNodeOptions_selfOnly(const ImportNodeOptions *self);

void ImportNodeOptions_set_selfOnly(ImportNodeOptions* self, bool value);

ImportNodeOptions ImportNodeOptions_new();

#ifdef __cplusplus
}
#endif
