#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCDataChannelStats */
DECLARE_EMLITE_TYPE(RTCDataChannelStats, RTCStats);

/** @brief Getter of the label property */
jb_String RTCDataChannelStats_label(const RTCDataChannelStats *self);

/** @brief Setter of the label property */
void RTCDataChannelStats_set_label(RTCDataChannelStats* self, jb_String * value);

/** @brief Getter of the protocol property */
jb_String RTCDataChannelStats_protocol(const RTCDataChannelStats *self);

/** @brief Setter of the protocol property */
void RTCDataChannelStats_set_protocol(RTCDataChannelStats* self, jb_String * value);

/** @brief Getter of the dataChannelIdentifier property */
unsigned short RTCDataChannelStats_dataChannelIdentifier(const RTCDataChannelStats *self);

/** @brief Setter of the dataChannelIdentifier property */
void RTCDataChannelStats_set_dataChannelIdentifier(RTCDataChannelStats* self, unsigned short value);

/** @brief Getter of the state property */
RTCDataChannelState RTCDataChannelStats_state(const RTCDataChannelStats *self);

/** @brief Setter of the state property */
void RTCDataChannelStats_set_state(RTCDataChannelStats* self, RTCDataChannelState * value);

/** @brief Getter of the messagesSent property */
unsigned long RTCDataChannelStats_messagesSent(const RTCDataChannelStats *self);

/** @brief Setter of the messagesSent property */
void RTCDataChannelStats_set_messagesSent(RTCDataChannelStats* self, unsigned long value);

/** @brief Getter of the bytesSent property */
long long RTCDataChannelStats_bytesSent(const RTCDataChannelStats *self);

/** @brief Setter of the bytesSent property */
void RTCDataChannelStats_set_bytesSent(RTCDataChannelStats* self, long long value);

/** @brief Getter of the messagesReceived property */
unsigned long RTCDataChannelStats_messagesReceived(const RTCDataChannelStats *self);

/** @brief Setter of the messagesReceived property */
void RTCDataChannelStats_set_messagesReceived(RTCDataChannelStats* self, unsigned long value);

/** @brief Getter of the bytesReceived property */
long long RTCDataChannelStats_bytesReceived(const RTCDataChannelStats *self);

/** @brief Setter of the bytesReceived property */
void RTCDataChannelStats_set_bytesReceived(RTCDataChannelStats* self, long long value);

/** @brief Constructor of the RTCDataChannelStats dictionary type */
RTCDataChannelStats RTCDataChannelStats_new();

#ifdef __cplusplus
}
#endif
