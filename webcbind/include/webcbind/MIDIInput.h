#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MIDIPort.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MIDIInput
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIInput)
 */
DECLARE_EMLITE_TYPE(MIDIInput, MIDIPort);

/**
 * @brief Gets the `onmidimessage` property. 
*/
jb_Any MIDIInput_onmidimessage(const MIDIInput *self);

/**
 * @brief Sets the `onmidimessage` property. 
*/
void MIDIInput_set_onmidimessage(MIDIInput* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
