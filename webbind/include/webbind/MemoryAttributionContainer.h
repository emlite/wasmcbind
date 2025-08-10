#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MemoryAttributionContainer, em_Val);

jb_String MemoryAttributionContainer_id(const MemoryAttributionContainer *self);

void MemoryAttributionContainer_set_id(MemoryAttributionContainer* self, jb_String * value);

jb_String MemoryAttributionContainer_src(const MemoryAttributionContainer *self);

void MemoryAttributionContainer_set_src(MemoryAttributionContainer* self, jb_String * value);

MemoryAttributionContainer MemoryAttributionContainer_new();

#ifdef __cplusplus
}
#endif
