#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIConnectionEventInit MIDIConnectionEventInit;
typedef struct MIDIPort MIDIPort;


/**
 * @brief Interface MIDIConnectionEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIConnectionEvent)
 */
DECLARE_EMLITE_TYPE(MIDIConnectionEvent, Event);

/**
 * @brief Creates a new `MIDIConnectionEvent` object. 
*/
MIDIConnectionEvent MIDIConnectionEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MIDIConnectionEvent` object. 
*/
MIDIConnectionEvent MIDIConnectionEvent_new1(jb_String * type, MIDIConnectionEventInit * eventInitDict);

/**
 * @brief Gets the `port` property. 
*/
MIDIPort MIDIConnectionEvent_port(const MIDIConnectionEvent *self);

#ifdef __cplusplus
}
#endif
