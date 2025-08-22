#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface RTCDataChannel
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCDataChannel)
 */
DECLARE_EMLITE_TYPE(RTCDataChannel, EventTarget);

/**
 * @brief Gets the `label` property. 
*/
jb_String RTCDataChannel_label(const RTCDataChannel *self);

/**
 * @brief Gets the `ordered` property. 
*/
bool RTCDataChannel_ordered(const RTCDataChannel *self);

/**
 * @brief Gets the `maxPacketLifeTime` property. 
*/
unsigned short RTCDataChannel_maxPacketLifeTime(const RTCDataChannel *self);

/**
 * @brief Gets the `maxRetransmits` property. 
*/
unsigned short RTCDataChannel_maxRetransmits(const RTCDataChannel *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String RTCDataChannel_protocol(const RTCDataChannel *self);

/**
 * @brief Gets the `negotiated` property. 
*/
bool RTCDataChannel_negotiated(const RTCDataChannel *self);

/**
 * @brief Gets the `id` property. 
*/
unsigned short RTCDataChannel_id(const RTCDataChannel *self);

/**
 * @brief Gets the `readyState` property. 
*/
RTCDataChannelState RTCDataChannel_readyState(const RTCDataChannel *self);

/**
 * @brief Gets the `bufferedAmount` property. 
*/
unsigned long RTCDataChannel_bufferedAmount(const RTCDataChannel *self);

/**
 * @brief Gets the `bufferedAmountLowThreshold` property. 
*/
unsigned long RTCDataChannel_bufferedAmountLowThreshold(const RTCDataChannel *self);

/**
 * @brief Sets the `bufferedAmountLowThreshold` property. 
*/
void RTCDataChannel_set_bufferedAmountLowThreshold(RTCDataChannel* self, unsigned long value);

/**
 * @brief Gets the `onopen` property. 
*/
jb_Any RTCDataChannel_onopen(const RTCDataChannel *self);

/**
 * @brief Sets the `onopen` property. 
*/
void RTCDataChannel_set_onopen(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Gets the `onbufferedamountlow` property. 
*/
jb_Any RTCDataChannel_onbufferedamountlow(const RTCDataChannel *self);

/**
 * @brief Sets the `onbufferedamountlow` property. 
*/
void RTCDataChannel_set_onbufferedamountlow(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any RTCDataChannel_onerror(const RTCDataChannel *self);

/**
 * @brief Sets the `onerror` property. 
*/
void RTCDataChannel_set_onerror(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Gets the `onclosing` property. 
*/
jb_Any RTCDataChannel_onclosing(const RTCDataChannel *self);

/**
 * @brief Sets the `onclosing` property. 
*/
void RTCDataChannel_set_onclosing(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any RTCDataChannel_onclose(const RTCDataChannel *self);

/**
 * @brief Sets the `onclose` property. 
*/
void RTCDataChannel_set_onclose(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined RTCDataChannel_close(RTCDataChannel* self );

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any RTCDataChannel_onmessage(const RTCDataChannel *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void RTCDataChannel_set_onmessage(RTCDataChannel* self, jb_Any * value);

/**
 * @brief Gets the `binaryType` property. 
*/
BinaryType RTCDataChannel_binaryType(const RTCDataChannel *self);

/**
 * @brief Sets the `binaryType` property. 
*/
void RTCDataChannel_set_binaryType(RTCDataChannel* self, BinaryType * value);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined RTCDataChannel_send(RTCDataChannel* self , jb_Any * data);

/**
 * @brief Gets the `priority` property. 
*/
RTCPriorityType RTCDataChannel_priority(const RTCDataChannel *self);

#ifdef __cplusplus
}
#endif
