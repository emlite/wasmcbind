#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PictureInPictureEventInit PictureInPictureEventInit;
typedef struct PictureInPictureWindow PictureInPictureWindow;


/**
 * @brief Interface PictureInPictureEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PictureInPictureEvent)
 */
DECLARE_EMLITE_TYPE(PictureInPictureEvent, Event);

/**
 * @brief Creates a new `PictureInPictureEvent` object. 
*/
PictureInPictureEvent PictureInPictureEvent_new(jb_String * type, PictureInPictureEventInit * eventInitDict);

/**
 * @brief Gets the `pictureInPictureWindow` property. 
*/
PictureInPictureWindow PictureInPictureEvent_pictureInPictureWindow(const PictureInPictureEvent *self);

#ifdef __cplusplus
}
#endif
