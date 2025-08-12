#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SanitizerElementNamespace.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SanitizerElementNamespaceWithAttributes */
DECLARE_EMLITE_TYPE(SanitizerElementNamespaceWithAttributes, SanitizerElementNamespace);

/** @brief Getter of the attributes property */
jb_Array SanitizerElementNamespaceWithAttributes_attributes(const SanitizerElementNamespaceWithAttributes *self);

/** @brief Setter of the attributes property */
void SanitizerElementNamespaceWithAttributes_set_attributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value);

/** @brief Getter of the removeAttributes property */
jb_Array SanitizerElementNamespaceWithAttributes_removeAttributes(const SanitizerElementNamespaceWithAttributes *self);

/** @brief Setter of the removeAttributes property */
void SanitizerElementNamespaceWithAttributes_set_removeAttributes(SanitizerElementNamespaceWithAttributes* self, jb_Array * value);

/** @brief Constructor of the SanitizerElementNamespaceWithAttributes dictionary type */
SanitizerElementNamespaceWithAttributes SanitizerElementNamespaceWithAttributes_new();

#ifdef __cplusplus
}
#endif
