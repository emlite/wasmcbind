#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIPort MIDIPort;

/** @brief Dictionary type MIDIConnectionEventInit */
DECLARE_EMLITE_TYPE(MIDIConnectionEventInit, EventInit);

/** @brief Getter of the port property */
MIDIPort MIDIConnectionEventInit_port(const MIDIConnectionEventInit *self);

/** @brief Setter of the port property */
void MIDIConnectionEventInit_set_port(MIDIConnectionEventInit* self, MIDIPort * value);

/** @brief Constructor of the MIDIConnectionEventInit dictionary type */
MIDIConnectionEventInit MIDIConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
