#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCTransportStats, RTCStats);

long long RTCTransportStats_packetsSent(const RTCTransportStats *self);

void RTCTransportStats_set_packetsSent(RTCTransportStats* self, long long value);

long long RTCTransportStats_packetsReceived(const RTCTransportStats *self);

void RTCTransportStats_set_packetsReceived(RTCTransportStats* self, long long value);

long long RTCTransportStats_bytesSent(const RTCTransportStats *self);

void RTCTransportStats_set_bytesSent(RTCTransportStats* self, long long value);

long long RTCTransportStats_bytesReceived(const RTCTransportStats *self);

void RTCTransportStats_set_bytesReceived(RTCTransportStats* self, long long value);

RTCIceRole RTCTransportStats_iceRole(const RTCTransportStats *self);

void RTCTransportStats_set_iceRole(RTCTransportStats* self, RTCIceRole * value);

jb_String RTCTransportStats_iceLocalUsernameFragment(const RTCTransportStats *self);

void RTCTransportStats_set_iceLocalUsernameFragment(RTCTransportStats* self, jb_String * value);

RTCDtlsTransportState RTCTransportStats_dtlsState(const RTCTransportStats *self);

void RTCTransportStats_set_dtlsState(RTCTransportStats* self, RTCDtlsTransportState * value);

RTCIceTransportState RTCTransportStats_iceState(const RTCTransportStats *self);

void RTCTransportStats_set_iceState(RTCTransportStats* self, RTCIceTransportState * value);

jb_String RTCTransportStats_selectedCandidatePairId(const RTCTransportStats *self);

void RTCTransportStats_set_selectedCandidatePairId(RTCTransportStats* self, jb_String * value);

jb_String RTCTransportStats_localCertificateId(const RTCTransportStats *self);

void RTCTransportStats_set_localCertificateId(RTCTransportStats* self, jb_String * value);

jb_String RTCTransportStats_remoteCertificateId(const RTCTransportStats *self);

void RTCTransportStats_set_remoteCertificateId(RTCTransportStats* self, jb_String * value);

jb_String RTCTransportStats_tlsVersion(const RTCTransportStats *self);

void RTCTransportStats_set_tlsVersion(RTCTransportStats* self, jb_String * value);

jb_String RTCTransportStats_dtlsCipher(const RTCTransportStats *self);

void RTCTransportStats_set_dtlsCipher(RTCTransportStats* self, jb_String * value);

RTCDtlsRole RTCTransportStats_dtlsRole(const RTCTransportStats *self);

void RTCTransportStats_set_dtlsRole(RTCTransportStats* self, RTCDtlsRole * value);

jb_String RTCTransportStats_srtpCipher(const RTCTransportStats *self);

void RTCTransportStats_set_srtpCipher(RTCTransportStats* self, jb_String * value);

unsigned long RTCTransportStats_selectedCandidatePairChanges(const RTCTransportStats *self);

void RTCTransportStats_set_selectedCandidatePairChanges(RTCTransportStats* self, unsigned long value);

unsigned long RTCTransportStats_ccfbMessagesSent(const RTCTransportStats *self);

void RTCTransportStats_set_ccfbMessagesSent(RTCTransportStats* self, unsigned long value);

unsigned long RTCTransportStats_ccfbMessagesReceived(const RTCTransportStats *self);

void RTCTransportStats_set_ccfbMessagesReceived(RTCTransportStats* self, unsigned long value);

RTCTransportStats RTCTransportStats_new();

#ifdef __cplusplus
}
#endif
