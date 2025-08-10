#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MidiPermissionDescriptor, PermissionDescriptor);

bool MidiPermissionDescriptor_sysex(const MidiPermissionDescriptor *self);

void MidiPermissionDescriptor_set_sysex(MidiPermissionDescriptor* self, bool value);

MidiPermissionDescriptor MidiPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
