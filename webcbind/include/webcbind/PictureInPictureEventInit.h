#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PictureInPictureWindow PictureInPictureWindow;

/** @brief Dictionary type PictureInPictureEventInit */
DECLARE_EMLITE_TYPE(PictureInPictureEventInit, EventInit);

/** @brief Getter of the pictureInPictureWindow property */
PictureInPictureWindow PictureInPictureEventInit_pictureInPictureWindow(const PictureInPictureEventInit *self);

/** @brief Setter of the pictureInPictureWindow property */
void PictureInPictureEventInit_set_pictureInPictureWindow(PictureInPictureEventInit* self, PictureInPictureWindow * value);

/** @brief Constructor of the PictureInPictureEventInit dictionary type */
PictureInPictureEventInit PictureInPictureEventInit_new();

#ifdef __cplusplus
}
#endif
