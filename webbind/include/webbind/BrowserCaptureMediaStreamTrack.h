#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaStreamTrack.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CropTarget CropTarget;
typedef struct RestrictionTarget RestrictionTarget;


/**
 * @brief Interface BrowserCaptureMediaStreamTrack
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BrowserCaptureMediaStreamTrack)
 */
DECLARE_EMLITE_TYPE(BrowserCaptureMediaStreamTrack, MediaStreamTrack);

/**
 * @brief Calls the `cropTo` method. 
*/
jb_Promise BrowserCaptureMediaStreamTrack_cropTo(BrowserCaptureMediaStreamTrack* self , CropTarget * cropTarget);

/**
 * @brief Calls the `clone` method. 
*/
BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack_clone(BrowserCaptureMediaStreamTrack* self );

/**
 * @brief Calls the `restrictTo` method. 
*/
jb_Promise BrowserCaptureMediaStreamTrack_restrictTo(BrowserCaptureMediaStreamTrack* self , RestrictionTarget * RestrictionTarget);

#ifdef __cplusplus
}
#endif
