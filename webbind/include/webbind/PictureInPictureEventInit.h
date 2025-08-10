#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PictureInPictureWindow PictureInPictureWindow;

DECLARE_EMLITE_TYPE(PictureInPictureEventInit, EventInit);

PictureInPictureWindow PictureInPictureEventInit_pictureInPictureWindow(const PictureInPictureEventInit *self);

void PictureInPictureEventInit_set_pictureInPictureWindow(PictureInPictureEventInit* self, PictureInPictureWindow * value);

PictureInPictureEventInit PictureInPictureEventInit_new();

#ifdef __cplusplus
}
#endif
