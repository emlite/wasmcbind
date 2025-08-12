#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MIDIPort
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIPort)
 */
DECLARE_EMLITE_TYPE(MIDIPort, EventTarget);

/**
 * @brief Gets the `id` property. 
*/
jb_String MIDIPort_id(const MIDIPort *self);

/**
 * @brief Gets the `manufacturer` property. 
*/
jb_String MIDIPort_manufacturer(const MIDIPort *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String MIDIPort_name(const MIDIPort *self);

/**
 * @brief Gets the `type` property. 
*/
MIDIPortType MIDIPort_type(const MIDIPort *self);

/**
 * @brief Gets the `version` property. 
*/
jb_String MIDIPort_version(const MIDIPort *self);

/**
 * @brief Gets the `state` property. 
*/
MIDIPortDeviceState MIDIPort_state(const MIDIPort *self);

/**
 * @brief Gets the `connection` property. 
*/
MIDIPortConnectionState MIDIPort_connection(const MIDIPort *self);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any MIDIPort_onstatechange(const MIDIPort *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void MIDIPort_set_onstatechange(MIDIPort* self, jb_Any * value);

/**
 * @brief Calls the `open` method. 
*/
jb_Promise MIDIPort_open(MIDIPort* self );

/**
 * @brief Calls the `close` method. 
*/
jb_Promise MIDIPort_close(MIDIPort* self );

#ifdef __cplusplus
}
#endif
