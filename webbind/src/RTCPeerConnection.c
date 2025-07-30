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
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offerToReceiveAudio")));
}


void RTCOfferOptions_set_offerToReceiveAudio(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offerToReceiveAudio"), em_Val_from(value));
}


bool RTCOfferOptions_offerToReceiveVideo(const RTCOfferOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("offerToReceiveVideo")));
}


void RTCOfferOptions_set_offerToReceiveVideo(RTCOfferOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("offerToReceiveVideo"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);


RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, RTCSdpType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdp")));
}


void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdp"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);


RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self) {
    return em_Val_as(RTCSdpType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, RTCSdpType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sdp")));
}


void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sdp"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCConfiguration, em_Val);


jb_Array RTCConfiguration_iceServers(const RTCConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceServers")));
}


void RTCConfiguration_set_iceServers(RTCConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceServers"), em_Val_from(value));
}


RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCIceTransportPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceTransportPolicy")));
}


void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, RTCIceTransportPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceTransportPolicy"), em_Val_from(value));
}


RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCBundlePolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bundlePolicy")));
}


void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, RTCBundlePolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bundlePolicy"), em_Val_from(value));
}


RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self) {
    return em_Val_as(RTCRtcpMuxPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtcpMuxPolicy")));
}


void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, RTCRtcpMuxPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtcpMuxPolicy"), em_Val_from(value));
}


jb_Array RTCConfiguration_certificates(const RTCConfiguration *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("certificates")));
}


void RTCConfiguration_set_certificates(RTCConfiguration* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("certificates"), em_Val_from(value));
}


unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self) {
    return em_Val_as(unsigned char, em_Val_get(em_Val_as_val(self->inner), em_Val_from("iceCandidatePoolSize")));
}


void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("iceCandidatePoolSize"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCIdentityProviderOptions, em_Val);


jb_String RTCIdentityProviderOptions_protocol(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void RTCIdentityProviderOptions_set_protocol(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


jb_String RTCIdentityProviderOptions_usernameHint(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usernameHint")));
}


void RTCIdentityProviderOptions_set_usernameHint(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("usernameHint"), em_Val_from(value));
}


jb_String RTCIdentityProviderOptions_peerIdentity(const RTCIdentityProviderOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("peerIdentity")));
}


void RTCIdentityProviderOptions_set_peerIdentity(RTCIdentityProviderOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("peerIdentity"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);


RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self) {
    return em_Val_as(RTCRtpTransceiverDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, RTCRtpTransceiverDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_Array RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("streams")));
}


void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("streams"), em_Val_from(value));
}


jb_Array RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sendEncodings")));
}


void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sendEncodings"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCDataChannelInit, em_Val);


bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ordered")));
}


void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ordered"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxPacketLifeTime")));
}


void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxPacketLifeTime"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxRetransmits")));
}


void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxRetransmits"), em_Val_from(value));
}


jb_String RTCDataChannelInit_protocol(const RTCDataChannelInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("protocol")));
}


void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("protocol"), em_Val_from(value));
}


bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("negotiated")));
}


void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("negotiated"), em_Val_from(value));
}


unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(RTCPeerConnection, EventTarget);


RTCPeerConnection RTCPeerConnection_new0() {
        em_Val vv = em_Val_new(em_Val_global("RTCPeerConnection") );
        return RTCPeerConnection_from_val(&vv);
      }


RTCPeerConnection RTCPeerConnection_new1(RTCConfiguration * configuration) {
        em_Val vv = em_Val_new(em_Val_global("RTCPeerConnection") , em_Val_from(configuration));
        return RTCPeerConnection_from_val(&vv);
      }


jb_Promise RTCPeerConnection_createOffer0(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createOffer", em_Val_from(successCallback), em_Val_from(failureCallback)));
}


jb_Promise RTCPeerConnection_createOffer1(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback, RTCOfferOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createOffer", em_Val_from(successCallback), em_Val_from(failureCallback), em_Val_from(options)));
}


jb_Promise RTCPeerConnection_createAnswer(RTCPeerConnection* self , jb_Function * successCallback, jb_Function * failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "createAnswer", em_Val_from(successCallback), em_Val_from(failureCallback)));
}


jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , RTCLocalSessionDescriptionInit * description, jb_Any * successCallback, jb_Function * failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setLocalDescription", em_Val_from(description), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSessionDescription RTCPeerConnection_localDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("localDescription")));
}


RTCSessionDescription RTCPeerConnection_currentLocalDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentLocalDescription")));
}


RTCSessionDescription RTCPeerConnection_pendingLocalDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pendingLocalDescription")));
}


jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , RTCSessionDescriptionInit * description, jb_Any * successCallback, jb_Function * failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "setRemoteDescription", em_Val_from(description), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSessionDescription RTCPeerConnection_remoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("remoteDescription")));
}


RTCSessionDescription RTCPeerConnection_currentRemoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("currentRemoteDescription")));
}


RTCSessionDescription RTCPeerConnection_pendingRemoteDescription(const RTCPeerConnection *self) {
    return em_Val_as(RTCSessionDescription, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("pendingRemoteDescription")));
}


jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , RTCIceCandidateInit * candidate, jb_Any * successCallback, jb_Function * failureCallback) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "addIceCandidate", em_Val_from(candidate), em_Val_from(successCallback), em_Val_from(failureCallback)));
}


RTCSignalingState RTCPeerConnection_signalingState(const RTCPeerConnection *self) {
    return em_Val_as(RTCSignalingState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("signalingState")));
}


RTCIceGatheringState RTCPeerConnection_iceGatheringState(const RTCPeerConnection *self) {
    return em_Val_as(RTCIceGatheringState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("iceGatheringState")));
}


RTCIceConnectionState RTCPeerConnection_iceConnectionState(const RTCPeerConnection *self) {
    return em_Val_as(RTCIceConnectionState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("iceConnectionState")));
}


RTCPeerConnectionState RTCPeerConnection_connectionState(const RTCPeerConnection *self) {
    return em_Val_as(RTCPeerConnectionState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("connectionState")));
}


bool RTCPeerConnection_canTrickleIceCandidates(const RTCPeerConnection *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("canTrickleIceCandidates")));
}


jb_Undefined RTCPeerConnection_restartIce(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "restartIce"));
}


RTCConfiguration RTCPeerConnection_getConfiguration(RTCPeerConnection* self ) {
    return em_Val_as(RTCConfiguration, em_Val_call(EventTarget_as_val(self->inner), "getConfiguration"));
}


jb_Undefined RTCPeerConnection_setConfiguration0(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setConfiguration"));
}


jb_Undefined RTCPeerConnection_setConfiguration1(RTCPeerConnection* self , RTCConfiguration * configuration) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setConfiguration", em_Val_from(configuration)));
}


jb_Undefined RTCPeerConnection_close(RTCPeerConnection* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Any RTCPeerConnection_onnegotiationneeded(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onnegotiationneeded")));
}


void RTCPeerConnection_set_onnegotiationneeded(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onnegotiationneeded"), em_Val_from(value));
}


jb_Any RTCPeerConnection_onicecandidate(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onicecandidate")));
}


void RTCPeerConnection_set_onicecandidate(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onicecandidate"), em_Val_from(value));
}


jb_Any RTCPeerConnection_onicecandidateerror(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onicecandidateerror")));
}


void RTCPeerConnection_set_onicecandidateerror(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onicecandidateerror"), em_Val_from(value));
}


jb_Any RTCPeerConnection_onsignalingstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsignalingstatechange")));
}


void RTCPeerConnection_set_onsignalingstatechange(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsignalingstatechange"), em_Val_from(value));
}


jb_Any RTCPeerConnection_oniceconnectionstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oniceconnectionstatechange")));
}


void RTCPeerConnection_set_oniceconnectionstatechange(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oniceconnectionstatechange"), em_Val_from(value));
}


jb_Any RTCPeerConnection_onicegatheringstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onicegatheringstatechange")));
}


void RTCPeerConnection_set_onicegatheringstatechange(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onicegatheringstatechange"), em_Val_from(value));
}


jb_Any RTCPeerConnection_onconnectionstatechange(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnectionstatechange")));
}


void RTCPeerConnection_set_onconnectionstatechange(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnectionstatechange"), em_Val_from(value));
}


