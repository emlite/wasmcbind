#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MIDIPort.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface MIDIOutput
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MIDIOutput)
 */
DECLARE_EMLITE_TYPE(MIDIOutput, MIDIPort);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined MIDIOutput_send0(MIDIOutput* self , jb_Array * data);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined MIDIOutput_send1(MIDIOutput* self , jb_Array * data, jb_Any * timestamp);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined MIDIOutput_clear(MIDIOutput* self );

#ifdef __cplusplus
}
#endif
