#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MIDIInputMap MIDIInputMap;
typedef struct MIDIOutputMap MIDIOutputMap;


/**
 * @brief Interface MIDIAccess
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIAccess)
 */
DECLARE_EMLITE_TYPE(MIDIAccess, EventTarget);

/**
 * @brief Gets the `inputs` property. 
*/
MIDIInputMap MIDIAccess_inputs(const MIDIAccess *self);

/**
 * @brief Gets the `outputs` property. 
*/
MIDIOutputMap MIDIAccess_outputs(const MIDIAccess *self);

/**
 * @brief Gets the `onstatechange` property. 
*/
jb_Any MIDIAccess_onstatechange(const MIDIAccess *self);

/**
 * @brief Sets the `onstatechange` property. 
*/
void MIDIAccess_set_onstatechange(MIDIAccess* self, jb_Any * value);

/**
 * @brief Gets the `sysexEnabled` property. 
*/
bool MIDIAccess_sysexEnabled(const MIDIAccess *self);

#ifdef __cplusplus
}
#endif
