#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIConnectionEventInit MIDIConnectionEventInit;
typedef struct MIDIPort MIDIPort;

DECLARE_EMLITE_TYPE(MIDIConnectionEvent, Event);

MIDIConnectionEvent MIDIConnectionEvent_new0(jb_String * type);

MIDIConnectionEvent MIDIConnectionEvent_new1(jb_String * type, MIDIConnectionEventInit * eventInitDict);

MIDIPort MIDIConnectionEvent_port(const MIDIConnectionEvent *self);

#ifdef __cplusplus
}
#endif
