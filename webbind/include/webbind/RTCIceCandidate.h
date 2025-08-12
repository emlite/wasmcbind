#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCLocalIceCandidateInit RTCLocalIceCandidateInit;
typedef struct RTCIceCandidateInit RTCIceCandidateInit;


/**
 * @brief Interface RTCIceCandidate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCIceCandidate)
 */
DECLARE_EMLITE_TYPE(RTCIceCandidate, em_Val);

/**
 * @brief Creates a new `RTCIceCandidate` object. 
*/
RTCIceCandidate RTCIceCandidate_new0();

/**
 * @brief Creates a new `RTCIceCandidate` object. 
*/
RTCIceCandidate RTCIceCandidate_new1(RTCLocalIceCandidateInit * candidateInitDict);

/**
 * @brief Gets the `candidate` property. 
*/
jb_String RTCIceCandidate_candidate(const RTCIceCandidate *self);

/**
 * @brief Gets the `sdpMid` property. 
*/
jb_String RTCIceCandidate_sdpMid(const RTCIceCandidate *self);

/**
 * @brief Gets the `sdpMLineIndex` property. 
*/
unsigned short RTCIceCandidate_sdpMLineIndex(const RTCIceCandidate *self);

/**
 * @brief Gets the `foundation` property. 
*/
jb_String RTCIceCandidate_foundation(const RTCIceCandidate *self);

/**
 * @brief Gets the `component` property. 
*/
RTCIceComponent RTCIceCandidate_component(const RTCIceCandidate *self);

/**
 * @brief Gets the `priority` property. 
*/
unsigned long RTCIceCandidate_priority(const RTCIceCandidate *self);

/**
 * @brief Gets the `address` property. 
*/
jb_String RTCIceCandidate_address(const RTCIceCandidate *self);

/**
 * @brief Gets the `protocol` property. 
*/
RTCIceProtocol RTCIceCandidate_protocol(const RTCIceCandidate *self);

/**
 * @brief Gets the `port` property. 
*/
unsigned short RTCIceCandidate_port(const RTCIceCandidate *self);

/**
 * @brief Gets the `type` property. 
*/
RTCIceCandidateType RTCIceCandidate_type(const RTCIceCandidate *self);

/**
 * @brief Gets the `tcpType` property. 
*/
RTCIceTcpCandidateType RTCIceCandidate_tcpType(const RTCIceCandidate *self);

/**
 * @brief Gets the `relatedAddress` property. 
*/
jb_String RTCIceCandidate_relatedAddress(const RTCIceCandidate *self);

/**
 * @brief Gets the `relatedPort` property. 
*/
unsigned short RTCIceCandidate_relatedPort(const RTCIceCandidate *self);

/**
 * @brief Gets the `usernameFragment` property. 
*/
jb_String RTCIceCandidate_usernameFragment(const RTCIceCandidate *self);

/**
 * @brief Gets the `relayProtocol` property. 
*/
RTCIceServerTransportProtocol RTCIceCandidate_relayProtocol(const RTCIceCandidate *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String RTCIceCandidate_url(const RTCIceCandidate *self);

/**
 * @brief Calls the `toJSON` method. 
*/
RTCIceCandidateInit RTCIceCandidate_toJSON(RTCIceCandidate* self );

#ifdef __cplusplus
}
#endif
