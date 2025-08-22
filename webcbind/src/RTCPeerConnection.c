#include <webcbind/RTCPeerConnection.h>

#include <webcbind/RTCConfiguration.h>
#include <webcbind/RTCOfferOptions.h>
#include <webcbind/RTCLocalSessionDescriptionInit.h>
#include <webcbind/RTCSessionDescription.h>
#include <webcbind/RTCSessionDescriptionInit.h>
#include <webcbind/RTCIceCandidateInit.h>
#include <webcbind/RTCIdentityProviderOptions.h>
#include <webcbind/RTCIdentityAssertion.h>
#include <webcbind/RTCCertificate.h>
#include <webcbind/RTCRtpSender.h>
#include <webcbind/RTCRtpReceiver.h>
#include <webcbind/RTCRtpTransceiver.h>
#include <webcbind/MediaStreamTrack.h>
#include <webcbind/MediaStream.h>
#include <webcbind/RTCRtpTransceiverInit.h>
#include <webcbind/RTCSctpTransport.h>
#include <webcbind/RTCDataChannel.h>
#include <webcbind/RTCDataChannelInit.h>
#include <webcbind/RTCStatsReport.h>

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


jb_Promise RTCPeerConnection_setLocalDescription(RTCPeerConnection* self , RTCLocalSessionDescriptionInit * description, jb_Function * successCallback, jb_Function * failureCallback) {
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


jb_Promise RTCPeerConnection_setRemoteDescription(RTCPeerConnection* self , RTCSessionDescriptionInit * description, jb_Function * successCallback, jb_Function * failureCallback) {
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


jb_Promise RTCPeerConnection_addIceCandidate(RTCPeerConnection* self , RTCIceCandidateInit * candidate, jb_Function * successCallback, jb_Function * failureCallback) {
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

