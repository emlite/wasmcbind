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


/**
 * @brief Interface ImageCapture
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageCapture)
 */
DECLARE_EMLITE_TYPE(ImageCapture, em_Val);

/**
 * @brief Creates a new `ImageCapture` object. 
*/
ImageCapture ImageCapture_new(MediaStreamTrack * videoTrack);

/**
 * @brief Calls the `takePhoto` method. 
*/
jb_Promise ImageCapture_takePhoto0(ImageCapture* self );

/**
 * @brief Calls the `takePhoto` method. 
*/
jb_Promise ImageCapture_takePhoto1(ImageCapture* self , PhotoSettings * photoSettings);

/**
 * @brief Calls the `getPhotoCapabilities` method. 
*/
jb_Promise ImageCapture_getPhotoCapabilities(ImageCapture* self );

/**
 * @brief Calls the `getPhotoSettings` method. 
*/
jb_Promise ImageCapture_getPhotoSettings(ImageCapture* self );

/**
 * @brief Calls the `grabFrame` method. 
*/
jb_Promise ImageCapture_grabFrame(ImageCapture* self );

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack ImageCapture_track(const ImageCapture *self);

#ifdef __cplusplus
}
#endif
