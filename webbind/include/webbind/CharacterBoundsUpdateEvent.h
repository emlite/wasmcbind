#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CharacterBoundsUpdateEventInit CharacterBoundsUpdateEventInit;

DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new0(jb_String * type);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new1(jb_String * type, CharacterBoundsUpdateEventInit * options);

unsigned long CharacterBoundsUpdateEvent_rangeStart(const CharacterBoundsUpdateEvent *self);

unsigned long CharacterBoundsUpdateEvent_rangeEnd(const CharacterBoundsUpdateEvent *self);

#ifdef __cplusplus
}
#endif
