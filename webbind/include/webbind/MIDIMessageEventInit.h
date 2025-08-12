#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MIDIMessageEventInit */
DECLARE_EMLITE_TYPE(MIDIMessageEventInit, EventInit);

/** @brief Getter of the data property */
jb_Uint8Array MIDIMessageEventInit_data(const MIDIMessageEventInit *self);

/** @brief Setter of the data property */
void MIDIMessageEventInit_set_data(MIDIMessageEventInit* self, jb_Uint8Array * value);

/** @brief Constructor of the MIDIMessageEventInit dictionary type */
MIDIMessageEventInit MIDIMessageEventInit_new();

#ifdef __cplusplus
}
#endif
