#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MIDIOptions */
DECLARE_EMLITE_TYPE(MIDIOptions, em_Val);

/** @brief Getter of the sysex property */
bool MIDIOptions_sysex(const MIDIOptions *self);

/** @brief Setter of the sysex property */
void MIDIOptions_set_sysex(MIDIOptions* self, bool value);

/** @brief Getter of the software property */
bool MIDIOptions_software(const MIDIOptions *self);

/** @brief Setter of the software property */
void MIDIOptions_set_software(MIDIOptions* self, bool value);

/** @brief Constructor of the MIDIOptions dictionary type */
MIDIOptions MIDIOptions_new();

#ifdef __cplusplus
}
#endif
