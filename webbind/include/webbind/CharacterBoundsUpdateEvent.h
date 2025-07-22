#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} CharacterBoundsUpdateEvent;


DECLARE_EMLITE_TYPE(CharacterBoundsUpdateEvent, Event);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new(const jb_DOMString* type);

CharacterBoundsUpdateEvent CharacterBoundsUpdateEvent_new(const jb_DOMString* type, const jb_Any* options);

unsigned long CharacterBoundsUpdateEvent_rangeStart( const CharacterBoundsUpdateEvent *self);

unsigned long CharacterBoundsUpdateEvent_rangeEnd( const CharacterBoundsUpdateEvent *self);
