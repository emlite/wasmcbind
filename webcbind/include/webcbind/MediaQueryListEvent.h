#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaQueryListEventInit MediaQueryListEventInit;


/**
 * @brief Interface MediaQueryListEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaQueryListEvent)
 */
DECLARE_EMLITE_TYPE(MediaQueryListEvent, Event);

/**
 * @brief Creates a new `MediaQueryListEvent` object. 
*/
MediaQueryListEvent MediaQueryListEvent_new0(jb_String * type);

/**
 * @brief Creates a new `MediaQueryListEvent` object. 
*/
MediaQueryListEvent MediaQueryListEvent_new1(jb_String * type, MediaQueryListEventInit * eventInitDict);

/**
 * @brief Gets the `media` property. 
*/
jb_String MediaQueryListEvent_media(const MediaQueryListEvent *self);

/**
 * @brief Gets the `matches` property. 
*/
bool MediaQueryListEvent_matches(const MediaQueryListEvent *self);

#ifdef __cplusplus
}
#endif
