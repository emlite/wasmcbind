#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MIDIOptions, em_Val);

bool MIDIOptions_sysex(const MIDIOptions *self);

void MIDIOptions_set_sysex(MIDIOptions* self, bool value);

bool MIDIOptions_software(const MIDIOptions *self);

void MIDIOptions_set_software(MIDIOptions* self, bool value);

MIDIOptions MIDIOptions_new();

#ifdef __cplusplus
}
#endif
