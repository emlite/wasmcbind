#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct RTCDtlsTransport RTCDtlsTransport;
typedef struct RTCRtpCapabilities RTCRtpCapabilities;
typedef struct RTCRtpSendParameters RTCRtpSendParameters;
typedef struct RTCSetParameterOptions RTCSetParameterOptions;
typedef struct MediaStream MediaStream;
typedef struct RTCStatsReport RTCStatsReport;
typedef struct RTCDTMFSender RTCDTMFSender;
typedef struct RTCRtpCodec RTCRtpCodec;


typedef struct {
  em_Val inner;
} RTCRtpCapabilities;


DECLARE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);

jb_Sequence RTCRtpCapabilities_codecs( const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, const jb_Sequence* value);

jb_Sequence RTCRtpCapabilities_headerExtensions( const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} RTCRtpSendParameters;


DECLARE_EMLITE_TYPE(RTCRtpSendParameters, em_Val);

jb_DOMString RTCRtpSendParameters_transactionId( const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, const jb_DOMString* value);

jb_Sequence RTCRtpSendParameters_encodings( const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} RTCSetParameterOptions;


DECLARE_EMLITE_TYPE(RTCSetParameterOptions, em_Val);
typedef struct {
  em_Val inner;
} RTCRtpSender;


DECLARE_EMLITE_TYPE(RTCRtpSender, em_Val);

MediaStreamTrack RTCRtpSender_track( const RTCRtpSender *self);

RTCDtlsTransport RTCRtpSender_transport( const RTCRtpSender *self);

RTCRtpCapabilities RTCRtpSender_getCapabilities(RTCRtpSender* self , const jb_DOMString* kind);

jb_Promise RTCRtpSender_setParameters(RTCRtpSender* self , const RTCRtpSendParameters* parameters);

jb_Promise RTCRtpSender_setParameters(RTCRtpSender* self , const RTCRtpSendParameters* parameters, const RTCSetParameterOptions* setParameterOptions);

RTCRtpSendParameters RTCRtpSender_getParameters(RTCRtpSender* self );

jb_Promise RTCRtpSender_replaceTrack(RTCRtpSender* self , const MediaStreamTrack* withTrack);

jb_Undefined RTCRtpSender_setStreams(RTCRtpSender* self , const MediaStream* streams);

jb_Promise RTCRtpSender_getStats(RTCRtpSender* self );

jb_Any RTCRtpSender_transform( const RTCRtpSender *self);

void RTCRtpSender_set_transform(RTCRtpSender* self, const jb_Any* value);

jb_Promise RTCRtpSender_generateKeyFrame(RTCRtpSender* self );

jb_Promise RTCRtpSender_generateKeyFrame(RTCRtpSender* self , const jb_Sequence* rids);

RTCDTMFSender RTCRtpSender_dtmf( const RTCRtpSender *self);
