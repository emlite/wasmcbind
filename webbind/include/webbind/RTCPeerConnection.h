#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "RTCIceTransport.h"
#include "enums.h"

typedef struct RTCOfferOptions RTCOfferOptions;
typedef struct RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit;
typedef struct RTCSessionDescription RTCSessionDescription;
typedef struct RTCSessionDescriptionInit RTCSessionDescriptionInit;
typedef struct RTCConfiguration RTCConfiguration;
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


typedef struct {
  em_Val inner;
} RTCOfferOptions;


DECLARE_EMLITE_TYPE(RTCOfferOptions, em_Val);

bool RTCOfferOptions_offerToReceiveAudio( const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value);

bool RTCOfferOptions_offerToReceiveVideo( const RTCOfferOptions *self);

void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value);
typedef struct {
  em_Val inner;
} RTCLocalSessionDescriptionInit;


DECLARE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);

RTCSdpType RTCLocalSessionDescriptionInit_type( const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, const RTCSdpType* value);

jb_DOMString RTCLocalSessionDescriptionInit_sdp( const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RTCSessionDescriptionInit;


DECLARE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);

RTCSdpType RTCSessionDescriptionInit_type( const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, const RTCSdpType* value);

jb_DOMString RTCSessionDescriptionInit_sdp( const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RTCConfiguration;


DECLARE_EMLITE_TYPE(RTCConfiguration, em_Val);

jb_Sequence RTCConfiguration_iceServers( const RTCConfiguration *self);

void RTCConfiguration_set_iceServers(RTCConfiguration* self, const jb_Sequence* value);

RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy( const RTCConfiguration *self);

void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, const RTCIceTransportPolicy* value);

RTCBundlePolicy RTCConfiguration_bundlePolicy( const RTCConfiguration *self);

void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, const RTCBundlePolicy* value);

RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy( const RTCConfiguration *self);

void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, const RTCRtcpMuxPolicy* value);

jb_Sequence RTCConfiguration_certificates( const RTCConfiguration *self);

void RTCConfiguration_set_certificates(RTCConfiguration* self, const jb_Sequence* value);

unsigned char RTCConfiguration_iceCandidatePoolSize( const RTCConfiguration *self);

void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value);
typedef struct {
  em_Val inner;
} RTCIdentityProviderOptions;


DECLARE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);

jb_DOMString RTCIdentityProviderOptions_protocol( const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, const jb_DOMString* value);

jb_DOMString RTCIdentityProviderOptions_usernameHint( const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, const jb_DOMString* value);

jb_DOMString RTCIdentityProviderOptions_peerIdentity( const RTCIdentityProviderOptions *self);

void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} RTCRtpTransceiverInit;


DECLARE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);

RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction( const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, const RTCRtpTransceiverDirection* value);

jb_Sequence RTCRtpTransceiverInit_streams( const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, const jb_Sequence* value);

jb_Sequence RTCRtpTransceiverInit_sendEncodings( const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} RTCDataChannelInit;


DECLARE_EMLITE_TYPE(RTCDataChannelInit, em_Val);

bool RTCDataChannelInit_ordered( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_maxPacketLifeTime( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value);

unsigned short RTCDataChannelInit_maxRetransmits( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value);

jb_USVString RTCDataChannelInit_protocol( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, const jb_USVString* value);

bool RTCDataChannelInit_negotiated( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_id( const RTCDataChannelInit *self);

void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value);
typedef struct {
  EventTarget inner;
} RTCPeerConnection;


DECLARE_EMLITE_TYPE(RTCPeerConnection, EventTarget);

RTCPeerConnection RTCPeerConnection_new();

RTCPeerConnection RTCPeerConnection_new(const RTCConfiguration* configuration);

jb_Promise RTCPeerConnection_createOffer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback);

jb_Promise RTCPeerConnection_createOffer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback, const RTCOfferOptions* options);

jb_Promise RTCPeerConnection_createAnswer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback);

jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , const RTCLocalSessionDescriptionInit* description, const jb_Any* successCallback, const jb_Function* failureCallback);

