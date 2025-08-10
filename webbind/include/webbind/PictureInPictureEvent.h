#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PictureInPictureEventInit PictureInPictureEventInit;
typedef struct PictureInPictureWindow PictureInPictureWindow;

DECLARE_EMLITE_TYPE(PictureInPictureEvent, Event);

PictureInPictureEvent PictureInPictureEvent_new(jb_String * type, PictureInPictureEventInit * eventInitDict);

PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow(const PictureInPictureEvent *self);

#ifdef __cplusplus
}
#endif
