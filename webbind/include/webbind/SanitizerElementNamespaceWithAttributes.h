#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SanitizerElementNamespace.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SanitizerElementNamespaceWithAttributes, SanitizerElementNamespace);

jb_Array SanitizerElementNamespaceWithAttributes_attributes(const SanitizerElementNamespaceWithAttributes *self);

void SanitizerElementNamespaceWithAttributes_set_attributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value);

jb_Array SanitizerElementNamespaceWithAttributes_removeAttributes(const SanitizerElementNamespaceWithAttributes *self);

void SanitizerElementNamespaceWithAttributes_set_removeAttributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value);

SanitizerElementNamespaceWithAttributes SanitizerElementNamespaceWithAttributes_new();

#ifdef __cplusplus
}
#endif
