#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MidiPermissionDescriptor */
DECLARE_EMLITE_TYPE(MidiPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the sysex property */
bool MidiPermissionDescriptor_sysex(const MidiPermissionDescriptor *self);

/** @brief Setter of the sysex property */
void MidiPermissionDescriptor_set_sysex(MidiPermissionDescriptor* self, bool value);

/** @brief Constructor of the MidiPermissionDescriptor dictionary type */
MidiPermissionDescriptor MidiPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
