#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MemoryAttributionContainer.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MemoryAttribution, em_Val);

jb_String MemoryAttribution_url(const MemoryAttribution *self);

void MemoryAttribution_set_url(MemoryAttribution* self, jb_String * value);

MemoryAttributionContainer MemoryAttribution_container(const MemoryAttribution *self);

void MemoryAttribution_set_container(MemoryAttribution* self, MemoryAttributionContainer * value);

jb_String MemoryAttribution_scope(const MemoryAttribution *self);

void MemoryAttribution_set_scope(MemoryAttribution* self, jb_String * value);

MemoryAttribution MemoryAttribution_new();

#ifdef __cplusplus
}
#endif
