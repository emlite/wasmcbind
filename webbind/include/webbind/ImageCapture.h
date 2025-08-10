#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct Blob Blob;
typedef struct PhotoSettings PhotoSettings;
typedef struct PhotoCapabilities PhotoCapabilities;
typedef struct ImageBitmap ImageBitmap;

DECLARE_EMLITE_TYPE(ImageCapture, em_Val);

ImageCapture ImageCapture_new(MediaStreamTrack * videoTrack);

jb_Promise ImageCapture_takePhoto0(ImageCapture* self );

jb_Promise ImageCapture_takePhoto1(ImageCapture* self , PhotoSettings * photoSettings);

jb_Promise ImageCapture_getPhotoCapabilities(ImageCapture* self );

jb_Promise ImageCapture_getPhotoSettings(ImageCapture* self );

jb_Promise ImageCapture_grabFrame(ImageCapture* self );

MediaStreamTrack ImageCapture_track(const ImageCapture *self);

#ifdef __cplusplus
}
#endif
