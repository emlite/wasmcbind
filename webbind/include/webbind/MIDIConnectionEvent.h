#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MIDIPort MIDIPort;


typedef struct {
  Event inner;
} MIDIConnectionEvent;


DECLARE_EMLITE_TYPE(MIDIConnectionEvent, Event);

MIDIConnectionEvent MIDIConnectionEvent_new(const jb_DOMString* type);

MIDIConnectionEvent MIDIConnectionEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

MIDIPort MIDIConnectionEvent_port( const MIDIConnectionEvent *self);
