#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIMessageEventInit MIDIMessageEventInit;


/**
 * @brief Interface MIDIMessageEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIMessageEvent)
 */
DECLARE_EMLITE_TYPE(MIDIMessageEvent, Event);

/**
 * @brief Creates a new `MIDIMessageEvent` object. 
*/
MIDIMessageEvent MIDIMessageEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MIDIMessageEvent` object. 
*/
MIDIMessageEvent MIDIMessageEvent_new1(jb_String * type, MIDIMessageEventInit * eventInitDict);

/**
 * @brief Gets the `data` property. 
*/
jb_Uint8Array MIDIMessageEvent_data(const MIDIMessageEvent *self);

#ifdef __cplusplus
}
#endif
