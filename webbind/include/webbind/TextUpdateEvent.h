#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} TextUpdateEvent;


DECLARE_EMLITE_TYPE(TextUpdateEvent, Event);

TextUpdateEvent TextUpdateEvent_new(const jb_DOMString* type);

TextUpdateEvent TextUpdateEvent_new(const jb_DOMString* type, const jb_Any* options);

unsigned long TextUpdateEvent_updateRangeStart( const TextUpdateEvent *self);

unsigned long TextUpdateEvent_updateRangeEnd( const TextUpdateEvent *self);

jb_DOMString TextUpdateEvent_text( const TextUpdateEvent *self);

unsigned long TextUpdateEvent_selectionStart( const TextUpdateEvent *self);

unsigned long TextUpdateEvent_selectionEnd( const TextUpdateEvent *self);
