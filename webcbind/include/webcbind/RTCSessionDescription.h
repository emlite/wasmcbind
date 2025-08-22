#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCSessionDescriptionInit RTCSessionDescriptionInit;


/**
 * @brief Interface RTCSessionDescription
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCSessionDescription)
 */
DECLARE_EMLITE_TYPE(RTCSessionDescription, em_Val);

/**
 * @brief Creates a new `RTCSessionDescription` object. 
*/
RTCSessionDescription RTCSessionDescription_new(RTCSessionDescriptionInit * descriptionInitDict);

/**
 * @brief Gets the `type` property. 
*/
RTCSdpType RTCSessionDescription_type(const RTCSessionDescription *self);

/**
 * @brief Gets the `sdp` property. 
*/
jb_String RTCSessionDescription_sdp(const RTCSessionDescription *self);

/**
 * @brief Calls the `toJSON` method. 
*/
RTCSessionDescriptionInit RTCSessionDescription_toJSON(RTCSessionDescription* self );

#ifdef __cplusplus
}
#endif
