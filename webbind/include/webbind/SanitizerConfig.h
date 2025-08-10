#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SanitizerConfig, em_Val);

jb_Array SanitizerConfig_elements(const SanitizerConfig *self);

void SanitizerConfig_set_elements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_removeElements(const SanitizerConfig *self);

void SanitizerConfig_set_removeElements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self);

void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_attributes(const SanitizerConfig *self);

void SanitizerConfig_set_attributes(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_removeAttributes(const SanitizerConfig *self);

void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, jb_Array * value);

bool SanitizerConfig_comments(const SanitizerConfig *self);

void SanitizerConfig_set_comments(SanitizerConfig* self, bool value);

bool SanitizerConfig_dataAttributes(const SanitizerConfig *self);

void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value);

SanitizerConfig SanitizerConfig_new();

#ifdef __cplusplus
}
#endif