jb_Undefined RTCPeerConnection_setIdentityProvider0(RTCPeerConnection* self , jb_String * provider) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setIdentityProvider", em_Val_from(provider)));
}


jb_Undefined RTCPeerConnection_setIdentityProvider1(RTCPeerConnection* self , jb_String * provider, RTCIdentityProviderOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setIdentityProvider", em_Val_from(provider), em_Val_from(options)));
}


jb_Promise RTCPeerConnection_getIdentityAssertion(RTCPeerConnection* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getIdentityAssertion"));
}


jb_Promise RTCPeerConnection_peerIdentity(const RTCPeerConnection *self) {
    return em_Val_as(jb_Promise, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("peerIdentity")));
}


jb_String RTCPeerConnection_idpLoginUrl(const RTCPeerConnection *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("idpLoginUrl")));
}


jb_String RTCPeerConnection_idpErrorInfo(const RTCPeerConnection *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("idpErrorInfo")));
}


jb_Promise RTCPeerConnection_generateCertificate(RTCPeerConnection* self , jb_Any * keygenAlgorithm) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("rtcpeerconnection"), "generateCertificate", em_Val_from(keygenAlgorithm)));
}


jb_Array RTCPeerConnection_getSenders(RTCPeerConnection* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getSenders"));
}


jb_Array RTCPeerConnection_getReceivers(RTCPeerConnection* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getReceivers"));
}


jb_Array RTCPeerConnection_getTransceivers(RTCPeerConnection* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getTransceivers"));
}


RTCRtpSender RTCPeerConnection_addTrack(RTCPeerConnection* self , MediaStreamTrack * track, MediaStream * streams) {
    return em_Val_as(RTCRtpSender, em_Val_call(EventTarget_as_val(self->inner), "addTrack", em_Val_from(track), em_Val_from(streams)));
}


jb_Undefined RTCPeerConnection_removeTrack(RTCPeerConnection* self , RTCRtpSender * sender) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeTrack", em_Val_from(sender)));
}


RTCRtpTransceiver RTCPeerConnection_addTransceiver0(RTCPeerConnection* self , jb_Any * trackOrKind) {
    return em_Val_as(RTCRtpTransceiver, em_Val_call(EventTarget_as_val(self->inner), "addTransceiver", em_Val_from(trackOrKind)));
}


RTCRtpTransceiver RTCPeerConnection_addTransceiver1(RTCPeerConnection* self , jb_Any * trackOrKind, RTCRtpTransceiverInit * init) {
    return em_Val_as(RTCRtpTransceiver, em_Val_call(EventTarget_as_val(self->inner), "addTransceiver", em_Val_from(trackOrKind), em_Val_from(init)));
}


jb_Any RTCPeerConnection_ontrack(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ontrack")));
}


void RTCPeerConnection_set_ontrack(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ontrack"), em_Val_from(value));
}


RTCSctpTransport RTCPeerConnection_sctp(const RTCPeerConnection *self) {
    return em_Val_as(RTCSctpTransport, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sctp")));
}


RTCDataChannel RTCPeerConnection_createDataChannel0(RTCPeerConnection* self , jb_String * label) {
    return em_Val_as(RTCDataChannel, em_Val_call(EventTarget_as_val(self->inner), "createDataChannel", em_Val_from(label)));
}


RTCDataChannel RTCPeerConnection_createDataChannel1(RTCPeerConnection* self , jb_String * label, RTCDataChannelInit * dataChannelDict) {
    return em_Val_as(RTCDataChannel, em_Val_call(EventTarget_as_val(self->inner), "createDataChannel", em_Val_from(label), em_Val_from(dataChannelDict)));
}


jb_Any RTCPeerConnection_ondatachannel(const RTCPeerConnection *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondatachannel")));
}


void RTCPeerConnection_set_ondatachannel(RTCPeerConnection* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondatachannel"), em_Val_from(value));
}


jb_Promise RTCPeerConnection_getStats0(RTCPeerConnection* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getStats"));
}


jb_Promise RTCPeerConnection_getStats1(RTCPeerConnection* self , MediaStreamTrack * selector) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getStats", em_Val_from(selector)));
}

