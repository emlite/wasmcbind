#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct RTCDtlsTransport RTCDtlsTransport;
typedef struct RTCRtpCapabilities RTCRtpCapabilities;
typedef struct RTCRtpSendParameters RTCRtpSendParameters;
typedef struct RTCSetParameterOptions RTCSetParameterOptions;
typedef struct MediaStream MediaStream;
typedef struct RTCStatsReport RTCStatsReport;
typedef struct RTCDTMFSender RTCDTMFSender;


/**
 * @brief Interface RTCRtpSender
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpSender)
 */
DECLARE_EMLITE_TYPE(RTCRtpSender, em_Val);

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack RTCRtpSender_track(const RTCRtpSender *self);

/**
 * @brief Gets the `transport` property. 
*/
RTCDtlsTransport RTCRtpSender_transport(const RTCRtpSender *self);

/**
 * @brief Calls the `getCapabilities` method. 
*/
RTCRtpCapabilities RTCRtpSender_getCapabilities(RTCRtpSender* self , jb_String * kind);

/**
 * @brief Calls the `setParameters` method. 
*/
jb_Promise RTCRtpSender_setParameters0(RTCRtpSender* self , RTCRtpSendParameters * parameters);

/**
 * @brief Calls the `setParameters` method. 
*/
jb_Promise RTCRtpSender_setParameters1(RTCRtpSender* self , RTCRtpSendParameters * parameters, RTCSetParameterOptions * setParameterOptions);

/**
 * @brief Calls the `getParameters` method. 
*/
RTCRtpSendParameters RTCRtpSender_getParameters(RTCRtpSender* self );

/**
 * @brief Calls the `replaceTrack` method. 
*/
jb_Promise RTCRtpSender_replaceTrack(RTCRtpSender* self , MediaStreamTrack * withTrack);

/**
 * @brief Calls the `setStreams` method. 
*/
jb_Undefined RTCRtpSender_setStreams(RTCRtpSender* self , MediaStream * streams);

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise RTCRtpSender_getStats(RTCRtpSender* self );

/**
 * @brief Gets the `transform` property. 
*/
jb_Any RTCRtpSender_transform(const RTCRtpSender *self);

/**
 * @brief Sets the `transform` property. 
*/
void RTCRtpSender_set_transform(RTCRtpSender* self, jb_Any * value);

/**
 * @brief Calls the `generateKeyFrame` method. 
*/
jb_Promise RTCRtpSender_generateKeyFrame0(RTCRtpSender* self );

/**
 * @brief Calls the `generateKeyFrame` method. 
*/
jb_Promise RTCRtpSender_generateKeyFrame1(RTCRtpSender* self , jb_Array * rids);

/**
 * @brief Gets the `dtmf` property. 
*/
RTCDTMFSender RTCRtpSender_dtmf(const RTCRtpSender *self);

#ifdef __cplusplus
}
#endif
