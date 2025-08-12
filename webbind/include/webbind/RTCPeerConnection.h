#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCConfiguration RTCConfiguration;
typedef struct RTCOfferOptions RTCOfferOptions;
typedef struct RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit;
typedef struct RTCSessionDescription RTCSessionDescription;
typedef struct RTCSessionDescriptionInit RTCSessionDescriptionInit;
typedef struct RTCIceCandidateInit RTCIceCandidateInit;
typedef struct RTCIdentityProviderOptions RTCIdentityProviderOptions;
typedef struct RTCIdentityAssertion RTCIdentityAssertion;
typedef struct RTCCertificate RTCCertificate;
typedef struct RTCRtpSender RTCRtpSender;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiverInit RTCRtpTransceiverInit;
typedef struct RTCSctpTransport RTCSctpTransport;
typedef struct RTCDataChannel RTCDataChannel;
typedef struct RTCDataChannelInit RTCDataChannelInit;
typedef struct RTCStatsReport RTCStatsReport;


/**
 * @brief Interface RTCPeerConnection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCPeerConnection)
 */
DECLARE_EMLITE_TYPE(RTCPeerConnection, EventTarget);

/**
 * @brief Creates a new `RTCPeerConnection` object. 
*/
RTCPeerConnection RTCPeerConnection_new0();

/**
 * @brief Creates a new `RTCPeerConnection` object. 
*/
RTCPeerConnection RTCPeerConnection_new1(RTCConfiguration * configuration);

/**
 * @brief Calls the `createOffer` method. 
*/
jb_Promise RTCPeerConnection_createOffer0(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback);

/**
 * @brief Calls the `createOffer` method. 
*/
jb_Promise RTCPeerConnection_createOffer1(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback, RTCOfferOptions * options);

/**
 * @brief Calls the `createAnswer` method. 
*/
jb_Promise RTCPeerConnection_createAnswer(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback);

/**
 * @brief Calls the `setLocalDescription` method. 
*/
jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , RTCLocalSessionDescriptionInit * description, jb_Function * successCallback, jb_Function * failureCallback);

/**
 * @brief Gets the `localDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_localDescription(const RTCPeerConnection *self);

/**
 * @brief Gets the `currentLocalDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_currentLocalDescription(const RTCPeerConnection *self);

/**
 * @brief Gets the `pendingLocalDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_pendingLocalDescription(const RTCPeerConnection *self);

/**
 * @brief Calls the `setRemoteDescription` method. 
*/
jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , RTCSessionDescriptionInit * description, jb_Function * successCallback, jb_Function * failureCallback);

/**
 * @brief Gets the `remoteDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_remoteDescription(const RTCPeerConnection *self);

/**
 * @brief Gets the `currentRemoteDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_currentRemoteDescription(const RTCPeerConnection *self);

/**
 * @brief Gets the `pendingRemoteDescription` property. 
*/
RTCSessionDescription RTCPeerConnection_pendingRemoteDescription(const RTCPeerConnection *self);

/**
 * @brief Calls the `addIceCandidate` method. 
*/
jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , RTCIceCandidateInit * candidate, jb_Function * successCallback, jb_Function * failureCallback);

/**
 * @brief Gets the `signalingState` property. 
*/
RTCSignalingState RTCPeerConnection_signalingState(const RTCPeerConnection *self);

/**
 * @brief Gets the `iceGatheringState` property. 
*/
RTCIceGatheringState RTCPeerConnection_iceGatheringState(const RTCPeerConnection *self);

/**
 * @brief Gets the `iceConnectionState` property. 
*/
RTCIceConnectionState RTCPeerConnection_iceConnectionState(const RTCPeerConnection *self);

/**
 * @brief Gets the `connectionState` property. 
*/
RTCPeerConnectionState RTCPeerConnection_connectionState(const RTCPeerConnection *self);

/**
 * @brief Gets the `canTrickleIceCandidates` property. 
*/
bool RTCPeerConnection_canTrickleIceCandidates(const RTCPeerConnection *self);

/**
 * @brief Calls the `restartIce` method. 
*/
jb_Undefined RTCPeerConnection_restartIce(RTCPeerConnection* self );

/**
 * @brief Calls the `getConfiguration` method. 
*/
RTCConfiguration RTCPeerConnection_getConfiguration(RTCPeerConnection* self );

/**
 * @brief Calls the `setConfiguration` method. 
*/
jb_Undefined RTCPeerConnection_setConfiguration0(RTCPeerConnection* self );

/**
 * @brief Calls the `setConfiguration` method. 
*/
jb_Undefined RTCPeerConnection_setConfiguration1(RTCPeerConnection* self , RTCConfiguration * configuration);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined RTCPeerConnection_close(RTCPeerConnection* self );

/**
 * @brief Gets the `onnegotiationneeded` property. 
*/
jb_Any RTCPeerConnection_onnegotiationneeded(const RTCPeerConnection *self);

