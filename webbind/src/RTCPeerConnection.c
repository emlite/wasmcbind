#include <webbind/RTCPeerConnection.h>
#include <webbind/RTCSessionDescription.h>
#include <webbind/RTCIceTransport.h>
#include <webbind/RTCIdentityAssertion.h>
#include <webbind/RTCCertificate.h>
#include <webbind/RTCRtpSender.h>
#include <webbind/RTCRtpReceiver.h>
#include <webbind/RTCRtpTransceiver.h>
#include <webbind/MediaStreamTrack.h>
#include <webbind/MediaStream.h>
#include <webbind/RTCSctpTransport.h>
#include <webbind/RTCDataChannel.h>
#include <webbind/RTCStatsReport.h>


DEFINE_EMLITE_TYPE(RTCOfferOptions, em_Val);


bool RTCOfferOptions_offerToReceiveAudio(const RTCOfferOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "offerToReceiveAudio"));
}


void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "offerToReceiveAudio", value);
}


bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "offerToReceiveVideo"));
}


void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "offerToReceiveVideo", value);
}

DEFINE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);


RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, const RTCSdpType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_DOMString RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdp"));
}


void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sdp", value);
}

DEFINE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);


RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, const RTCSdpType* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


jb_DOMString RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "sdp"));
}


void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "sdp", value);
}

DEFINE_EMLITE_TYPE(RTCConfiguration, em_Val);


jb_Sequence RTCConfiguration_iceServers(const RTCConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "iceServers"));
}


void RTCConfiguration_set_iceServers(RTCConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "iceServers", value);
}


RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCIceTransportPolicy, em_Val_get(em_Val_as_val(self->inner), "iceTransportPolicy"));
}


void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, const RTCIceTransportPolicy* value) {
    em_Val_set(em_Val_as_val(self->inner), "iceTransportPolicy", value);
}


RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCBundlePolicy, em_Val_get(em_Val_as_val(self->inner), "bundlePolicy"));
}


void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, const RTCBundlePolicy* value) {
    em_Val_set(em_Val_as_val(self->inner), "bundlePolicy", value);
}


RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCRtcpMuxPolicy, em_Val_get(em_Val_as_val(self->inner), "rtcpMuxPolicy"));
}


void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, const RTCRtcpMuxPolicy* value) {
    em_Val_set(em_Val_as_val(self->inner), "rtcpMuxPolicy", value);
}


jb_Sequence RTCConfiguration_certificates(const RTCConfiguration *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "certificates"));
}


void RTCConfiguration_set_certificates(RTCConfiguration* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "certificates", value);
}


unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), "iceCandidatePoolSize"));
}


void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), "iceCandidatePoolSize", value);
}

DEFINE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);


jb_DOMString RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "protocol", value);
}


jb_DOMString RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "usernameHint"));
}


void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "usernameHint", value);
}


jb_DOMString RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "peerIdentity"));
}


void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "peerIdentity", value);
}

DEFINE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);


RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, const RTCRtpTransceiverDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


jb_Sequence RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "streams"));
}


void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "streams", value);
}


jb_Sequence RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "sendEncodings"));
}


void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "sendEncodings", value);
}

DEFINE_EMLITE_TYPE(RTCDataChannelInit, em_Val);


bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ordered"));
}


void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ordered", value);
}


unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "maxPacketLifeTime"));
}


void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "maxPacketLifeTime", value);
}


unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "maxRetransmits"));
}


void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "maxRetransmits", value);
}


jb_USVString RTCDataChannelInit_protocol(const RTCDataChannelInit *self) {
    return em_Val_as(jb_USVString, em_Val_get(em_Val_as_val(self->inner), "protocol"));
}


void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, const jb_USVString* value) {
    em_Val_set(em_Val_as_val(self->inner), "protocol", value);
}


bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "negotiated"));
}


void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "negotiated", value);
}


unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}

DEFINE_EMLITE_TYPE(RTCPeerConnection, EventTarget);


RTCPeerConnection RTCPeerConnection_new() : EventTarget(em_Val_global("RTCPeerConnection").new_()) {
        return RTCPeerConnection(em_Val_new(em_Val_global("RTCPeerConnection", ));
      }


RTCPeerConnection RTCPeerConnection_new(const RTCConfiguration* configuration) : EventTarget(em_Val_global("RTCPeerConnection").new_(em_Val_from(configuration))) {
        return RTCPeerConnection(em_Val_new(em_Val_global("RTCPeerConnection", em_Val_from(configuration)));
      }


jb_Promise RTCPeerConnection_createOffer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createOffer", em_Val_from(successCallback), em_Val_from(failureCallback)));
}


jb_Promise RTCPeerConnection_createOffer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback, const RTCOfferOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createOffer", em_Val_from(successCallback), em_Val_from(failureCallback), em_Val_from(options)));
}


