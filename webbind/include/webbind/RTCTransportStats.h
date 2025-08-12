#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCTransportStats */
DECLARE_EMLITE_TYPE(RTCTransportStats, RTCStats);

/** @brief Getter of the packetsSent property */
long long RTCTransportStats_packetsSent(const RTCTransportStats *self);

/** @brief Setter of the packetsSent property */
void RTCTransportStats_set_packetsSent(RTCTransportStats* self, long long value);

/** @brief Getter of the packetsReceived property */
long long RTCTransportStats_packetsReceived(const RTCTransportStats *self);

/** @brief Setter of the packetsReceived property */
void RTCTransportStats_set_packetsReceived(RTCTransportStats* self, long long value);

/** @brief Getter of the bytesSent property */
long long RTCTransportStats_bytesSent(const RTCTransportStats *self);

/** @brief Setter of the bytesSent property */
void RTCTransportStats_set_bytesSent(RTCTransportStats* self, long long value);

/** @brief Getter of the bytesReceived property */
long long RTCTransportStats_bytesReceived(const RTCTransportStats *self);

/** @brief Setter of the bytesReceived property */
void RTCTransportStats_set_bytesReceived(RTCTransportStats* self, long long value);

/** @brief Getter of the iceRole property */
RTCIceRole RTCTransportStats_iceRole(const RTCTransportStats *self);

/** @brief Setter of the iceRole property */
void RTCTransportStats_set_iceRole(RTCTransportStats* self, RTCIceRole * value);

/** @brief Getter of the iceLocalUsernameFragment property */
jb_String RTCTransportStats_iceLocalUsernameFragment(const RTCTransportStats *self);

/** @brief Setter of the iceLocalUsernameFragment property */
void RTCTransportStats_set_iceLocalUsernameFragment(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the dtlsState property */
RTCDtlsTransportState RTCTransportStats_dtlsState(const RTCTransportStats *self);

/** @brief Setter of the dtlsState property */
void RTCTransportStats_set_dtlsState(RTCTransportStats* self, RTCDtlsTransportState * value);

/** @brief Getter of the iceState property */
RTCIceTransportState RTCTransportStats_iceState(const RTCTransportStats *self);

/** @brief Setter of the iceState property */
void RTCTransportStats_set_iceState(RTCTransportStats* self, RTCIceTransportState * value);

/** @brief Getter of the selectedCandidatePairId property */
jb_String RTCTransportStats_selectedCandidatePairId(const RTCTransportStats *self);

/** @brief Setter of the selectedCandidatePairId property */
void RTCTransportStats_set_selectedCandidatePairId(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the localCertificateId property */
jb_String RTCTransportStats_localCertificateId(const RTCTransportStats *self);

/** @brief Setter of the localCertificateId property */
void RTCTransportStats_set_localCertificateId(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the remoteCertificateId property */
jb_String RTCTransportStats_remoteCertificateId(const RTCTransportStats *self);

/** @brief Setter of the remoteCertificateId property */
void RTCTransportStats_set_remoteCertificateId(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the tlsVersion property */
jb_String RTCTransportStats_tlsVersion(const RTCTransportStats *self);

/** @brief Setter of the tlsVersion property */
void RTCTransportStats_set_tlsVersion(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the dtlsCipher property */
jb_String RTCTransportStats_dtlsCipher(const RTCTransportStats *self);

/** @brief Setter of the dtlsCipher property */
void RTCTransportStats_set_dtlsCipher(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the dtlsRole property */
RTCDtlsRole RTCTransportStats_dtlsRole(const RTCTransportStats *self);

/** @brief Setter of the dtlsRole property */
void RTCTransportStats_set_dtlsRole(RTCTransportStats* self, RTCDtlsRole * value);

/** @brief Getter of the srtpCipher property */
jb_String RTCTransportStats_srtpCipher(const RTCTransportStats *self);

/** @brief Setter of the srtpCipher property */
void RTCTransportStats_set_srtpCipher(RTCTransportStats* self, jb_String * value);

/** @brief Getter of the selectedCandidatePairChanges property */
unsigned long RTCTransportStats_selectedCandidatePairChanges(const RTCTransportStats *self);

/** @brief Setter of the selectedCandidatePairChanges property */
void RTCTransportStats_set_selectedCandidatePairChanges(RTCTransportStats* self, unsigned long value);

/** @brief Getter of the ccfbMessagesSent property */
unsigned long RTCTransportStats_ccfbMessagesSent(const RTCTransportStats *self);

/** @brief Setter of the ccfbMessagesSent property */
void RTCTransportStats_set_ccfbMessagesSent(RTCTransportStats* self, unsigned long value);

/** @brief Getter of the ccfbMessagesReceived property */
unsigned long RTCTransportStats_ccfbMessagesReceived(const RTCTransportStats *self);

/** @brief Setter of the ccfbMessagesReceived property */
void RTCTransportStats_set_ccfbMessagesReceived(RTCTransportStats* self, unsigned long value);

/** @brief Constructor of the RTCTransportStats dictionary type */
RTCTransportStats RTCTransportStats_new();

#ifdef __cplusplus
}
#endif