RTCSessionDescription RTCPeerConnection_localDescription( const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_currentLocalDescription( const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_pendingLocalDescription( const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , const RTCSessionDescriptionInit* description, const jb_Any* successCallback, const jb_Function* failureCallback);

RTCSessionDescription RTCPeerConnection_remoteDescription( const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_currentRemoteDescription( const RTCPeerConnection *self);

RTCSessionDescription RTCPeerConnection_pendingRemoteDescription( const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , const RTCIceCandidateInit* candidate, const jb_Any* successCallback, const jb_Function* failureCallback);

RTCSignalingState RTCPeerConnection_signalingState( const RTCPeerConnection *self);

RTCIceGatheringState RTCPeerConnection_iceGatheringState( const RTCPeerConnection *self);

RTCIceConnectionState RTCPeerConnection_iceConnectionState( const RTCPeerConnection *self);

RTCPeerConnectionState RTCPeerConnection_connectionState( const RTCPeerConnection *self);

bool RTCPeerConnection_canTrickleIceCandidates( const RTCPeerConnection *self);

jb_Undefined RTCPeerConnection_restartIce(RTCPeerConnection* self );

RTCConfiguration RTCPeerConnection_getConfiguration(RTCPeerConnection* self );

jb_Undefined RTCPeerConnection_setConfiguration(RTCPeerConnection* self );

jb_Undefined RTCPeerConnection_setConfiguration(RTCPeerConnection* self , const RTCConfiguration* configuration);

jb_Undefined RTCPeerConnection_close(RTCPeerConnection* self );

jb_Any RTCPeerConnection_onnegotiationneeded( const RTCPeerConnection *self);

void RTCPeerConnection_set_onnegotiationneeded(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_onicecandidate( const RTCPeerConnection *self);

void RTCPeerConnection_set_onicecandidate(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_onicecandidateerror( const RTCPeerConnection *self);

void RTCPeerConnection_set_onicecandidateerror(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_onsignalingstatechange( const RTCPeerConnection *self);

void RTCPeerConnection_set_onsignalingstatechange(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_oniceconnectionstatechange( const RTCPeerConnection *self);

void RTCPeerConnection_set_oniceconnectionstatechange(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_onicegatheringstatechange( const RTCPeerConnection *self);

void RTCPeerConnection_set_onicegatheringstatechange(RTCPeerConnection* self, const jb_Any* value);

jb_Any RTCPeerConnection_onconnectionstatechange( const RTCPeerConnection *self);

void RTCPeerConnection_set_onconnectionstatechange(RTCPeerConnection* self, const jb_Any* value);

jb_Undefined RTCPeerConnection_setIdentityProvider(RTCPeerConnection* self , const jb_DOMString* provider);

jb_Undefined RTCPeerConnection_setIdentityProvider(RTCPeerConnection* self , const jb_DOMString* provider, const RTCIdentityProviderOptions* options);

jb_Promise RTCPeerConnection_getIdentityAssertion(RTCPeerConnection* self );

jb_Promise RTCPeerConnection_peerIdentity( const RTCPeerConnection *self);

jb_DOMString RTCPeerConnection_idpLoginUrl( const RTCPeerConnection *self);

jb_DOMString RTCPeerConnection_idpErrorInfo( const RTCPeerConnection *self);

jb_Promise RTCPeerConnection_generateCertificate(RTCPeerConnection* self , const jb_Any* keygenAlgorithm);

jb_Sequence RTCPeerConnection_getSenders(RTCPeerConnection* self );

jb_Sequence RTCPeerConnection_getReceivers(RTCPeerConnection* self );

jb_Sequence RTCPeerConnection_getTransceivers(RTCPeerConnection* self );

RTCRtpSender RTCPeerConnection_addTrack(RTCPeerConnection* self , const MediaStreamTrack* track, const MediaStream* streams);

jb_Undefined RTCPeerConnection_removeTrack(RTCPeerConnection* self , const RTCRtpSender* sender);

RTCRtpTransceiver RTCPeerConnection_addTransceiver(RTCPeerConnection* self , const jb_Any* trackOrKind);

RTCRtpTransceiver RTCPeerConnection_addTransceiver(RTCPeerConnection* self , const jb_Any* trackOrKind, const RTCRtpTransceiverInit* init);

jb_Any RTCPeerConnection_ontrack( const RTCPeerConnection *self);

void RTCPeerConnection_set_ontrack(RTCPeerConnection* self, const jb_Any* value);

RTCSctpTransport RTCPeerConnection_sctp( const RTCPeerConnection *self);

RTCDataChannel RTCPeerConnection_createDataChannel(RTCPeerConnection* self , const jb_USVString* label);

RTCDataChannel RTCPeerConnection_createDataChannel(RTCPeerConnection* self , const jb_USVString* label, const RTCDataChannelInit* dataChannelDict);

jb_Any RTCPeerConnection_ondatachannel( const RTCPeerConnection *self);

void RTCPeerConnection_set_ondatachannel(RTCPeerConnection* self, const jb_Any* value);

jb_Promise RTCPeerConnection_getStats(RTCPeerConnection* self );

jb_Promise RTCPeerConnection_getStats(RTCPeerConnection* self , const MediaStreamTrack* selector);
