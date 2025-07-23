#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(MIDIMessageEvent, Event);

MIDIMessageEvent MIDIMessageEvent_new0(jb_DOMString * type);

MIDIMessageEvent MIDIMessageEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_Uint8Array MIDIMessageEvent_data(const MIDIMessageEvent *self);
