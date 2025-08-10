#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MIDIMessageEventInit, EventInit);

jb_Uint8Array MIDIMessageEventInit_data(const MIDIMessageEventInit *self);

void MIDIMessageEventInit_set_data(MIDIMessageEventInit* self, jb_Uint8Array * value);

MIDIMessageEventInit MIDIMessageEventInit_new();

#ifdef __cplusplus
}
#endif
