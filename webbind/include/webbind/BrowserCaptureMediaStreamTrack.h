#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MediaStreamTrack.h"
#include "enums.h"

typedef struct CropTarget CropTarget;
typedef struct BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack;
typedef struct RestrictionTarget RestrictionTarget;


typedef struct {
  MediaStreamTrack inner;
} BrowserCaptureMediaStreamTrack;


DECLARE_EMLITE_TYPE(BrowserCaptureMediaStreamTrack, MediaStreamTrack);

jb_Promise BrowserCaptureMediaStreamTrack_cropTo(BrowserCaptureMediaStreamTrack* self , const CropTarget* cropTarget);

BrowserCaptureMediaStreamTrack BrowserCaptureMediaStreamTrack_clone(BrowserCaptureMediaStreamTrack* self );

jb_Promise BrowserCaptureMediaStreamTrack_restrictTo(BrowserCaptureMediaStreamTrack* self , const RestrictionTarget* RestrictionTarget);
