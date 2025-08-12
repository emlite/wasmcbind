#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentPictureInPictureEventInit DocumentPictureInPictureEventInit;
typedef struct Window Window;


/**
 * @brief Interface DocumentPictureInPictureEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DocumentPictureInPictureEvent)
 */
DECLARE_EMLITE_TYPE(DocumentPictureInPictureEvent, Event);

/**
 * @brief Creates a new `DocumentPictureInPictureEvent` object. 
*/
DocumentPictureInPictureEvent DocumentPictureInPictureEvent_new(jb_String * type, DocumentPictureInPictureEventInit * eventInitDict);

/**
 * @brief Gets the `window` property. 
*/
Window DocumentPictureInPictureEvent_window(const DocumentPictureInPictureEvent *self);

#ifdef __cplusplus
}
#endif
