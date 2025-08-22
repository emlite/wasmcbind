#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCDataChannelInit */
DECLARE_EMLITE_TYPE(RTCDataChannelInit, em_Val);

/** @brief Getter of the ordered property */
bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self);

/** @brief Setter of the ordered property */
void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value);

/** @brief Getter of the maxPacketLifeTime property */
unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self);

/** @brief Setter of the maxPacketLifeTime property */
void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value);

/** @brief Getter of the maxRetransmits property */
unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self);

/** @brief Setter of the maxRetransmits property */
void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value);

/** @brief Getter of the protocol property */
jb_String RTCDataChannelInit_protocol(const RTCDataChannelInit *self);

/** @brief Setter of the protocol property */
void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, jb_String * value);

/** @brief Getter of the negotiated property */
bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self);

/** @brief Setter of the negotiated property */
void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value);

/** @brief Getter of the id property */
unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self);

/** @brief Setter of the id property */
void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value);

/** @brief Constructor of the RTCDataChannelInit dictionary type */
RTCDataChannelInit RTCDataChannelInit_new();

#ifdef __cplusplus
}
#endif
