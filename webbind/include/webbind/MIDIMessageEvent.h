#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} MIDIMessageEvent;


DECLARE_EMLITE_TYPE(MIDIMessageEvent, Event);

MIDIMessageEvent MIDIMessageEvent_new(const jb_DOMString* type);

MIDIMessageEvent MIDIMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_Uint8Array MIDIMessageEvent_data( const MIDIMessageEvent *self);