jb_Promise RTCPeerConnection_createAnswer(RTCPeerConnection* self , const jb_Function* successCallback, const jb_Function* failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createAnswer", em_Val_from(successCallback), em_Val_from(failureCallback)));
}


jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , const RTCLocalSessionDescriptionInit* description, const jb_Any* successCallback, const jb_Function* failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setLocalDescription", em_Val_from(description), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSessionDescription RTCPeerConnection_localDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "localDescription"));
}


RTCSessionDescription RTCPeerConnection_currentLocalDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "currentLocalDescription"));
}


RTCSessionDescription RTCPeerConnection_pendingLocalDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "pendingLocalDescription"));
}


jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , const RTCSessionDescriptionInit* description, const jb_Any* successCallback, const jb_Function* failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setRemoteDescription", em_Val_from(description), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSessionDescription RTCPeerConnection_remoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "remoteDescription"));
}


RTCSessionDescription RTCPeerConnection_currentRemoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "currentRemoteDescription"));
}


RTCSessionDescription RTCPeerConnection_pendingRemoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), "pendingRemoteDescription"));
}


jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , const RTCIceCandidateInit* candidate, const jb_Any* successCallback, const jb_Function* failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "addIceCandidate", em_Val_from(candidate), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSignalingState RTCPeerConnection_signalingState(const RTCPeerConnection *self) {
    return em_Val_as(RTCSignalingState, em_Val_get(EventTarget_as_val(self->inner), "signalingState"));
}


RTCIceGatheringState RTCPeerConnection_iceGatheringState(const RTCPeerConnection *self) {
    return em_Val_as(RTCIceGatheringState, em_Val_get(EventTarget_as_val(self->inner), "iceGatheringState"));
}


RTCIceConnectionState RTCPeerConnection_iceConnectionState(const RTCPeerConnection *self) {
    return em_Val_as(RTCIceConnectionState, em_Val_get(EventTarget_as_val(self->inner), "iceConnectionState"));
}


RTCPeerConnectionState RTCPeerConnection_connectionState(const RTCPeerConnection *self) {
    return em_Val_as(RTCPeerConnectionState, em_Val_get(EventTarget_as_val(self->inner), "connectionState"));
}


bool RTCPeerConnection_canTrickleIceCandidates(const RTCPeerConnection *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "canTrickleIceCandidates"));
}


jb_Undefined RTCPeerConnection_restartIce(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "restartIce"));
}


RTCConfiguration RTCPeerConnection_getConfiguration(RTCPeerConnection* self ) {
    return em_Val_as(RTCConfiguration, em_Val_call(EventTarget_as_val(self->inner), "getConfiguration"));
}


jb_Undefined RTCPeerConnection_setConfiguration(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setConfiguration"));
}


jb_Undefined RTCPeerConnection_setConfiguration(RTCPeerConnection* self , const RTCConfiguration* configuration) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setConfiguration", em_Val_from(configuration)));
}


jb_Undefined RTCPeerConnection_close(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any RTCPeerConnection_onnegotiationneeded(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onnegotiationneeded"));
}


void RTCPeerConnection_set_onnegotiationneeded(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onnegotiationneeded", value);
}


jb_Any RTCPeerConnection_onicecandidate(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onicecandidate"));
}


void RTCPeerConnection_set_onicecandidate(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onicecandidate", value);
}


jb_Any RTCPeerConnection_onicecandidateerror(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onicecandidateerror"));
}


void RTCPeerConnection_set_onicecandidateerror(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onicecandidateerror", value);
}


jb_Any RTCPeerConnection_onsignalingstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsignalingstatechange"));
}


void RTCPeerConnection_set_onsignalingstatechange(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsignalingstatechange", value);
}


jb_Any RTCPeerConnection_oniceconnectionstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oniceconnectionstatechange"));
}


void RTCPeerConnection_set_oniceconnectionstatechange(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oniceconnectionstatechange", value);
}


jb_Any RTCPeerConnection_onicegatheringstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onicegatheringstatechange"));
}


