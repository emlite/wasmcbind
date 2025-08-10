#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIPort MIDIPort;

DECLARE_EMLITE_TYPE(MIDIConnectionEventInit, EventInit);

MIDIPort MIDIConnectionEventInit_port(const MIDIConnectionEventInit *self);

void MIDIConnectionEventInit_set_port(MIDIConnectionEventInit* self, MIDIPort * value);

MIDIConnectionEventInit MIDIConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
