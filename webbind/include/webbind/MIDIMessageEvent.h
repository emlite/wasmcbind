#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIMessageEventInit MIDIMessageEventInit;

DECLARE_EMLITE_TYPE(MIDIMessageEvent, Event);

MIDIMessageEvent MIDIMessageEvent_new0(jb_String * type);

MIDIMessageEvent MIDIMessageEvent_new1(jb_String * type, MIDIMessageEventInit * eventInitDict);

jb_Uint8Array MIDIMessageEvent_data(const MIDIMessageEvent *self);

#ifdef __cplusplus
}
#endif
