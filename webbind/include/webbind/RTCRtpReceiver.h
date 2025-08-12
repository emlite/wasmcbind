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
typedef struct RTCRtpReceiveParameters RTCRtpReceiveParameters;
typedef struct RTCRtpContributingSource RTCRtpContributingSource;
typedef struct RTCRtpSynchronizationSource RTCRtpSynchronizationSource;
typedef struct RTCStatsReport RTCStatsReport;


/**
 * @brief Interface RTCRtpReceiver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpReceiver)
 */
DECLARE_EMLITE_TYPE(RTCRtpReceiver, em_Val);

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack RTCRtpReceiver_track(const RTCRtpReceiver *self);

/**
 * @brief Gets the `transport` property. 
*/
RTCDtlsTransport RTCRtpReceiver_transport(const RTCRtpReceiver *self);

/**
 * @brief Calls the `getCapabilities` method. 
*/
RTCRtpCapabilities RTCRtpReceiver_getCapabilities(RTCRtpReceiver* self , jb_String * kind);

/**
 * @brief Calls the `getParameters` method. 
*/
RTCRtpReceiveParameters RTCRtpReceiver_getParameters(RTCRtpReceiver* self );

/**
 * @brief Calls the `getContributingSources` method. 
*/
jb_Array RTCRtpReceiver_getContributingSources(RTCRtpReceiver* self );

/**
 * @brief Calls the `getSynchronizationSources` method. 
*/
jb_Array RTCRtpReceiver_getSynchronizationSources(RTCRtpReceiver* self );

/**
 * @brief Calls the `getStats` method. 
*/
jb_Promise RTCRtpReceiver_getStats(RTCRtpReceiver* self );

/**
 * @brief Gets the `jitterBufferTarget` property. 
*/
jb_Any RTCRtpReceiver_jitterBufferTarget(const RTCRtpReceiver *self);

/**
 * @brief Sets the `jitterBufferTarget` property. 
*/
void RTCRtpReceiver_set_jitterBufferTarget(RTCRtpReceiver* self, jb_Any * value);

/**
 * @brief Gets the `transform` property. 
*/
jb_Any RTCRtpReceiver_transform(const RTCRtpReceiver *self);

/**
 * @brief Sets the `transform` property. 
*/
void RTCRtpReceiver_set_transform(RTCRtpReceiver* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
