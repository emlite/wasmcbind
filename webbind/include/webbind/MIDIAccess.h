#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MIDIInputMap MIDIInputMap;
typedef struct MIDIOutputMap MIDIOutputMap;


typedef struct {
  EventTarget inner;
} MIDIAccess;


DECLARE_EMLITE_TYPE(MIDIAccess, EventTarget);

MIDIInputMap MIDIAccess_inputs( const MIDIAccess *self);

MIDIOutputMap MIDIAccess_outputs( const MIDIAccess *self);

jb_Any MIDIAccess_onstatechange( const MIDIAccess *self);

void MIDIAccess_set_onstatechange(MIDIAccess* self, const jb_Any* value);

bool MIDIAccess_sysexEnabled( const MIDIAccess *self);