/**
 * @brief Sets the `onnegotiationneeded` property. 
*/
void RTCPeerConnection_set_onnegotiationneeded(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `onicecandidate` property. 
*/
jb_Any RTCPeerConnection_onicecandidate(const RTCPeerConnection *self);

/**
 * @brief Sets the `onicecandidate` property. 
*/
void RTCPeerConnection_set_onicecandidate(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `onicecandidateerror` property. 
*/
jb_Any RTCPeerConnection_onicecandidateerror(const RTCPeerConnection *self);

/**
 * @brief Sets the `onicecandidateerror` property. 
*/
void RTCPeerConnection_set_onicecandidateerror(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `onsignalingstatechange` property. 
*/
jb_Any RTCPeerConnection_onsignalingstatechange(const RTCPeerConnection *self);

/**
 * @brief Sets the `onsignalingstatechange` property. 
*/
void RTCPeerConnection_set_onsignalingstatechange(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `oniceconnectionstatechange` property. 
*/
jb_Any RTCPeerConnection_oniceconnectionstatechange(const RTCPeerConnection *self);

/**
 * @brief Sets the `oniceconnectionstatechange` property. 
*/
void RTCPeerConnection_set_oniceconnectionstatechange(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `onicegatheringstatechange` property. 
*/
jb_Any RTCPeerConnection_onicegatheringstatechange(const RTCPeerConnection *self);

/**
 * @brief Sets the `onicegatheringstatechange` property. 
*/
void RTCPeerConnection_set_onicegatheringstatechange(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `onconnectionstatechange` property. 
*/
jb_Any RTCPeerConnection_onconnectionstatechange(const RTCPeerConnection *self);

/**
 * @brief Sets the `onconnectionstatechange` property. 
*/
void RTCPeerConnection_set_onconnectionstatechange(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Calls the `setIdentityProvider` method. 
*/
jb_Undefined RTCPeerConnection_setIdentityProvider0(RTCPeerConnection* self , jb_String * provider);

/**
 * @brief Calls the `setIdentityProvider` method. 
*/
jb_Undefined RTCPeerConnection_setIdentityProvider1(RTCPeerConnection* self , jb_String * provider, RTCIdentityProviderOptions * options);

/**
 * @brief Calls the `getIdentityAssertion` method. 
*/
jb_Promise RTCPeerConnection_getIdentityAssertion(RTCPeerConnection* self );

/**
 * @brief Gets the `peerIdentity` property. 
*/
jb_Promise RTCPeerConnection_peerIdentity(const RTCPeerConnection *self);

/**
 * @brief Gets the `idpLoginUrl` property. 
*/
jb_String RTCPeerConnection_idpLoginUrl(const RTCPeerConnection *self);

/**
 * @brief Gets the `idpErrorInfo` property. 
*/
jb_String RTCPeerConnection_idpErrorInfo(const RTCPeerConnection *self);

/**
 * @brief Calls the `generateCertificate` method. 
*/
jb_Promise RTCPeerConnection_generateCertificate(RTCPeerConnection* self , jb_Any * keygenAlgorithm);

/**
 * @brief Calls the `getSenders` method. 
*/
jb_Array RTCPeerConnection_getSenders(RTCPeerConnection* self );

/**
 * @brief Calls the `getReceivers` method. 
*/
jb_Array RTCPeerConnection_getReceivers(RTCPeerConnection* self );

/**
 * @brief Calls the `getTransceivers` method. 
*/
jb_Array RTCPeerConnection_getTransceivers(RTCPeerConnection* self );

/**
 * @brief Calls the `addTrack` method. 
*/
RTCRtpSender RTCPeerConnection_addTrack(RTCPeerConnection* self , MediaStreamTrack * track, MediaStream * streams);

/**
 * @brief Calls the `removeTrack` method. 
*/
jb_Undefined RTCPeerConnection_removeTrack(RTCPeerConnection* self , RTCRtpSender * sender);

/**
 * @brief Calls the `addTransceiver` method. 
*/
RTCRtpTransceiver RTCPeerConnection_addTransceiver0(RTCPeerConnection* self , jb_Any * trackOrKind);

/**
 * @brief Calls the `addTransceiver` method. 
*/
RTCRtpTransceiver RTCPeerConnection_addTransceiver1(RTCPeerConnection* self , jb_Any * trackOrKind, RTCRtpTransceiverInit * init);

/**
 * @brief Gets the `ontrack` property. 
*/
jb_Any RTCPeerConnection_ontrack(const RTCPeerConnection *self);

/**
 * @brief Sets the `ontrack` property. 
*/
void RTCPeerConnection_set_ontrack(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Gets the `sctp` property. 
*/
RTCSctpTransport RTCPeerConnection_sctp(const RTCPeerConnection *self);

/**
 * @brief Calls the `createDataChannel` method. 
*/
RTCDataChannel RTCPeerConnection_createDataChannel0(RTCPeerConnection* self , jb_String * label);

/**
 * @brief Calls the `createDataChannel` method. 
*/
RTCDataChannel RTCPeerConnection_createDataChannel1(RTCPeerConnection* self , jb_String * label, RTCDataChannelInit * dataChannelDict);

/**
 * @brief Gets the `ondatachannel` property. 
*/
jb_Any RTCPeerConnection_ondatachannel(const RTCPeerConnection *self);

/**
 * @brief Sets the `ondatachannel` property. 
*/
void RTCPeerConnection_set_ondatachannel(RTCPeerConnection* self, jb_Any * value);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise RTCPeerConnection_getStats0(RTCPeerConnection* self );

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise RTCPeerConnection_getStats1(RTCPeerConnection* self , MediaStreamTrack * selector);

#ifdef __cplusplus
}
#endif