void RTCPeerConnection_set_onicegatheringstatechange(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onicegatheringstatechange", value);
}


jb_Any RTCPeerConnection_onconnectionstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnectionstatechange"));
}


void RTCPeerConnection_set_onconnectionstatechange(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnectionstatechange", value);
}


jb_Undefined RTCPeerConnection_setIdentityProvider(RTCPeerConnection* self , const jb_DOMString* provider) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setIdentityProvider", em_Val_from(provider)));
}


jb_Undefined RTCPeerConnection_setIdentityProvider(RTCPeerConnection* self , const jb_DOMString* provider, const RTCIdentityProviderOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setIdentityProvider", em_Val_from(provider), em_Val_from(options)));
}


jb_Promise RTCPeerConnection_getIdentityAssertion(RTCPeerConnection* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getIdentityAssertion"));
}


jb_Promise RTCPeerConnection_peerIdentity(const RTCPeerConnection *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), "peerIdentity"));
}


jb_DOMString RTCPeerConnection_idpLoginUrl(const RTCPeerConnection *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "idpLoginUrl"));
}


jb_DOMString RTCPeerConnection_idpErrorInfo(const RTCPeerConnection *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "idpErrorInfo"));
}


jb_Promise RTCPeerConnection_generateCertificate(RTCPeerConnection* self , const jb_Any* keygenAlgorithm) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rtcpeerconnection"), "generateCertificate", em_Val_from(keygenAlgorithm)));
}


jb_Sequence RTCPeerConnection_getSenders(RTCPeerConnection* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getSenders"));
}


jb_Sequence RTCPeerConnection_getReceivers(RTCPeerConnection* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getReceivers"));
}


jb_Sequence RTCPeerConnection_getTransceivers(RTCPeerConnection* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getTransceivers"));
}


RTCRtpSender RTCPeerConnection_addTrack(RTCPeerConnection* self , const MediaStreamTrack* track, const MediaStream* streams) {
    return em_Val_as(RTCRtpSender, em_Val_call(EventTarget_as_val(self->inner), "addTrack", em_Val_from(track), em_Val_from(streams)));
}


jb_Undefined RTCPeerConnection_removeTrack(RTCPeerConnection* self , const RTCRtpSender* sender) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeTrack", em_Val_from(sender)));
}


RTCRtpTransceiver RTCPeerConnection_addTransceiver(RTCPeerConnection* self , const jb_Any* trackOrKind) {
    return em_Val_as(RTCRtpTransceiver, em_Val_call(EventTarget_as_val(self->inner), "addTransceiver", em_Val_from(trackOrKind)));
}


RTCRtpTransceiver RTCPeerConnection_addTransceiver(RTCPeerConnection* self , const jb_Any* trackOrKind, const RTCRtpTransceiverInit* init) {
    return em_Val_as(RTCRtpTransceiver, em_Val_call(EventTarget_as_val(self->inner), "addTransceiver", em_Val_from(trackOrKind), em_Val_from(init)));
}


jb_Any RTCPeerConnection_ontrack(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ontrack"));
}


void RTCPeerConnection_set_ontrack(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ontrack", value);
}


RTCSctpTransport RTCPeerConnection_sctp(const RTCPeerConnection *self) {
    return em_Val_as(RTCSctpTransport, em_Val_get(EventTarget_as_val(self->inner), "sctp"));
}


RTCDataChannel RTCPeerConnection_createDataChannel(RTCPeerConnection* self , const jb_USVString* label) {
    return em_Val_as(RTCDataChannel, em_Val_call(EventTarget_as_val(self->inner), "createDataChannel", em_Val_from(label)));
}


RTCDataChannel RTCPeerConnection_createDataChannel(RTCPeerConnection* self , const jb_USVString* label, const RTCDataChannelInit* dataChannelDict) {
    return em_Val_as(RTCDataChannel, em_Val_call(EventTarget_as_val(self->inner), "createDataChannel", em_Val_from(label), em_Val_from(dataChannelDict)));
}


jb_Any RTCPeerConnection_ondatachannel(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondatachannel"));
}


void RTCPeerConnection_set_ondatachannel(RTCPeerConnection* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondatachannel", value);
}


jb_Promise RTCPeerConnection_getStats(RTCPeerConnection* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getStats"));
}


jb_Promise RTCPeerConnection_getStats(RTCPeerConnection* self , const MediaStreamTrack* selector) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getStats", em_Val_from(selector)));
}

