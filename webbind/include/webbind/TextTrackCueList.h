#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextTrackCue TextTrackCue;


/**
 * @brief Interface TextTrackCueList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextTrackCueList)
 */
DECLARE_EMLITE_TYPE(TextTrackCueList, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long TextTrackCueList_length(const TextTrackCueList *self);

/**
 * @brief Calls the `getCueById` method. 
*/
TextTrackCue TextTrackCueList_getCueById(TextTrackCueList* self , jb_String * id);

#ifdef __cplusplus
}
#endif
