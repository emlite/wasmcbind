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

DECLARE_EMLITE_TYPE(MediaDevices, EventTarget);

jb_Any MediaDevices_ondevicechange(const MediaDevices *self);

void MediaDevices_set_ondevicechange(MediaDevices* self, jb_Any * value);

jb_Promise MediaDevices_enumerateDevices(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput0(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput1(MediaDevices* self , AudioOutputOptions * options);

jb_Undefined MediaDevices_setCaptureHandleConfig0(MediaDevices* self );

jb_Undefined MediaDevices_setCaptureHandleConfig1(MediaDevices* self , CaptureHandleConfig * config);

jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , jb_Array * actions);

jb_Any MediaDevices_oncaptureaction(const MediaDevices *self);

void MediaDevices_set_oncaptureaction(MediaDevices* self, jb_Any * value);

MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia0(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia1(MediaDevices* self , MediaStreamConstraints * constraints);

jb_Promise MediaDevices_getViewportMedia0(MediaDevices* self );

jb_Promise MediaDevices_getViewportMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);

jb_Promise MediaDevices_getDisplayMedia0(MediaDevices* self );

jb_Promise MediaDevices_getDisplayMedia1(MediaDevices* self , DisplayMediaStreamOptions * options);

#ifdef __cplusplus
}
#endif
