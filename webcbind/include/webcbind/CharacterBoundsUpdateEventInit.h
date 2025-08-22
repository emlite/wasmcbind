#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CharacterBoundsUpdateEventInit */
DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEventInit, EventInit);

/** @brief Getter of the rangeStart property */
unsigned long CharacterBoundsUpdateEventInit_rangeStart(const CharacterBoundsUpdateEventInit *self);

/** @brief Setter of the rangeStart property */
void CharacterBoundsUpdateEventInit_set_rangeStart(CharacterBoundsUpdateEventInit* self, unsigned long value);

/** @brief Getter of the rangeEnd property */
unsigned long CharacterBoundsUpdateEventInit_rangeEnd(const CharacterBoundsUpdateEventInit *self);

/** @brief Setter of the rangeEnd property */
void CharacterBoundsUpdateEventInit_set_rangeEnd(CharacterBoundsUpdateEventInit* self, unsigned long value);

/** @brief Constructor of the CharacterBoundsUpdateEventInit dictionary type */
CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit_new();

#ifdef __cplusplus
}
#endif
