#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaDeviceInfo MediaDeviceInfo;
typedef struct AudioOutputOptions AudioOutputOptions;
typedef struct CaptureHandleConfig CaptureHandleConfig;
typedef struct MediaTrackSupportedConstraints MediaTrackSupportedConstraints;
typedef struct MediaStream MediaStream;
typedef struct MediaStreamConstraints MediaStreamConstraints;
typedef struct DisplayMediaStreamOptions DisplayMediaStreamOptions;


/**
 * @brief Interface MediaDevices
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaDevices)
 */
DECLARE_EMLITE_TYPE(MediaDevices, EventTarget);

/**
 * @brief Gets the `ondevicechange` property. 
*/
jb_Any MediaDevices_ondevicechange(const MediaDevices *self);

/**
 * @brief Sets the `ondevicechange` property. 
*/
void MediaDevices_set_ondevicechange(MediaDevices* self, jb_Any * value);

/**
 * @brief Calls the `enumerateDevices` method. 
*/
jb_Promise MediaDevices_enumerateDevices(MediaDevices* self );

/**
 * @brief Calls the `selectAudioOutput` method. 
*/
jb_Promise MediaDevices_selectAudioOutput0(MediaDevices* self );

/**
 * @brief Calls the `selectAudioOutput` method. 
*/
jb_Promise MediaDevices_selectAudioOutput1(MediaDevices* self , AudioOutputOptions * options);

/**
 * @brief Calls the `setCaptureHandleConfig` method. 
*/
jb_Undefined MediaDevices_setCaptureHandleConfig0(MediaDevices* self );

/**
 * @brief Calls the `setCaptureHandleConfig` method. 
*/
jb_Undefined MediaDevices_setCaptureHandleConfig1(MediaDevices* self , CaptureHandleConfig * config);

/**
 * @brief Calls the `setSupportedCaptureActions` method. 
*/
jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , jb_Array * actions);

/**
 * @brief Gets the `oncaptureaction` property. 
*/
jb_Any MediaDevices_oncaptureaction(const MediaDevices *self);

/**
 * @brief Sets the `oncaptureaction` property. 
*/
void MediaDevices_set_oncaptureaction(MediaDevices* self, jb_Any * value);

/**
 * @brief Calls the `getSupportedConstraints` method. 
*/
MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self );

/**
 * @brief Calls the `getUserMedia` method. 
*/
jb_Promise MediaDevices_getUserMedia0(MediaDevices* self );

/**
 * @brief Calls the `getUserMedia` method. 
*/
jb_Promise MediaDevices_getUserMedia1(MediaDevices* self , MediaStreamConstraints * constraints);

/**
 * @brief Calls the `getViewportMedia` method. 
*/
jb_Promise MediaDevices_getViewportMedia0(MediaDevices* self );

/**
 * @brief Calls the `getViewportMedia` method. 
*/
jb_Promise MediaDevices_getViewportMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);

/**
 * @brief Calls the `getDisplayMedia` method. 
*/
jb_Promise MediaDevices_getDisplayMedia0(MediaDevices* self );

/**
 * @brief Calls the `getDisplayMedia` method. 
*/
jb_Promise MediaDevices_getDisplayMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);

#ifdef __cplusplus
}
#endif
