#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEventInit, EventInit);

unsigned long CharacterBoundsUpdateEventInit_rangeStart(const CharacterBoundsUpdateEventInit *self);

void CharacterBoundsUpdateEventInit_set_rangeStart(CharacterBoundsUpdateEventInit* self, unsigned long value);

unsigned long CharacterBoundsUpdateEventInit_rangeEnd(const CharacterBoundsUpdateEventInit *self);

void CharacterBoundsUpdateEventInit_set_rangeEnd(CharacterBoundsUpdateEventInit* self, unsigned long value);

CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
