#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface RemotePlayback
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RemotePlayback)
 */
DECLARE_EMLITE_TYPE(RemotePlayback, EventTarget);

/**
 * @brief Calls the `watchAvailability` method. 
*/
jb_Promise RemotePlayback_watchAvailability(RemotePlayback* self , jb_Function * callback);

/**
 * @brief Calls the `cancelWatchAvailability` method. 
*/
jb_Promise RemotePlayback_cancelWatchAvailability0(RemotePlayback* self );

/**
 * @brief Calls the `cancelWatchAvailability` method. 
*/
jb_Promise RemotePlayback_cancelWatchAvailability1(RemotePlayback* self , long id);

/**
 * @brief Gets the `state` property. 
*/
RemotePlaybackState RemotePlayback_state(const RemotePlayback *self);

/**
 * @brief Gets the `onconnecting` property. 
*/
jb_Any RemotePlayback_onconnecting(const RemotePlayback *self);

/**
 * @brief Sets the `onconnecting` property. 
*/
void RemotePlayback_set_onconnecting(RemotePlayback* self, jb_Any * value);

/**
 * @brief Gets the `onconnect` property. 
*/
jb_Any RemotePlayback_onconnect(const RemotePlayback *self);

/**
 * @brief Sets the `onconnect` property. 
*/
void RemotePlayback_set_onconnect(RemotePlayback* self, jb_Any * value);

/**
 * @brief Gets the `ondisconnect` property. 
*/
jb_Any RemotePlayback_ondisconnect(const RemotePlayback *self);

/**
 * @brief Sets the `ondisconnect` property. 
*/
void RemotePlayback_set_ondisconnect(RemotePlayback* self, jb_Any * value);

/**
 * @brief Calls the `prompt` method. 
*/
jb_Promise RemotePlayback_prompt(RemotePlayback* self );

#ifdef __cplusplus
}
#endif
