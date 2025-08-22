#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ImageTrack ImageTrack;


/**
 * @brief Interface ImageTrackList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ImageTrackList)
 */
DECLARE_EMLITE_TYPE(ImageTrackList, em_Val);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise ImageTrackList_ready(const ImageTrackList *self);

/**
 * @brief Gets the `length` property. 
*/
unsigned long ImageTrackList_length(const ImageTrackList *self);

/**
 * @brief Gets the `selectedIndex` property. 
*/
long ImageTrackList_selectedIndex(const ImageTrackList *self);

/**
 * @brief Gets the `selectedTrack` property. 
*/
ImageTrack ImageTrackList_selectedTrack(const ImageTrackList *self);

#ifdef __cplusplus
}
#endif
