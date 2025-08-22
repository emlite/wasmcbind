#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCPeerConnectionIceErrorEventInit */
DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEventInit, EventInit);

/** @brief Getter of the address property */
jb_String RTCPeerConnectionIceErrorEventInit_address(const RTCPeerConnectionIceErrorEventInit *self);

/** @brief Setter of the address property */
void RTCPeerConnectionIceErrorEventInit_set_address(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

/** @brief Getter of the port property */
unsigned short RTCPeerConnectionIceErrorEventInit_port(const RTCPeerConnectionIceErrorEventInit *self);

/** @brief Setter of the port property */
void RTCPeerConnectionIceErrorEventInit_set_port(RTCPeerConnectionIceErrorEventInit* self, unsigned short value);

/** @brief Getter of the url property */
jb_String RTCPeerConnectionIceErrorEventInit_url(const RTCPeerConnectionIceErrorEventInit *self);

/** @brief Setter of the url property */
void RTCPeerConnectionIceErrorEventInit_set_url(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

/** @brief Getter of the errorCode property */
unsigned short RTCPeerConnectionIceErrorEventInit_errorCode(const RTCPeerConnectionIceErrorEventInit *self);

/** @brief Setter of the errorCode property */
void RTCPeerConnectionIceErrorEventInit_set_errorCode(RTCPeerConnectionIceErrorEventInit* self, unsigned short value);

/** @brief Getter of the errorText property */
jb_String RTCPeerConnectionIceErrorEventInit_errorText(const RTCPeerConnectionIceErrorEventInit *self);

/** @brief Setter of the errorText property */
void RTCPeerConnectionIceErrorEventInit_set_errorText(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

/** @brief Constructor of the RTCPeerConnectionIceErrorEventInit dictionary type */
RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit_new();

#ifdef __cplusplus
}
#endif
