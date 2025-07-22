#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct MIDIPort MIDIPort;


DECLARE_EMLITE_TYPE(MIDIConnectionEvent, Event);

MIDIConnectionEvent MIDIConnectionEvent_new0(jb_DOMString * type);

MIDIConnectionEvent MIDIConnectionEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

MIDIPort MIDIConnectionEvent_port( const MIDIConnectionEvent *self);
