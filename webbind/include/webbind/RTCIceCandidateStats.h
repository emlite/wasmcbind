#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCIceCandidateStats */
DECLARE_EMLITE_TYPE(RTCIceCandidateStats, RTCStats);

/** @brief Getter of the transportId property */
jb_String RTCIceCandidateStats_transportId(const RTCIceCandidateStats *self);

/** @brief Setter of the transportId property */
void RTCIceCandidateStats_set_transportId(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the address property */
jb_String RTCIceCandidateStats_address(const RTCIceCandidateStats *self);

/** @brief Setter of the address property */
void RTCIceCandidateStats_set_address(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the port property */
long RTCIceCandidateStats_port(const RTCIceCandidateStats *self);

/** @brief Setter of the port property */
void RTCIceCandidateStats_set_port(RTCIceCandidateStats* self, long value);

/** @brief Getter of the protocol property */
jb_String RTCIceCandidateStats_protocol(const RTCIceCandidateStats *self);

/** @brief Setter of the protocol property */
void RTCIceCandidateStats_set_protocol(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the candidateType property */
RTCIceCandidateType RTCIceCandidateStats_candidateType(const RTCIceCandidateStats *self);

/** @brief Setter of the candidateType property */
void RTCIceCandidateStats_set_candidateType(RTCIceCandidateStats* self, RTCIceCandidateType * value);

/** @brief Getter of the priority property */
long RTCIceCandidateStats_priority(const RTCIceCandidateStats *self);

/** @brief Setter of the priority property */
void RTCIceCandidateStats_set_priority(RTCIceCandidateStats* self, long value);

/** @brief Getter of the url property */
jb_String RTCIceCandidateStats_url(const RTCIceCandidateStats *self);

/** @brief Setter of the url property */
void RTCIceCandidateStats_set_url(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the relayProtocol property */
RTCIceServerTransportProtocol RTCIceCandidateStats_relayProtocol(const RTCIceCandidateStats *self);

/** @brief Setter of the relayProtocol property */
void RTCIceCandidateStats_set_relayProtocol(RTCIceCandidateStats* self, RTCIceServerTransportProtocol * value);

/** @brief Getter of the foundation property */
jb_String RTCIceCandidateStats_foundation(const RTCIceCandidateStats *self);

/** @brief Setter of the foundation property */
void RTCIceCandidateStats_set_foundation(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the relatedAddress property */
jb_String RTCIceCandidateStats_relatedAddress(const RTCIceCandidateStats *self);

/** @brief Setter of the relatedAddress property */
void RTCIceCandidateStats_set_relatedAddress(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the relatedPort property */
long RTCIceCandidateStats_relatedPort(const RTCIceCandidateStats *self);

/** @brief Setter of the relatedPort property */
void RTCIceCandidateStats_set_relatedPort(RTCIceCandidateStats* self, long value);

/** @brief Getter of the usernameFragment property */
jb_String RTCIceCandidateStats_usernameFragment(const RTCIceCandidateStats *self);

/** @brief Setter of the usernameFragment property */
void RTCIceCandidateStats_set_usernameFragment(RTCIceCandidateStats* self, jb_String * value);

/** @brief Getter of the tcpType property */
RTCIceTcpCandidateType RTCIceCandidateStats_tcpType(const RTCIceCandidateStats *self);

/** @brief Setter of the tcpType property */
void RTCIceCandidateStats_set_tcpType(RTCIceCandidateStats* self, RTCIceTcpCandidateType * value);

/** @brief Constructor of the RTCIceCandidateStats dictionary type */
RTCIceCandidateStats RTCIceCandidateStats_new();

#ifdef __cplusplus
}
#endif
