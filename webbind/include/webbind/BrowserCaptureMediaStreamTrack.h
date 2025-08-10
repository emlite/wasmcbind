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

DECLARE_EMLITE_TYPE(BrowserCaptureMediaStreamTrack, MediaStreamTrack);

jb_Promise BrowserCaptureMediaStreamTrack_cropTo(BrowserCaptureMediaStreamTrack* self , CropTarget * cropTarget);

BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack_clone(BrowserCaptureMediaStreamTrack* self );

jb_Promise BrowserCaptureMediaStreamTrack_restrictTo(BrowserCaptureMediaStreamTrack* self , RestrictionTarget * RestrictionTarget);

#ifdef __cplusplus
}
#endif
