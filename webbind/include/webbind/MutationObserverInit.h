#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MutationObserverInit, em_Val);

bool MutationObserverInit_childList(const MutationObserverInit *self);

void MutationObserverInit_set_childList(MutationObserverInit* self, bool value);

bool MutationObserverInit_attributes(const MutationObserverInit *self);

void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value);

bool MutationObserverInit_characterData(const MutationObserverInit *self);

void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value);

bool MutationObserverInit_subtree(const MutationObserverInit *self);

void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value);

bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self);

void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value);

bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self);

void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value);

jb_Array MutationObserverInit_attributeFilter(const MutationObserverInit *self);

void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, jb_Array * value);

MutationObserverInit MutationObserverInit_new();

#ifdef __cplusplus
}
#endif
